#include "NEngine/Vectors/Vector2.h"
#include <cmath>

using namespace Vectors;

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

Vector2 Vector2::operator * (const float k) const {
    return {X * k, Y * k};
}

Vector2 Vector2::operator / (const float k) const {
    const float oneOverA = 1.0f / k;
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

Vector2 & Vector2::operator *= (const float k) {
    X *= k;
    Y *= k;
    return *this;
}

Vector2 & Vector2::operator /= (const float k) {
    const float oneOverA = 1.0f / k;
    X *= oneOverA;
    Y *= oneOverA;
    return *this;
}

float Vector2::Magnitude() const {
    return std::sqrt(X * X + Y * Y);
}

Vector2 Vector2::Normalized() const {
    const float oneOverMag = 1.0f / std::sqrt(X * X + Y * Y);
    return *this * oneOverMag;
}

Vector2 Vectors::operator*(const float k, const Vector2 &a) {
    return {a.X * k, a.Y * k};
}
