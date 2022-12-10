#include<stdio.h>
int main(){
    int array[100];
    int sum=0;
    printf("How Many number  You want to enter in array\n");
    int size;
    scanf("%d",&size);
    printf("Enter the element\n");
    for(int i=0; i<size; i++){
        scanf("%d",&array[i]);

    }
    for(int i=0; i<size; i++){
        printf("%d\n",array[i]);
        sum=sum+array[i];
    }
    int Average=sum/size;
    printf("This is sum of Array %d\n",sum);
    printf("This is Average of Array %d\n",Average);
}