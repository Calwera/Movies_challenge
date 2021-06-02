#ifndef MOVIE
#define MOVIE
#include <string>
#include "Movie.h"
class Movie
{
private:
    Movie(std::string, int, std::string = "Undefined");
    std::string name{};
    int watched_count{};
    std::string rating{};
    friend class Movies;

public:
    bool get_name(std::string);
    void get_watched_num();
};
#endif
