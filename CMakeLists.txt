cmake_minimum_required(VERSION 3.27)
project(PostGradPonderin LANGUAGES CXX)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
option(BUILD_SHARED_LIBS "Build shared libraries" OFF)

include(FetchContent)
FetchContent_Declare(SFML
        GIT_REPOSITORY https://github.com/SFML/SFML.git
        GIT_TAG 2.6.x
        GIT_SHALLOW ON
        EXCLUDE_FROM_ALL
        SYSTEM)
FetchContent_MakeAvailable(SFML)

add_executable(PostGradPonderin
        main.cpp
        HeapSort.h
        HeapSort.cpp
        Window.h
        Window.cpp
        Window.cpp
        Window.cpp
        Window.cpp
        HeapSort.h
        HeapSort.cpp
        Counties.cpp
        Counties.h)
target_link_libraries(PostGradPonderin PRIVATE sfml-graphics)
target_compile_features(PostGradPonderin PRIVATE cxx_std_14)

# Copy resources folder to the build output directory
set(RESOURCES_DIR ${CMAKE_CURRENT_SOURCE_DIR}/resources)
add_custom_command(
        TARGET PostGradPonderin POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${RESOURCES_DIR} $<TARGET_FILE_DIR:PostGradPonderin>/resources
        COMMENT "Copying resources folder to the build output directory"
)


if(WIN32)
    add_custom_command(
            TARGET PostGradPonderin
            COMMENT "Copy OpenAL DLL"
            PRE_BUILD COMMAND ${CMAKE_COMMAND} -E copy ${SFML_SOURCE_DIR}/extlibs/bin/$<IF:$<EQUAL:${CMAKE_SIZEOF_VOID_P},8>,x64,x86>/openal32.dll $<TARGET_FILE_DIR:PostGradPonderin>
            VERBATIM)
endif()