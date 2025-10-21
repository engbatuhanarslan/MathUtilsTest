#include "math_utils.h"

int Add(int a, int b) {
    return a + b;
}

int Sub(int a, int b) {
    return a - b;
}

int Mul(int a, int b)
{
    return a * b;
}

int Square(int a, int b)
{
    return a * b;
}

double Div(int a, int b) {
    if (b == 0) {
        // Hata durumu: istediğine göre yönetebilirsin
        return 0.0; // veya NAN / throw std::runtime_error
    }
    return static_cast<double>(a) / b;
}


int Factorial(int n) {
    if (n < 0) return -1;
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
