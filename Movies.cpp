#include "Movies.h"
using namespace std;
Movies::Movies()
{
    wkt = new vector<Movie>;
}
void Movies::add_movie()
{

    string name_movie, rating_movie;
    int count{};
    cout << "\nProsze podac nazwe filmu: ";
    cin >> name_movie;

    if (!check_col_movie(name_movie))
    {
        cout << "\nProsze podac Rating PG: ";
        rating_movie = pg_secure();
        cout << "Prosze podac ile razy ogladano: ";
        cin >> count;
        if (rating_movie == "")
            (*wkt).push_back(Movie(name_movie, count));
        else
            (*wkt).push_back(Movie(name_movie, count, rating_movie));
        cout << "Dodano nowa pozycje: " << name_movie << endl;
    }
    else
    {
        cout << "\nNazwa powtorzona !" << endl;
        cout << "Nie dodano filmu..." << endl;
    }
}
std::string Movies::pg_secure()
{
    std::string choise;
    cout << "\nProsze podac jedna z opcji: \n1 - G\n2 - PG \n3 - PG-13 \n4 - R: \nQ - pomin: ";
    cin >> choise;
    while (1)
    {
        if (choise == "G" || choise == "g")
            return choise;
        else if (choise == "PG" || choise == "pg")
            return choise;
        else if (choise == "PG-13" || choise == "pg-13" || choise == "pg13")
            return choise;
        else if (choise == "R" || choise == "r")
            return choise;
        else if (choise == "Q" || choise == "q")
            return "";
        else
            cout << "Bledna kategoria" << endl;
    }
}
void Movies::display()
{
    int how_to_show{};
    cout << "/////////////WYSWIETLAM\\\\\\\\\\\\\\\\\\" << endl;
    cout << "Wyswietl calosc dowolny znak " << endl;
    cout << "Wyswietl konkretny film 1 :" << endl;
    cin >> how_to_show;
    if (how_to_show == 1)
    {
        std::string name_to_show;
        cout << "Podaj nazwe filmu do sprawdzenia: ";
        cin >> name_to_show;
        if (check_col_movie(name_to_show))
            cout << name_to_show << endl;
        else
            cout << "Nie ma takiego filmu " << endl;
    }
    else
    {
        cout << "=============Kolekcja================" << endl;
        for (Movie colection : *wkt)
            cout << colection.name << " " << colection.rating << " " << colection.watched_count << endl;
        cout << "=====================================" << endl;
    }
}
void Movies::increment(std::string movie)
{
    bool increment{false};
    for (int i = 0; i < (*wkt).size(); i++)
    {
        if (movie.compare((*wkt).at(i).name) == 0)
        {
            (*wkt).at(i).watched_count += 1;
            increment = true;
            cout << "Zwiekszono liczbe wyswietlen!" << endl;
        }
    }
    if (!increment)
        cout << "Nie znaleziono filmu !" << endl;
}
bool Movies::check_col_movie(std::string name_val)
{
    bool duplicate{false};
    for (Movie colection : *wkt)
        if (colection.get_name(name_val)) // powtarza sie nazwa
            return true;
    return false;
}