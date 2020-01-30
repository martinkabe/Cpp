#include <iostream>
#include <string>
#include "Movie.h"
#include "Movies.h"

using std::cout;
using std::endl;
using std::string;


int main()
{
	
	Movies my_movies;
	my_movies.display();

	my_movies.add_movie("somename1", "PG-13", 2);
	my_movies.add_movie("somename2", "PG", 5);
	my_movies.add_movie("somename3", "PG", 7);

	my_movies.display();

	my_movies.add_movie("somename3", "PG", 5);
	my_movies.add_movie("somename4", "PG-13", 2);

	my_movies.display();

	my_movies.increment_watched("somename1");
	my_movies.increment_watched("somename5");

	my_movies.display();

	return 0;
}
