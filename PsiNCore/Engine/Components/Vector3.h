#pragma once
#include <cmath>

namespace Math {
    struct Vector3
    {
        float X;
        float Y;
        float Z;

        Vector3();
        Vector3(const Vector3& a);
        Vector3(float x, float y, float z);

        static Vector3 Zero();
        static Vector3 One();

        Vector3 &operator = (const Vector3& a);

        bool operator == (const Vector3& a) const;
        bool operator != (const Vector3& a) const;

        Vector3 operator -() const;

        Vector3 operator + (const Vector3& a) const;
        Vector3 operator - (const Vector3& a) const;
        Vector3 operator * (float a) const;
        Vector3 operator / (float a) const;

        Vector3 &operator += (const Vector3 &a);
        Vector3 &operator -= (const Vector3 &a);
        Vector3 &operator *= (float a);
        Vector3 &operator /= (float a);

        /**
        * Returns normalized copy of this vector
        */
        Vector3 Normalized() const;
    };
}
