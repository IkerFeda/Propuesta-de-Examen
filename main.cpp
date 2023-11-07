#include <stdio.h>
#include <math.h>
#include <iostream>

int main (){
    int a,b,c, limite;
    limite = 30;

    for (a = 3; a <= limite; a++){

       for (b = a; b <= limite; b++){
           c = sqrt(a^2 + b^2 );

           if (c <= limite && c * c == (a * a + b * b) && a + b + c == 2 * limite) {
               std::cout << a << " - " << b << " - " << c << std::endl;
           }
       }

       }

       }