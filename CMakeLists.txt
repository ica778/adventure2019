cmake_minimum_required(VERSION 3.12)
project(adventure2019)


set(PACKAGE_NAME Faworki)
set(PACKAGE_VERSION 0.1)
set(PACKAGE_STRING "${PACKAGE_NAME} ${PACKAGE_VERSION}")
set(PACKAGE_BUGREPORT "wsumner@sfu.ca")


ADD_DEFINITIONS(-DBOOST_LOG_DYN_LINK)

# Declare new libraries here. Other CMakeLists
#   will not need changes.
# Or search for ${libNAME} to quickly find all
#   dependencies on any library.
set(libcharacters "characters")
set(libcommands "commands")
set(libgame "game")
set(libnetwork "network")
set(libtypes "types")
set(libusers "users")
set(libworld "world")
set(libparsers "parsers")
set(libuserdb "userdb")
set(libcharacterdb "characterDB")
set(libminigame "minigame")
set(libcombat "combat")
set(libstrings "strings")
set(liblogging "logging")

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -fno-rtti")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
set(CMAKE_CXX_FLAGS_DEBUG
    "${CMAKE_CXX_FLAGS_DEBUG} -O0 -g -fsanitize=address,undefined -fno-omit-frame-pointer")
set(CMAKE_CXX_FLAGS_RELEASE
    "${CMAKE_CXX_FLAGS_RELEASE} -Wall -Wextra  -Wstrict-aliasing -pedantic -Werror -Wunreachable-code -Wcast-align -Wcast-qual -Wctor-dtor-privacy -Wdisabled-optimization -Wformat=2 -Winit-self -Wmissing-include-dirs -Wold-style-cast -Woverloaded-virtual -Wredundant-decls -Wshadow -Wsign-promo -Wstrict-overflow=5 -Wswitch-default -Wundef -Wno-unused -Wno-variadic-macros -Wno-parentheses -fdiagnostics-show-option")
set (CMAKE_CXX_FLAGS "-g -Wall -DBOOST_LOG_DYN_LINK")

# cmake -DCMAKE_BUILD_TYPE=RELEASE ../adventure2019
message("")
message("Building " ${CMAKE_BUILD_TYPE} ". Try RELEASE when pushing important code... ")
message("   cmake -DCMAKE_BUILD_TYPE=RELEASE ../adventure2019")
message("")



set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")


# And the project header and library paths
link_directories(${LIBRARY_OUTPUT_PATH})
set(CMAKE_TEMP_LIBRARY_PATH "${PROJECT_BINARY_DIR}/lib")


set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")


# And the project header and library paths
link_directories(${LIBRARY_OUTPUT_PATH})
set(CMAKE_TEMP_LIBRARY_PATH "${PROJECT_BINARY_DIR}/lib")


add_subdirectory(lib)
add_subdirectory(tools)
add_subdirectory(test)


