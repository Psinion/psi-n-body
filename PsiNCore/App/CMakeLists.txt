project(App)

add_executable(App)

target_sources(App
    PRIVATE
        src/main.cpp
)

target_include_directories(App
    PRIVATE
        ${CMAKE_SOURCE_DIR}
)

target_link_libraries(App
    PRIVATE Engine)