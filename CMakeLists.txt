project(TempServer)

add_subdirectory(RF24)
add_subdirectory(RF24Network)

add_executable(TempServer
  main.cpp
)

target_link_libraries(TempServer
  RF24
  RF24Network
)
