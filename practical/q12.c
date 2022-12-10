#include<stdio.h>
#include<stdlib.h>
struct Node
{
  int data;
  struct Node *next;
};
void insert(struct Node** head,int data)
{    
    struct Node* node =(struct Node*) malloc(sizeof(struct Node));           
    struct Node *last = *head; 
    node->data  = data;
    node->next = NULL;
    if (*head == NULL)
    {
       *head = node;
       return;
    }
    while (last->next != NULL)
        last = last->next;
        last->next = node;
    return;
}
 
void search(struct Node* head,int key){
    struct Node* temp=head;
    while(temp != NULL){
        if(temp->data == key){
            printf("This Key Is Available %d \n",key);
            break;
        }
        temp=temp->next;
    }
    
}
void print(struct Node *node)
{
  while (node != NULL)
  {
     printf("%d ", node->data);
     node = node->next;
  }
}
int main(){
    struct Node* head=NULL;
    while(1){
        printf("1. Create a Node \t");
        printf("2. Search \t");
        printf("3. Print the list \t");
        printf("4.Exit \n");
        printf("Enter Choice \n");
        int choice,key,value;
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("Enter Number \n");
            scanf("%d",&value);
            insert(&head,value);
            break;
            case 2:
            printf("Enter number you want to search \n");
            scanf("%d",&key);
            search(head,key);
            break;
            case 3:
            printf("This is list \n");
            print(head);
            case 4:
            exit(0);
            break;
            default:
            printf("Invaild Number \n");
        }

    }
}