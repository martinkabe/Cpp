#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>

class Movie
{
private:
	std::string name;
	std::string rating;
	int watched;
public:
	// constructor - expects all 3 movie attributes
	Movie(std::string name, std::string rating, int watched);

	// copy constructor
	Movie(const Movie &source);

	// destructor
	~Movie();
	
	// getters and setters for private attributes

	void set_name(std::string name) { this->name = name; }
	std::string get_name() const { return this->name; }

	void set_rating(std::string rating) { this->rating = rating; }
	std::string get_rating() const { return this->rating; }

	void set_watched(int watched) { this->watched = watched; }
	int get_watched() const { return this->watched; }

	// increment watched attribute by 1
	void increment_watched() { ++watched; }

	// simply displays the movie information - e.g. Big, PG-13,...
	void display() const;

};

#endif // !_MOVIE_H_

