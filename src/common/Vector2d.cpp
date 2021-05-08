#include "../../include/common/Vector2d.h"

Vector2d::Vector2d() {
	this->x = 0;
	this->y = 0;
}

Vector2d::Vector2d(float x, float y) {
	this->x = x;
	this->y = y;
}

Vector2d operator+(const Vector2d& v1, const Vector2d& v2) {
	return Vector2d(v1.x + v2.x, v1.y + v2.y);
}

Vector2d operator*(const Vector2d& v, const float fl) {
	return Vector2d(v.x * fl, v.y * fl);
}