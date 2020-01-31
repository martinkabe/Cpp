#pragma once

#ifndef __MATRIXOPERATIONS__
#define __MATRIXOPERATIONS__

#include <iostream>

class Matrix
{
	friend std::ostream& operator<<(std::ostream& os, const Matrix &obj);

public:
	Matrix();
	Matrix(int r, int c);
	Matrix(int r, int c, int* matrix);

	Matrix &operator=(Matrix && rhs);
	Matrix operator*(const Matrix &rhs) const;

	~Matrix();

	Matrix(Matrix && source);
	Matrix(const Matrix &source);
	Matrix& operator=(const Matrix &rhs);

private:
	int rows;
	int cols;
	int *mat; // pointer to array

};

#endif // !__MATRIXOPERATIONS__