set(BINARY ${CMAKE_PROJECT_NAME})

file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.cpp)

set(SOURCES ${SOURCES})

add_executable(${BINARY}run ${SOURCES})

add_library(${BINARY}cpp STATIC ${SOURCES} ../hdr/RunMethod.h ../hdr/AbstractMethod.h RunMethod.cpp)