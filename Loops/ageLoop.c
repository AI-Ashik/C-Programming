#include<stdio.h>
int main(){
    int arr[100],familyMem=4,i;

    for(i=0;i<familyMem;i++){
        printf("Enter age of family member %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<familyMem;i++)
    {
        printf("Double age of family member %d is %d\n",i+1,arr[i]*2);
    }

}