#include "NEngine/Vectors/VectorExtensions.h"

using namespace Vectors;

float Vectors::Dot(const Vector2 &a, const Vector2 &b) {
    return a.X * b.X + a.Y * b.Y;
}

float Vectors::Dot(const Vector3 &a, const Vector3 &b) {
    return a.X * b.X + a.Y * b.Y + a.Z * b.Z;
}

Vector2 Vectors::Cross(const Vector2 &a, const Vector2 &b) {
    return {
        a.X * b.Y - a.Y * b.X,
        a.Y * b.X - a.X * b.Y,
    };
}

Vector3 Vectors::Cross(const Vector3 &a, const Vector3 &b) {
    return {
        a.Y * b.Z - a.Z * b.Y,
        a.Z * b.X - a.X * b.Z,
        a.X * b.Y - a.Y * b.X
        };
}
