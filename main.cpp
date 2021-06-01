#include <iostream>
#include "Movie.h"
#include "Movies.h"

using namespace std;

int main()
{
    Movies Kol1;
    Kol1.add_movie();
    Kol1.add_movie();
    Kol1.display();
    string kwd("abc");
    Kol1.increment(kwd);
    Kol1.display();
    return 0;
}