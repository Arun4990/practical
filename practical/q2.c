#include<stdio.h>
int main(){
    int array[100];
    printf("How Many element You Want to enter in Array\n");
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
    printf("Enter the Pos Where You Want delete element\n");
    int pos;
    scanf("%d",&pos);
    for(int i=pos; i<size; i++){
        array[i]=array[i+1];
    }
    size--;
    printf("Now This is Array \n");
    for(int i=0; i<size; i++){
        printf("%d \n",array[i]);
    }
}