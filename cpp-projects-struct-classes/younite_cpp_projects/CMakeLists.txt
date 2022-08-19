# set(CMAKE_THREAD_LIBS_INIT "-lpthread")
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DCMAKE_BUILD_TYPE=Debug -DWEBRTC_LINUX=1 -DWEBRTC_POSIX=1 -D_GLIBCXX_USE_CXX11_ABI=1 -pthread -Wdeclaration-after-statement -Wall -Wdisabled-optimization -Wpointer-arith -Wredundant-decls -Wwrite-strings -Wtype-limits -Wundef -Wmissing-prototypes -Wno-pointer-to-int-cast -Wstrict-prototypes -Wempty-body -Wno-parentheses -Wno-switch -Wno-format-zero-length -Wno-pointer-sign -O3 -fno-math-errno -fno-signed-zeros -fno-tree-vectorize -Werror=format-security -Werror=implicit-function-declaration -Werror=missing-prototypes -Werror=return-type -Werror=vla -Wformat -Wno-maybe-uninitialized")
# set(CMAKE_HAVE_THREADS_LIBRARY 1)
# set(CMAKE_USE_WIN32_THREADS_INIT 0)
# set(CMAKE_USE_PTHREADS_INIT 1)
# set(THREADS_PREFER_PTHREAD_FLAG ON)

cmake_minimum_required(VERSION 2.8)
project(cpp_project CXX)
# remove -g flag if you want to build release
set(CMAKE_CXX_STANDARD 14)

set(CMAKE_CXX_COMPILER c++)

# add_definitions(
# )

include_directories( 
    "/."                                    #currunt directory as project directory
    "inc/"                                  #diratory for includes/header-files
)

list(APPEND custom_srcs
    #struct.cpp            #struct code for simple reading & writing
    #struct1.cpp            #Exercise [Code Of StudentRec Strcuct Read/Write]

    class.cpp
)

add_executable( cpp_project 
                ${custom_srcs}
        )

# target_link_libraries(
#         )

# target_link_libraries(
#         )