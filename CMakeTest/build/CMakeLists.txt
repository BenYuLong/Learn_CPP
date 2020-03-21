cmake_minimum_required(VERSION 3.10.2)

project(main)

# version number
set(HELLO_VERSION_MAJOR 2)
set(HELLO_VERSION_MINOR 1)

set(PROJECT_SOURCE_DIR "../src")

# Copies an ``<input>`` file to an ``<output>`` file and substitutes
# variable values referenced as ``@VAR@`` or ``${VAR}`` in the input
configure_file(
    "${PROJECT_SOURCE_DIR}/helloConfig.h.in"
    "${PROJECT_SOURCE_DIR}/helloConfig.h"
)


MESSAGE(STATUS "project main")

SET (SOURCES ${PROJECT_SOURCE_DIR}/main.c ${PROJECT_SOURCE_DIR}/app.c)

add_executable(${PROJECT_NAME} ${SOURCES})

# include_directories( 
#     "include"
#     "${PROJECT_BINARY_DIR}"
# )

# Set the directories that should be included in the build command for this target
# when running g++ these will be included as -I/directory/path/
target_include_directories(${PROJECT_NAME}
    PRIVATE
        ${PROJECT_SOURCE_DIR}/../include
        ${PROJECT_SOURCE_DIR}
)