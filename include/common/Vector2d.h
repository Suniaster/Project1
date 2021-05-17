#ifndef VECTOR_2D_H
#define VECTOR_2D_H

class Vector2d{	
public:
	Vector2d(double, double);
	Vector2d();
	double x, y;

	friend Vector2d operator+(const Vector2d&, const Vector2d&);
	friend Vector2d operator*(const Vector2d&, double);
};

#endif

