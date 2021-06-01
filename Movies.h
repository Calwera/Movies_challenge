#ifndef MOVIES
#define MOVIES
#include <vector>
#include <string>
#include "Movie.h"
#include <iostream>

class Movies
{
public:
    std::vector<Movie> *wkt{nullptr};
    Movies();
    void add_movie();
    std::string pg_secure();
    void display();
    void increment(std::string);
};
#endif
