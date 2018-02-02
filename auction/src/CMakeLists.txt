CMAKE_MINIMUM_REQUIRED(VERSION 3.6)

# add includes
include_directories(../incl)

# compile the auction library
add_library(auction STATIC auction.cpp auctionData.cpp)

# create the main executable
add_executable(runAuction main.cpp)

# link in the auction library
target_link_libraries(runAuction auction)
