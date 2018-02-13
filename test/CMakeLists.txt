CMAKE_MINIMUM_REQUIRED(VERSION 3.6)

#-------------------
# set common include folder for module
#-------------------
set(COMMON_INCLUDES ${CMAKE_SOURCE_DIR}/auction/incl)
#set(EXT_PROJECTS_DIR ${CMAKE_SOURCE_DIR}/ext)

enable_testing()
include_directories(${GTEST_INCLUDE_DIRS} ${COMMON_INCLUDES})

# create the main executable
add_executable(TestAuction testAuction.cpp)

#add_dependencies(TestAuction googletest)

#add_subdirectory(${EXT_PROJECTS_DIR}/googletest)

# link in the auction library
target_link_libraries(TestAuction auction 
	gtest
	gmock)