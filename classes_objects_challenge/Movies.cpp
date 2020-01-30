#include "Movies.h"
#include <string>
#include <iostream>

Movies::Movies()
{
}

Movies::~Movies()
{
}

bool Movies::add_movie(std::string name, std::string rating, int watched)
{
	for (const Movie &movie : movies) {
		if (movie.get_name() == name) {
			std::cout << movie.get_name() << " already exists!" << std::endl;
			return false;
		}
	}
	Movie temp{ name, rating, watched };
	movies.push_back(temp);
	std::cout << temp.get_name() << " added!" << std::endl;
	return true;
}

bool Movies::increment_watched(std::string name)
{
	for (Movie &movie : movies) {
		if (movie.get_name() == name) {
			movie.increment_watched();
			return true;
		}
		std::cout << name << " not found!" << std::endl;
		return false;
	}
}

void Movies::display() const
{
	std::cout << std::endl;
	if (movies.size() == 0) {
		std::cout << "No movies yet, you need to add some!" << std::endl;
	}
	else
	{
		for (const auto &movie : movies)
			std::cout << "Name: " << movie.get_name() << "; rating: " << movie.get_rating() << "; watched: " << movie.get_watched() << std::endl;
	}
}