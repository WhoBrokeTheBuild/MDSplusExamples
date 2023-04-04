
add_executable(
    OpenTree
    main.c
)

target_link_libraries(
    OpenTree
    PRIVATE
        MDSplus::TreeShr
)