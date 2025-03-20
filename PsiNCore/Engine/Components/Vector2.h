#pragma once
#include <cmath>

namespace Math {
    struct Vector2
    {
        float X;
        float Y;

        Vector2();
        Vector2(const Vector2& a);
        Vector2(float x, float y);

        static Vector2 Zero();
        static Vector2 One();

        Vector2 &operator = (const Vector2& a);

        bool operator == (const Vector2& a) const;
        bool operator != (const Vector2& a) const;

        Vector2 operator -() const;

        Vector2 operator + (const Vector2& a) const;
        Vector2 operator - (const Vector2& a) const;
        Vector2 operator * (float a) const;
        Vector2 operator / (float a) const;

        Vector2 &operator += (const Vector2 &a);
        Vector2 &operator -= (const Vector2 &a);
        Vector2 &operator *= (float a);
        Vector2 &operator /= (float a);

        /**
        * Returns normalized copy of this vector
        */
        Vector2 Normalized() const;
    };
}
