#include <iostream>
#include <cmath>

int main() {
    int limit = 30;
    for (int a = 1; a <= limit; a++) {
        for (int b = a; b <= limit; b++) {
            int c_square = a * a + b * b;
            int c = sqrt(c_square);
            if (c * c == c_square && c <= limit) {
                std::cout << a << " - " << b << " - " << c << std::endl;
            }
        }
    }
    return 0;
}