#pragma once
#include "Vector.h"
#include "Vector.cpp"

enum coord{ X, Y, Z };

class Vec3D
{
private:
	Vector<double, 3> elements;
public:
	Vec3D();
	Vec3D(Vector<double, 3>*);
	Vec3D(double, double, double);
	double abs();
	Vec3D &operator=(const Vec3D&);
	double &operator[](const int&);
    double &operator[](const int&)const;
	Vec3D &operator+=(const Vec3D&);
	Vec3D &operator*=(const Vec3D&);
	Vec3D &operator+=(double);
	Vec3D &operator*=(double);
	Vec3D operator+(const Vec3D&)const;
	Vec3D operator+(double)const;
	Vec3D operator*(const Vec3D&)const;
	Vec3D operator*(double)const;
};

