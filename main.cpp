#include <stdio.h>
#include <math.h>
#include <iostream>

int main (){
    int a,b,c, limite;
    limite = 10;
    for (a = 3; a <= limite; a++){
       for (b = a; b <= limite; b++){
           c = sqrt(a^2 + b^2 );
           if ( c^2 == a^2 + b^2 && (a + b > c) && (b + c > a) && (a + c > b)) {
               std::cout << a << " - " << b << " - " << c << std::endl;
           }
       }

       }

       }