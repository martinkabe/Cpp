#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

class Move
{
private:
	int* data;
public:
	void set_data_value(int d) { *data = d; }
	int get_data_value() { return *data; }

	// constructor
	Move(int d)
	{
		data = new int;
		*data = d;
		cout << "Constructor for: " << d << endl;
	}

	// copy constructor
	Move(const Move& source)
		: Move(*source.data)
	{
		cout << "Copy constructor - deep copy for: " << *data << endl;
	}

	// move ctor
	
	Move(Move &&source) noexcept
		: data(source.data)
	{
		source.data = nullptr;
		cout << "Move constructor - moving resource: " << *data << endl;
	}
	
	

	// move destructor
	~Move()
	{
		if (data != nullptr)
		{
			cout << "Destructor freeing  data for: " << *data << endl;
		}
		else
		{
			cout << "Destructor freeing data for nullptr" << endl;
		}
		delete data;
	}
};

int main()
{
	vector<Move> vec;

	vec.push_back(Move{ 10 });
	vec.push_back(Move{ 20 });
	vec.push_back(Move{ 30 });
	vec.push_back(Move{ 40 });
	vec.push_back(Move{ 50 });

	for (Move move : vec)
		cout << move.get_data_value() << endl;
}



