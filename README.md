# MathUtilsTest

This project demonstrates how to write and run **unit tests in C++** using the **Google Test framework**.  
It includes simple math functions (`Add`, `Sub`, `Div`, `Factorial`) and their corresponding test cases.

## 🚀 Technologies
- C++17  
- [Google Test (gtest)](https://github.com/google/googletest)  
- Visual Studio 2022 (with NuGet for gtest)  

## 📂 Project Structure

MathUtilsTest/
├── math_utils.h # Function declarations
├── math_utils.cpp # Function implementations
├── test_math_utils.cpp # Google Test cases
├── MathUtilsTest.sln # Visual Studio solution
└── packages.config # NuGet dependencies


## 🧪 How to Run
1. Open the solution (`MathUtilsTest.sln`) in Visual Studio.  
2. Build the project.  
3. Run the test executable (`Ctrl + F5`) to see the test results in the console.  
   All tests will automatically run via `RUN_ALL_TESTS()`.

## ✅ Example Output

[==========] Running 3 tests from 1 test suite.
[ RUN ] MathUtilsTest.AddFunction
[ OK ] MathUtilsTest.AddFunction (0 ms)
[ RUN ] MathUtilsTest.FactorialFunction
[ OK ] MathUtilsTest.FactorialFunction (0 ms)
[ RUN ] MathUtilsTest.SubFunction
[ FAILED ] MathUtilsTest.SubFunction (1 ms)
[==========] 3 tests from 1 test suite ran. (2 ms total)
[ PASSED ] 2 tests.
[ FAILED ] 1 test, listed below:
[ FAILED ] MathUtilsTest.SubFunction


## ✨ Contribution
This project is for learning and practice purposes. Contributions and suggestions are welcome!
