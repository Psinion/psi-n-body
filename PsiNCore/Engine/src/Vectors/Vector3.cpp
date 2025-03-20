#include "NEngine/Vectors/Vector3.h"
#include <cmath>

using namespace Vectors;

Vector3::Vector3() : X(0), Y(0), Z(0) {}
Vector3::Vector3(const Vector3& a) = default;
Vector3::Vector3(const float x, const float y, const float z) : X(x), Y(y), Z(z) {}

Vector3 Vector3::Zero() {
    return {0, 0, 0};
}

Vector3 Vector3::One() {
    return {1, 1, 1};
}

Vector3 & Vector3::operator = (const Vector3 &a) = default;

bool Vector3::operator == (const Vector3 &a) const {
    return X == a.X
        && Y == a.Y
        && Z == a.Z;
}

bool Vector3::operator != (const Vector3 &a) const {
    return X != a.X
        || Y != a.Y
        || Z != a.Z;
}

Vector3 Vector3::operator - () const {
    return {-X, -Y, -Z};
}

Vector3 Vector3::operator + (const Vector3 &a) const {
    return {X + a.X, Y + a.Y, Z + a.Z};
}

Vector3 Vector3::operator - (const Vector3 &a) const {
    return {X - a.X, Y - a.Y, Z - a.Z};
}

Vector3 Vector3::operator * (const float k) const {
    return {X * k, Y * k, Z * k};
}

Vector3 Vector3::operator / (const float k) const {
    const float oneOverA = 1.0f / k;
    return {X * oneOverA, Y * oneOverA, Z * oneOverA};
}

Vector3 &Vector3::operator += (const Vector3 &a) {
    X += a.X;
    Y += a.Y;
    Z += a.Z;
    return *this;
}

Vector3 &Vector3::operator -= (const Vector3 &a) {
    X -= a.X;
    Y -= a.Y;
    Z -= a.Z;
    return *this;
}

Vector3 & Vector3::operator *= (const float k) {
    X *= k;
    Y *= k;
    Z *= k;
    return *this;
}

Vector3 & Vector3::operator /= (const float k) {
    const float oneOverA = 1.0f / k;
    X *= oneOverA;
    Y *= oneOverA;
    Z *= oneOverA;
    return *this;
}

float Vector3::Magnitude() const {
    return std::sqrt(X * X + Y * Y + Z * Z);
}

Vector3 Vector3::Normalized() const {
    const float oneOverMag = 1.0f / std::sqrt(X * X + Y * Y + Z * Z);
    return *this * oneOverMag;
}

Vector3 Vectors::operator*(const float k, const Vector3 &a) {
    return {a.X * k, a.Y * k, a.Z * k};
}
