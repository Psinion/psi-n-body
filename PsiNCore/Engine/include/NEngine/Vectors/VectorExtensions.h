#pragma once
#include "Vector2.h"
#include "Vector3.h"

namespace Vectors {
    inline float Dot(const Vector2 &a, const Vector2 &b);
    inline float Dot(const Vector3 &a, const Vector3 &b);

    inline Vector2 Cross(const Vector2 &a, const Vector2 &b);
    inline Vector3 Cross(const Vector3 &a, const Vector3 &b);
}
