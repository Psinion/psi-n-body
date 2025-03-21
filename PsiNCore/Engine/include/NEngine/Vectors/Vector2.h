#pragma once

namespace Vectors {
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
        Vector2 operator * (float k) const;
        Vector2 operator / (float k) const;

        Vector2 &operator += (const Vector2 &a);
        Vector2 &operator -= (const Vector2 &a);
        Vector2 &operator *= (float k);
        Vector2 &operator /= (float k);

        /**
        * Compute magnitude of vector
        */
        float Magnitude() const;

        /**
        * Returns normalized copy of this vector
        */
        Vector2 Normalized() const;
    };

    inline Vector2 operator * (float k, const Vector2& a) {
        return {a.X * k, a.Y * k};
    }
}