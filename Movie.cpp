#include "Movie.h"
Movie::Movie(std::string name_val, int watched_count_val, std::string rating_val)
    : name(name_val), watched_count(watched_count_val), rating(rating_val)
{
}
bool Movie::get_name(std::string name_val)
{
    if (name_val == name)
        return true;
    return false;
}
void Movie::get_watched_num()
{
    watched_count++;
}
