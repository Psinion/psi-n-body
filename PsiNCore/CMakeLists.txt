cmake_minimum_required(VERSION 3.30)
project(PsiNCore)

set(CMAKE_CXX_STANDARD 20)

if (MSVC)
    set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
endif()

add_subdirectory(Engine)
add_subdirectory(Tests)
add_subdirectory(App)

enable_testing()
add_test(NAME Tests COMMAND Tests)

install(TARGETS App FILE_SET HEADERS)