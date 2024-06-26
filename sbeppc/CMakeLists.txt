set(target "sbepp_sbeppc")
add_executable(${target})
add_executable(sbepp::sbeppc ALIAS ${target})
set_target_properties(${target} PROPERTIES
    OUTPUT_NAME sbeppc
    EXPORT_NAME sbeppc
)

set(src_dir src/sbepp/sbeppc)

configure_file(${src_dir}/build_info.cpp.in build_info.cpp @ONLY)

target_sources(${target}
    PRIVATE
    ${src_dir}/main.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/build_info.cpp
)

target_include_directories(${target} PRIVATE src)

target_link_libraries(${target}
    PRIVATE
    sbepp::sbepp
    fmt::fmt
    pugixml::pugixml
)

sbepp_set_strict_compiler_options(${target} WARNINGS_AS_ERRORS)

install(TARGETS ${target}
    EXPORT sbepp
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)