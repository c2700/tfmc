cmake_minimum_required(VERSION 3.5)

project(tfmc LANGUAGES C)

include_directories("include")
file(GLOB SOURCES "src/*.c")
file(GLOB_RECURSE HEADERS "include/*.h")

add_executable(tfmc ${SOURCES} ${HEADERS})

target_link_libraries(tfmc -L${CMAKE_CURRENT_SOURCE_DIR}/src -lncurses)

include(GNUInstallDirs)
install(TARGETS tfmc
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
