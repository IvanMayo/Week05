#include <stdio.h>
// this program calculates the are and volume of a cylinder, the values are already designed
// float is used instead of int because we have decimals in our data
float p, r, h, Ab, V, Atotal;  
// p is pie, r is radius, h, is height, Ab is area of the base, V is volume, Atotal is the total area of the cylinder 

int main(void){ 

    
    p=3.14;
    r=5;   
    h=7;   
    Ab= 2*p*r*h;
    Atotal= (2*p*r*h)+(2*p*r*r);
    V= Ab*h;



// .2 refers to the amount of decimals you want to have
  printf("The area of the cylinder is %.2f square units and the volume is %.2f cubic units" , Atotal, V );

 return 0;

  }
