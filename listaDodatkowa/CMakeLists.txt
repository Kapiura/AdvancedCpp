# werjsa cmake
cmake_minimum_required(VERSION 3.10)

# projekt
project(biblioteki)

# ustawienia dla cpp
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -pedantic -Werror -fPIC")


# pliki zrodlowe
set(STATIC_LIB_SOURCES
  src/singleton.cpp
  src/calls1.cpp
)

set(DYNAMIC_LIB_SOURCES
  src/singleton.cpp
  src/singleton_dynamic.cpp
)

add_library(singleton_static STATIC ${STATIC_LIB_SOURCES})
add_library(singleton_dynamic SHARED ${DYNAMIC_LIB_SOURCES})

# Tworzenie pliku wykonawilengo
add_executable(main src/main.cpp)

target_link_libraries(main PRIVATE singleton_static singleton_dynamic)


