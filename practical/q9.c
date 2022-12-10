#include<stdio.h>
#include <stdlib.h>
#define size 5
int item[size];
int front=-1,rear=-1;
void insert(int element){
if ((front == rear + 1) || (front == 0 && rear == size - 1)){
    printf("Queue is full \n");

}
else{
    if(front == -1)front =0;
    rear=(rear+1)%size;
    item[rear]=element;
}
}
void delete(){
int element;
  if ((front == -1)) {
    printf("\n Queue is empty !! \n");
    
  } else {
    element = item[front];
    if (front == rear) {
      front = -1;
      rear = -1;
    } 
   
    else {
      front = (front + 1) % size;
    }
    printf("Deleted element -> %d \n", element);
    int i;
  if ((front == -1))
    printf(" Empty Queue\n");
  else {
    printf("Front -> %d ", front);
    printf("Items -> ");
    for (i = front; i != rear; i = (i + 1) % size) {
      printf("%d ", item[i]);
    }
    printf("%d ", item[i]);
    printf("Rear -> %d \n", rear);
  }
  }

}
void display(){

int i;
  if ((front == -1))
    printf(" Empty Queue\n");
  else {
    printf("Front -> %d ", front);
    printf("Items -> ");
    for (i = front; i != rear; i = (i + 1) % size) {
      printf("%d ", item[i]);
    }
    printf("%d ", item[i]);
    printf("Rear -> %d \n", rear);
  }
}
int main(){
while(1){
printf("1. Insert \t");
printf("2. Delete \t");
printf("3. Display \t");
printf("4. Exit \n");
printf("Enter Your Choice\n");
int choice,value;
scanf("%d",&choice);
switch(choice){
    case 1:
    printf("Enter number \n");
    scanf("%d",&value);
    insert(value);
    break;
    case 2:
    delete();
    printf("Element is Delete \n");
    break;
    case 3:
    printf("This is list \n");
    display();
    break;
    case 4:
    exit(0);
    break;
    default:
    printf("Invaild Number \n");
    break;

}
}
}