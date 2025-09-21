#include <stdio.h>
#include <math.h>
int main(){
   float x,y,z;
    printf ("Введіть вхідні дані x y:\n");
    scanf("%f%f", &x, &y);
    if (x==0||y==0){
        printf("Ділення на нуль");
    }
    else { 
      z=x/y;
      printf("Результат=%g",z);
      
}
return 0;
}