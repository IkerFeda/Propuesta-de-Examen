#include <stdio.h>
#include <math.h>
#include <iostream>

int main (){
    int a,b,c, limit;
    limit = 10;
    for (a = 1; a <= limit; a++){
       for (b = a; b <= limit; b++){
           c = sqrt(a * a + b * b);
           if (c * c == a * a + b * b && (a + b > c) && (b + c > a) && (a + c > b)) {
               std::cout<<("%d - %d - %d\n", a, b, c)<<std::endl;
           }
       }

       }

       }