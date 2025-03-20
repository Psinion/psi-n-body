project(App)

add_executable(App main.cpp)

target_sources(App
    PRIVATE
)

target_include_directories(App
    PRIVATE
        ${CMAKE_SOURCE_DIR}
)

target_link_libraries(App
    PRIVATE Engine)