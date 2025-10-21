cmake_minimum_required(VERSION 3.10)
project(MathUtilsTest LANGUAGES CXX)

# C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# GoogleTest'i indir ve projeye ekle
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/main.zip
)
# Eğer sistemde zaten varsa tekrar indirip derlemeyi engelle
set(BUILD_GMOCK OFF)
set(INSTALL_GTEST OFF)
FetchContent_MakeAvailable(googletest)

enable_testing()

# Kaynak dosyaların
set(SOURCES
    math_utils.cpp
    Vehicle.cpp
    Animal.cpp
)

# Test dosyaların
set(TESTS
    test_math_utils.cpp
    test_vehicle.cpp
    test_animal.cpp
)

# Test binary'si
add_executable(runTests ${SOURCES} ${TESTS})

# GTest linkle
target_link_libraries(runTests
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(runTests)
