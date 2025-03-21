#include <NEngine/Vectors/Vector2.h>
#include <NEngine/Vectors/VectorExtensions.h>
#include "../lib/doctest.h"

using namespace Vectors;

TEST_CASE("Testing Vector2 arithmetic") {
    CHECK(Vector2(1, 1) + Vector2(1, 1) == Vector2(2, 2));
    CHECK(Vector2(1, 1) - Vector2(1, 1) == Vector2(0, 0));
    CHECK(Vector2(3, 3) * 5 == Vector2(15, 15));
    CHECK(Vector2(15, 15) / 5 == Vector2(3, 3));
}

TEST_CASE("Testing Vector2 dot") {
    CHECK(Dot(Vector2(2, 4), Vector2(4, 10)) == 48);
}