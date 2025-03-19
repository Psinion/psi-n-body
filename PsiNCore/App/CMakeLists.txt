add_executable(App
    main.cpp
)

target_link_libraries(App PRIVATE Engine)

target_include_directories(App PRIVATE
    ${CMAKE_SOURCE_DIR}/Engine/include
)