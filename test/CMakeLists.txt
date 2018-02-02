CMAKE_MINIMUM_REQUIRED(VERSION 3.6)

include_directories(${CMAKE_SOURCE_DIR}/auction/incl)

# create the main executable
add_executable(TestAuction testAuction.cpp)

# link in the auction library
target_link_libraries(TestAuction auction)
