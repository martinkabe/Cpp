#include <iostream>
#include "Matrix.h"

using std::cout;
using std::endl;

std::ostream& operator<<(std::ostream& os, const Matrix &obj)
{
	for (size_t i = 0; i < obj.rows; i++)
	{
		for (size_t j = 0; j < obj.cols; j++)
			os << obj.mat[i*obj.cols + j] << " ";
		os << endl;
	}
	return os;
}

Matrix::Matrix(const int row, const int col, int* p)
	: rows(row), cols(col), mat{ nullptr }
{
	mat = new int[rows * cols];
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
			mat[i*cols + j] = *(p++);
	}
}

Matrix::Matrix()
{
	rows = 0;
	cols = 0;
	mat = new int[1];
}

Matrix::Matrix(int r, int c)
	: rows(r), cols(c)
{
	mat = new int[rows * cols];
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
			mat[i*cols + j] = 0;
	}
}

// destructor
Matrix::~Matrix()
{
	cout << "Destructor for Matrix class called" << endl;
	// clean up
	delete[] mat;
}

// move constructor
Matrix::Matrix(Matrix &&source)
{
	rows = source.rows;
	cols = source.cols;
	mat = source.mat;

	source.mat = nullptr;
	source.rows = 0;
	source.cols = 0;

	std::cout << "Move constructor used!" << std::endl;
}

// Move assignment
Matrix & Matrix::operator=(Matrix && rhs)
{
	std::cout << "Using move assignment" << std::endl;
	if (this == &rhs)
		return *this;

	delete[] mat;

	rows = rhs.rows;
	cols = rhs.cols;
	mat = rhs.mat;

	rhs.mat = nullptr;
	rhs.rows = 0;
	rhs.cols = 0;

	return *this;
}

// copy constructor
Matrix::Matrix(const Matrix& source)
{
	mat = new int[source.rows * source.cols];
	std::copy(source.mat, source.mat + source.rows * source.cols, mat);
	rows = source.rows;
	cols = source.cols;
}

// copy assignment - deep copy
Matrix &Matrix::operator=(const Matrix &rhs)
{
	cout << "Copy assignment" << endl;
	if (this == &rhs)
		return *this;

	delete[] this->mat;

	mat = new int[rhs.rows * rhs.cols];
	std::copy(rhs.mat, rhs.mat + rhs.rows * rhs.cols, mat);

	rows = rhs.rows;
	cols = rhs.cols;

	return *this;
}

Matrix Matrix::operator*(const Matrix &rhs) const
{
	// check if multiplication is possible
	if (this->cols != rhs.rows)
		throw std::invalid_argument("#cols in first matrix must be the same like #rows in the second one!");

	int *buff = new int[rhs.rows * rhs.cols];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < rhs.cols; j++)
		{
			int sum = 0;
			for (int k = 0; k < rhs.rows; k++)
			{
				sum = sum + mat[i * cols + k] * rhs.mat[k * rhs.cols + j];
			}
			buff[i * cols + j] = sum;
		}
	}
	Matrix temp{ rows, cols, buff };
	delete[] buff;
	return temp;
}
