#include <stdio.h>

float p, r, h, Ab, V;

int main(void){ 

    
    p=3.14;
    r=5;   
    h=7;   
    Ab= 2*p*r*h;
    V= Ab*h;




  printf("The area of the cylinder is %.2f square units and the volume is %.2f cubic units" , Ab, V );

 return 0;

  } 
