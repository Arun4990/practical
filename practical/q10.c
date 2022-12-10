#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};
void insertathead(struct Node** head,int data)
          
{
    struct Node* node =(struct Node*) malloc(sizeof(struct Node));          
    node->data  = data;
    node->next = (*head);
    (*head)    = node;
}
void insertatmid(struct Node* prev,int data,int pos)
{
    if (prev == NULL)
    {
      printf("the given previous node cannot be NULL");
      return;
    }
    struct Node* node =(struct Node*) malloc(sizeof(struct Node));
    int cnt=0;
    while(cnt<pos-1){
      prev=prev->next;
      cnt++;
    }           
    node->data  = data;
    node->next = prev->next;
    prev->next = node;
}
void insertatend(struct Node** head,int data)
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
 

void print(struct Node *node)
{
  while (node != NULL)
  {
     printf("%d ", node->data);
     node = node->next;
  }
}

int main()
{
    struct Node* head = NULL;
    
    while(1){
    printf("1.Insert at head \t");
    printf("2. Insert at mid \t");
    printf("3. Insert at end \t");
    printf("4. print the list \t");
    printf("5. Exit\n");
    int choice,value,pos;
    scanf("%d",&choice);
    switch(choice){
      case 1:
      printf("Enter Number \n");
      scanf("%d",&value);
      insertathead(&head,value);
      break;
      case 2:
      printf("Enter Number \n");
      scanf("%d",&value);
      printf("Enter Position \n");
      scanf("%d",&pos);
      insertatmid(head,value,pos);
      break;
      case 3:
      printf("Enter Number \n");
      scanf("%d",&value); 
      insertatend(&head,value);
      break;
      case 4:
      printf("This Is List \n");
      print(head);
      printf("\n");
      break;
      case 5:
      exit(0);
      break;
      default :
      printf("your choice is wrong \n");
    }
    }
}