project(Engine)

add_library(Engine SHARED)

target_sources(Engine
    PUBLIC
        src/Vectors/Vector2.cpp
        src/Vectors/Vector3.cpp
        src/Vectors/VectorExtensions.cpp
        include/NEngine/Vectors/Vector2.h
        include/NEngine/Vectors/Vector3.h
        include/NEngine/Vectors/VectorExtensions.h
)

target_include_directories(Engine
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)