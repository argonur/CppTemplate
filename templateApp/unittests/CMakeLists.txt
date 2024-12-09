cmake_minimum_required (VERSION 3.28)

project ("unitTests" LANGUAGES CXX)

message(CMaking: ${PROJECT_NAME})

add_executable(${PROJECT_NAME} "")

target_compile_options(${PROJECT_NAME}
	PRIVATE
		-Wno-effc++
)

target_sources(${PROJECT_NAME}
	PRIVATE
		src/main.cpp
		src/test_myClass.cpp
)

target_include_directories(${PROJECT_NAME}
	PRIVATE
		${PROJECT_ROOT}/templateApp/src
)

target_link_libraries(${PROJECT_NAME}
	PRIVATE
		GTest::Main
	    GTest::Mock
)
