#include <stdio.h>
#include <math.h>

int main()
{
    int a=9;
    
    float b=7.5;
    
  float  midalg=(a+b)/2;
  
  
  float  midgeom=sqrt(a*b);
  
    printf("Перше число ->%d\n Друге число->%.2f\n Середнє арифметичне=%.2f\n Середнє геометричне=%.2f",a,b,midalg,midgeom);
    

    return 0;
}
