#include "Vector2.h"

using namespace Math;

Vector2::Vector2() : X(0), Y(0) {}
Vector2::Vector2(const Vector2& a) = default;
Vector2::Vector2(const float x, const float y) : X(x), Y(y) {}

Vector2 Vector2::Zero() {
    return {0, 0};
}

Vector2 Vector2::One() {
    return {1, 1};
}

Vector2 &Vector2::operator = (const Vector2 &a) = default;

bool Vector2::operator == (const Vector2 &a) const {
    return X == a.X
        && Y == a.Y;
}

bool Vector2::operator != (const Vector2 &a) const {
    return X != a.X
        || Y != a.Y;
}

Vector2 Vector2::operator - () const {
    return {-X, -Y};
}

Vector2 Vector2::operator + (const Vector2 &a) const {
    return {X + a.X, Y + a.Y};
}

Vector2 Vector2::operator - (const Vector2 &a) const {
    return {X - a.X, Y - a.Y};
}

Vector2 Vector2::operator * (const float a) const {
    return {X * a, Y * a};
}

Vector2 Vector2::operator / (const float a) const {
    const float oneOverA = 1.0f / a;
    return {X * oneOverA, Y * oneOverA};
}

Vector2 &Vector2::operator += (const Vector2 &a) {
    X += a.X;
    Y += a.Y;
    return *this;
}

Vector2 &Vector2::operator -= (const Vector2 &a) {
    X -= a.X;
    Y -= a.Y;
    return *this;
}

Vector2 & Vector2::operator *= (const float a) {
    X *= a;
    Y *= a;
    return *this;
}

Vector2 & Vector2::operator /= (const float a) {
    const float oneOverA = 1.0f / a;
    X *= oneOverA;
    Y *= oneOverA;
    return *this;
}

Vector2 Vector2::Normalized() const {
    const float oneOverMag = 1.0f / std::sqrt(X * X + Y * Y);
    return *this * oneOverMag;
}