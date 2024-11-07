cmake_minimum_required(VERSION 3.3)
project(CHashMap)

# -----------------------------------------------------------------------------
# Set Variables.
#
set(CMAKE_C_STANDARD 23)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(INCLUDE_DIRS "include")
set(BIN_NAME "CHashMap")
set(SRC_DIR "${PROJECT_SOURCE_DIR}/src")
set(CMAKE_C_FLAGS  "-Wall -fno-strict-aliasing")


# -----------------------------------------------------------------------------
# Set the project include directories.
#
include_directories(${INCLUDE_DIRS})


# -----------------------------------------------------------------------------
# Create the final binary.
#
add_executable(${BIN_NAME} main.c)


# -----------------------------------------------------------------------------
# Build the project as a library.
#
set(HashMapLib "HashMap")

add_library(${HashMapLib} SHARED
  "${SRC_DIR}/map.c"
)

# -----------------------------------------------------------------------------
# Link the libraries.
#
target_link_libraries(${BIN_NAME} ${HashMapLib})

