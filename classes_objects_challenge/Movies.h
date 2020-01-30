#ifndef _MOVIES_H_
#define _MOVIES_H_

#include <string>
#include <vector>
#include "Movie.h"

class Movies
{
private:
	std::vector<Movie> movies;
public:
	// constructor
	Movies();
	// destructor
	~Movies();

	// add movies into movies vector
	bool add_movie(std::string name, std::string rating, int watched);

	// increment watched for specific movie
	bool increment_watched(std::string name);

	// display all movies in movies vector
	void display() const;
};


#endif // !_MOVIES_H_
