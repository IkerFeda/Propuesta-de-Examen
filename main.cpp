#include <iostream>
#include <cmath>

int main (){
    int limite = 30;
    for (int a = 1; a <= limite; a++){
        for (int b = a; b <= limite; b++){
            int c_cuadrada = (a * a + b * b);
            int c = sqrt(c_cuadrada);
            if (c * c == c_cuadrada && c <= limite){
                std::cout << a << " - " << b << " - " << c << std::endl;
            }
        }
    }
}