#include<stdio.h>
int main(){
    int array[100];
    printf("How Many number  You want to enter in array\n");
    int size;
    scanf("%d",&size);
    printf("Enter The Element of Array\n");
    for(int i=0; i<size; i++){
        scanf("%d",&array[i]);
    }
    printf("This is Array Element\n");
    for(int i=0; i<size; i++){
        printf("%d \n",array[i]);
    }
    printf("Enter Pos and Elemeent \n");
    int pos,element;
    scanf("%d",&pos);
    scanf("%d",&element);
    for(int i=size; i>=pos; i--){
        array[i]=array[i-1];
    }
    array[pos]=element;
    size++;
    printf("Now This is Array \n");
    for(int i=0; i<size; i++){
        printf("%d \n",array[i]);
    }
}