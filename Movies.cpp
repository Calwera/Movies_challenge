#include "Movies.h"
using namespace std;
Movies::Movies()
{
    wkt = new vector<Movie>;
}
void Movies::add_movie()
{
    bool repeat{false};
    string name_movie, rating_movie;
    int count{};
    cout << "\nProsze podac nazwe filmu: ";
    cin >> name_movie;

    for (Movie colection : *wkt)
        if (name_movie.compare(colection.name) == 0)
            repeat = true;
    if (!repeat)
    {
        cout << "\nProsze podac Rating PG: ";
        rating_movie = pg_secure();
        cout << "\nProsze podac ile razy ogladano: ";
        cin >> count;
        (*wkt).push_back(Movie(name_movie, rating_movie, count));
        cout << "\nDodano nowa pozycje: ";
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
    cout << "\nProsze podac jedna z opcji \n1 - G\n2 - PG \n3 - PG-13 \n4 - R: ";
    cin >> choise;
    while (1)
    {
        if (choise == "G")
            return choise;
        else if (choise == "PG")
            return choise;
        else if (choise == "PG-13")
            return choise;
        else if (choise == "R")
            return choise;
        else
            cout << "Bledna kategoria sprobuj jeszcze raz" << endl;
    }
}
void Movies::display()
{
    for (Movie colection : *wkt)
        cout << colection.name << " " << colection.rating << " " << colection.watched_count << endl;
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
