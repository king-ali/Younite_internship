# set(CMAKE_THREAD_LIBS_INIT "-lpthread")
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DCMAKE_BUILD_TYPE=Debug -DWEBRTC_LINUX=1 -DWEBRTC_POSIX=1 -D_GLIBCXX_USE_CXX11_ABI=1 -pthread -Wdeclaration-after-statement -Wall -Wdisabled-optimization -Wpointer-arith -Wredundant-decls -Wwrite-strings -Wtype-limits -Wundef -Wmissing-prototypes -Wno-pointer-to-int-cast -Wstrict-prototypes -Wempty-body -Wno-parentheses -Wno-switch -Wno-format-zero-length -Wno-pointer-sign -O3 -fno-math-errno -fno-signed-zeros -fno-tree-vectorize -Werror=format-security -Werror=implicit-function-declaration -Werror=missing-prototypes -Werror=return-type -Werror=vla -Wformat -Wno-maybe-uninitialized")
# set(CMAKE_HAVE_THREADS_LIBRARY 1)
# set(CMAKE_USE_WIN32_THREADS_INIT 0)
# set(CMAKE_USE_PTHREADS_INIT 1)
# set(THREADS_PREFER_PTHREAD_FLAG ON)

# ------------------------------- Prject CMakeList --------------------------------------- 

cmake_minimum_required(VERSION 2.8)
project(CQD_DB)
# remove -g flag if you want to build release
# set(CMAKE_CXX_STANDARD 14)
# set(CMAKE_CXX_COMPILER c++)

# add_definitions(
# )

include_directories( 
    "/."                                    #currunt directory as project directory
    "inc/"                                  #diratory for includes/header-files
    
)

list(APPEND custom_srcs
    
    main.cpp
    #test.cpp
)

add_executable( CQD_DB 
                ${custom_srcs}
)


# target_link_libraries(
#         )

# target_link_libraries(
#         )


# ------------------------------- GTest CMakeList ---------------------------------------

# cmake_minimum_required(VERSION 3.12)
# project(googleTest CXX)
# # # remove -g flag if you want to build release
# # set(CMAKE_CXX_STANDARD 14)
# # set(CMAKE_CXX_COMPILER c++)

# add_subdirectory(googletest) # add googletest subdirectory
# include_directories(googletest/include)

# list(APPEND custom_srcs
# # #server.cpp
#         test.cpp
# )

# add_executable( tests 
#                  ${custom_srcs}
#         )

# target_link_libraries(tests PRIVATE gtest) # link google test to this executable




# # add_definitions(
# # )