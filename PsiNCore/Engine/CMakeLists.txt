add_library(Engine SHARED
    Components/Vector3.h
    Components/Vector3.cpp
)

target_include_directories(Engine PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)