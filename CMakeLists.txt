project(TempServer)
cmake_minimum_required(VERSION 2.8)

# enable C++11
if(CMAKE_COMPILER_IS_GNUCXX)
    add_definitions(-std=c++11)
endif()

#add_subdirectory(RF24)
add_subdirectory(RF24Network)

include_directories(
  "RF24/include"
  "RF24Network"
)

add_executable(TempServer
  main.cpp
)

target_link_libraries(TempServer
  bcm2835
  RF24Network
)
