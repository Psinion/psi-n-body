#pragma once

struct Vector3
{
	float X;
	float Y;
	float Z;

	Vector3();
	Vector3(const Vector3& a);
	Vector3(float x, float y, float z);

	static Vector3 zero();

	Vector3 &operator = (const Vector3& a);

	bool operator == (const Vector3& a) const;
	bool operator != (const Vector3& a) const;

	Vector3 operator -() const;

	Vector3 operator + (const Vector3& a) const;
	Vector3 operator - (const Vector3& a) const;
	Vector3 operator * (float a) const;
	Vector3 operator / (float a) const;

	Vector3 &operator += (const Vector3 &a);
	Vector3 &operator -= (const Vector3 &a);
	Vector3 &operator *= (float a);
	Vector3 &operator /= (float a);
};
