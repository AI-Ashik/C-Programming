// +, -, *, /
#include<stdio.h>
int sum;

void calculateSum(int x, int y){
printf("The sum of %d + %d is: %d\n",x,y,x+y);
}
void calculateSub(int x, int y){
printf("The substraction of %d - %d is: %d\n",x,y,x-y);
}
void calculateMul(int x, int y){
printf("The multiplication of %d * %d is: %d\n",x,y,x*y);
}
void calculateDiv(float x, float y){
printf("The division of %.1f / %.1f is: %.1f\n",x,y,x/y);
}



int main(){
    calculateSum(5,10);
    calculateSub(5,10);
    calculateMul(5,10);
    calculateDiv(5,10);
    return 0;
}