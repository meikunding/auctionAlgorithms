CMAKE_MINIMUM_REQUIRED(VERSION 3.6)

#-------------------
# set common include folder for module
#-------------------
set(COMMON_INCLUDES ${CMAKE_SOURCE_DIR}/auction/incl)

enable_testing()
include_directories(${GTEST_INCLUDE_DIRS} ${COMMON_INCLUDES})

# create the main executable
add_executable(testAuction testAuction.cpp)

#add_dependencies(testAuction googletest)

#add_subdirectory(${EXT_PROJECTS_DIR}/googletest)

# link in the auction library
target_link_libraries(testAuction Auction 
	gtest
	gmock)