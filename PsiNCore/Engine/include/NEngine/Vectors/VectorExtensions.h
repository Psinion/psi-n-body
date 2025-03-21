#pragma once
#include "Vector2.h"
#include "Vector3.h"

namespace Vectors {
    inline float Dot(const Vector2 &a, const Vector2 &b) {
        return a.X * b.X + a.Y * b.Y;
    }

    inline float Dot(const Vector3 &a, const Vector3 &b) {
        return a.X * b.X + a.Y * b.Y + a.Z * b.Z;
    }

    inline Vector2 Cross(const Vector2 &a, const Vector2 &b) {
        return {
                a.X * b.Y - a.Y * b.X,
                a.Y * b.X - a.X * b.Y,
        };
    }

    inline Vector3 Cross(const Vector3 &a, const Vector3 &b) {
        return {
                a.Y * b.Z - a.Z * b.Y,
                a.Z * b.X - a.X * b.Z,
                a.X * b.Y - a.Y * b.X
        };
    }
}
