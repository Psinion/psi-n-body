project(Tests)

add_executable(Tests main.cpp)

target_sources(Tests
    PRIVATE
        lib/doctest.h
        unit/Vector2.cpp
)

target_include_directories(Engine
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/unit
)

target_link_libraries(Tests
    PRIVATE Engine)
