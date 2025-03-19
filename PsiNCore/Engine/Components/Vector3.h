#pragma once

struct Vector3
{
public:

	float x;
	float y;
	float z;

	Vector3() : x(0), y(0), z(0) {}
	Vector3(const Vector3& a) = default;
	Vector3(float lx, float ly, float lz) : x(lx), y(ly), z(lz) {}
};