cmake_minimum_required(VERSION 3.22)

set(PROJECT_NAME_FULL "MyProject")
set(APP_TARGET "app")
set(LIB_TARGET "${PROJECT_NAME_FULL}lib")

project(${PROJECT_NAME_FULL} LANGUAGES C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

add_compile_options(-Wall -Wextra -Wpedantic)

add_library(${LIB_TARGET}
    src/util.c
)

target_include_directories(${LIB_TARGET}
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_executable(${APP_TARGET}
    src/main.c
)

target_link_libraries(${APP_TARGET}
    PRIVATE ${LIB_TARGET}
)
