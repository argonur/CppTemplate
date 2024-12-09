cmake_minimum_required (VERSION 3.28)

project ("templateApp" LANGUAGES CXX)

message(CMaking: ${PROJECT_NAME})

add_executable(${PROJECT_NAME} "")

target_sources(${PROJECT_NAME}
    PRIVATE
        src/main.cpp
        src/myClass.cpp
)

target_include_directories(${PROJECT_NAME}
    PRIVATE
        ${PROJECT_ROOT}/templateApp/src
)

add_subdirectory(unittests)
