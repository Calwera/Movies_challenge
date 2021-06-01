#include "Movies.h"
Movies::Movies()
{
    *wkt = new vector<Movie>;
}
void Movies::add_movie()
{
    std::name_movie, std::rating_movie;
    int count{};
    cout << "\nProsze podac nazwe filmu: ";
    cin >> name_movie;
    cout << "\nProsze podac Rating PG: ";
    rating_movie = (*wkt).pg_secure();
    cout << "\nProsze podac ile razy ogladano: ";
    cin >> count;
    (*wkt).pushback(name_movie, rating_movie, count);
    cout << "\nDodano nowa pozycje: ";
}
std::string Movies::pg_secure()
{
}
