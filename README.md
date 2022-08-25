# Call Quality Dashboard : C++

## Introduction

This project is for the simple visualization of how data is accessed from a database. Starting from request to TCP Connection then API to database everything is implemented.
This is Not Perfect Implementation but it is a good start.


## Usage : CMake

```makefile

cmake -DCMAKE_BUILD_TYPE=Debug -DCMAKE_CXX_FLAGS="-std=c++17
make
./CQD_DB <username> <password> <ip> <port>

```

OR  `Istall the VScode Extension for CMake : Just Press Build`

Sample Input :

```makefile
./CQD_DB "user" "user" "localhost" "8080"
```
