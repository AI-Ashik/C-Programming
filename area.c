#include<stdio.h>
int main(){
    int a, b;
    float area;
  
    printf("Enter first two side length: ");
    scanf("%d",&a);
    printf("Enter second two side length: ");
    scanf("%d",&b);
    
    if(a==b)
    {
        printf("Its a Square\n");
    } else{
        printf("its a Rectangle\n");
    }
    area = a*b;
    printf("Area is: %0.2f",area);
}