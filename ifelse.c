#include<stdio.h>
int main(){
int day;

printf("Enter a day number between (1-7):");
scanf("%d",&day);

if(day == 1){
    printf("Saturday");
}
else if(day == 2){
    printf("Sunday");
}
else if(day == 3){
    printf("Monday");
}
else if(day == 4){
    printf("Tuesday");
}
else if(day == 5){
    printf("Wednesday");
}
else if(day == 6){
    printf("Thursday");
}
else if(day == 7){
    printf("Friday");
}
else{
    printf("invalid day number");
}
return 0;
}