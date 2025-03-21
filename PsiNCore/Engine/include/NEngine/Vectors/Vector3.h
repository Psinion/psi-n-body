#pragma once

namespace Vectors {
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
        Vector3 operator * (float k) const;
        Vector3 operator / (float k) const;

        Vector3 &operator += (const Vector3 &a);
        Vector3 &operator -= (const Vector3 &a);
        Vector3 &operator *= (float k);
        Vector3 &operator /= (float k);

        /**
        * Compute magnitude of vector
        */
        float Magnitude() const;

        /**
        * Returns normalized copy of this vector
        */
        Vector3 Normalized() const;
    };

    inline Vector3 operator * (float k, const Vector3& a) {
        return {a.X * k, a.Y * k, a.Z * k};
    }
}
