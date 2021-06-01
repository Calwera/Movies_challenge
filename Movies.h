#ifndef MOVIES
#define MOVIES
#include <vector>
class Movies
{
public:
    vector<Movie> *wkt{nullptr};
    Movies();
    void add_movie();
    std::string pg_secure();
};
#endif
