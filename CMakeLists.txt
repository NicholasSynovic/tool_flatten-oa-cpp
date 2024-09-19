cmake_minimum_required(VERSION 3.30)

project(Project)

add_subdirectory(src)
add_subdirectory(tests)

include(FetchContent)
FetchContent_Declare(
    cli11_proj
    QUIET
    GIT_REPOSITORY https://github.com/CLIUtils/CLI11.git
    GIT_TAG v2.3.2
)

FetchContent_MakeAvailable(cli11_proj)

target_link_libraries(main.exe PRIVATE CLI11::CLI11)
