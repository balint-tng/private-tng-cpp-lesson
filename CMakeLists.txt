cmake_minimum_required(VERSION 3.4.1)

project(TNGPrivateCPPLesson)


set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(
	SOURCES
	src/main.cpp
)

set(
	HEADERS
)

add_executable(
	lesson
	${SOURCES}
	${HEADERS}
)
