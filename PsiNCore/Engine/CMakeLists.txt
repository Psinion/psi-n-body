project(Engine)

add_library(Engine SHARED)

target_sources(Engine
    PUBLIC
        include/NEngine/Vectors/Vector2.h
        src/Vectors/Vector2.cpp
        include/NEngine/Vectors/Vector3.h
        src/Vectors/Vector3.cpp
        include/NEngine/Vectors/VectorExtensions.h
        src/Vectors/VectorExtensions.cpp
)

target_include_directories(Engine
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)