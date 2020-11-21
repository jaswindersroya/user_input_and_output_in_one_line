#include <stdio.h>
//vol of cylinder and cone
//formula

//declare variables
int main(){
    float r,h,vol_cylinder,vol_cone;
    const float pi=3.14;
    
    //user input
    printf("enter the value for radius and height\n");
    scanf("%f%f",&r,&h);
    
    //claculations
    vol_cylinder=pi*r*r*h;
    vol_cone=pi*r*r*h/3;
    
    //display results
    printf("volume of cylinder is %f and volume of cone is %f \nfor radius %f and height %f",vol_cylinder,vol_cone,r,h);
}
