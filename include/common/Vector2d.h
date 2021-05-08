#ifndef VECTOR_2D_H
#define VECTOR_2D_H

class Vector2d{	
public:
	Vector2d(float, float);
	Vector2d();
	float x, y;

	friend Vector2d operator+(const Vector2d&, const Vector2d&);
	friend Vector2d operator*(const Vector2d&, const float);
};

#endif

