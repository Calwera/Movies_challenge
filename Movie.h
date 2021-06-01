#ifndef MOVIE
#define MOVIE
#include <string>
#include "Movie.h"
class Movie
{
private:
    Movie(std::string, std::string, int);
    std::string name{};
    int watched_count{};
    std::string rating{};
    friend class Movies;
};
#endif
