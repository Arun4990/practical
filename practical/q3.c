#include<stdio.h>
int main(){
    int array[100];
    printf("Enter How Many element You Want To Enter in array\n");
    int size;
    scanf("%d",&size);
    printf("Enter element in array\n");
    for(int i=0; i<size; i++){
       scanf("%d",&array[i]); 
    }
    printf("The array element\n");
    for(int i=0; i<size; i++){
        printf("%d \n",array[i]);
    }
    printf("All multiple of seven\n");
    for(int i=0; i<size; i++){
        if(array[i]%7==0){
            printf("%d\n",array[i]);
        }
    }
}