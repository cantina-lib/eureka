cmake_minimum_required(VERSION 3.6)

project(eureka)


set(EUREKA_SOURCE_DIR ${PROJECT_SOURCE_DIR}/source)
set(EUREKA_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)


set(CMAKE_CXX_STANDARD 20)

set(CANTINA_COMMON_DIR ${PROJECT_SOURCE_DIR}/cantina_common)
add_subdirectory(${CANTINA_COMMON_DIR})

set(EUREKA_INCLUDE_DIRS
        ${EUREKA_INCLUDE_DIR}
        ${CANTINA_COMMON_INCLUDE_DIRS}
        CACHE INTERNAL
        "List of include directories for Eurêka"
        )

include_directories(
        ${EUREKA_INCLUDE_DIRS}
)

# flags
set(CMAKE_CXX_FLAGS ${CANTINA_MAIN_CXX_FLAGS})


set(EUREKA_FILES
        ## source
        ### scale
        ${EUREKA_SOURCE_DIR}/cant/reka/scale/MusicalScale.cpp
        ## headers
        ${EUREKA_INCLUDE_DIR}/cant/reka/reka.hpp
        ### scale
        ${EUREKA_INCLUDE_DIR}/cant/reka/scale/scale.hpp
        ${EUREKA_INCLUDE_DIR}/cant/reka/scale/MusicalScale.hpp
        )

set(EUREKA_FILES_TEST
        ${EUREKA_SOURCE_DIR}/cant/reka/test/main
        ${EUREKA_FILES}
        )


add_library(eureka ${EUREKA_FILES})

set(EUREKA_LIBRARIES eureka ${CANTINA_COMMON_LIBRARIES} PARENT_SCOPE)

add_executable(eureka_test ${EUREKA_FILES_TEST})
target_link_libraries(eureka_test ${EUREKA_LIBRARIES})
