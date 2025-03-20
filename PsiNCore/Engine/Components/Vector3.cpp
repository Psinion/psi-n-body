#include "Vector3.h"

Vector3::Vector3() : X(0), Y(0), Z(0) {}
Vector3::Vector3(const Vector3& a) = default;
Vector3::Vector3(const float x, const float y, const float z) : X(x), Y(y), Z(z) {}

Vector3 Vector3::zero() {
    return {0, 0, 0};
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

Vector3 Vector3::operator * (const float a) const {
    return {X * a, Y * a, Z * a};
}

Vector3 Vector3::operator / (const float a) const {
    const float oneOverA = 1.0f / a;
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

Vector3 & Vector3::operator *= (const float a) {
    X *= a;
    Y *= a;
    Z *= a;
    return *this;
}

Vector3 & Vector3::operator /= (const float a) {
    const float oneOverA = 1.0f / a;
    X *= oneOverA;
    Y *= oneOverA;
    Z *= oneOverA;
    return *this;
}
