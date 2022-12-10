#include<stdio.h>
#include <stdlib.h>
#define N 100
int top=-1;
int array[N];
void Insert(int a){
    if(top==N-1){
        printf("OverFlow Condition \n");
    }
    else{
        top++;
        array[top]=a;
        
    }
};
void Display(){
    if(top==-1){
        printf("NO Element in Stack");
    }
    else{
        for(int i=top; i>-1; i--){
            printf("%d \t",array[i]);
        }
        printf("\n");
    }
};
void Delete(){
    if(top==-1){
        printf("No Element in Stack");

    }
    else{
        top--;
    }
};
int main(){
    while(1){
        printf("1. Insert \t");
        printf("2. Delete \t");
        printf("3. Display \t");
        printf("4. Exit\n");
        printf("Enter Your Choice\n");
        int choice,value;
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("Enter Number \n");
            scanf("%d",&value);
            Insert(value);
            break;
            case 2:
            printf("Delete top Element from stack \n");
            Delete();
            break;
            case 3:
            printf("All Element of stack \n");
            Display();
            break;
            case 4:
            exit(0);
            break;
            default:
            printf("Invaild Number \n");
        }
    }
    

}