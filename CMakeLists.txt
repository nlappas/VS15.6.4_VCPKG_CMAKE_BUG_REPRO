cmake_minimum_required(VERSION 3.0)
project(test)

set(Boost_USE_STATIC_LIBS OFF)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_RUNTIME OFF)
find_package(Boost REQUIRED)
if (Boost_FOUND)
    message("FOUND BOOST")
    set(INCLUDE_DIRS_LIST ${INCLUDE_DIRS_LIST} ${Boost_INCLUDE_DIR})
endif()

include_directories(main ${Boost_INCLUDE_DIR})

add_executable(main main.cpp)
target_link_libraries(main ${Boost_LIBRARIES})