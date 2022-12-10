#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* next;
};
void insert(struct Node** head, int data)
{
	struct Node* node= (struct Node*)malloc(sizeof(struct Node));
		
	node->data = data;
	node->next = (*head);
	(*head) = node;
}
void deleteNode(struct Node** head, int key)
{
	
	struct Node *temp = *head, *prev;

	if (temp != NULL && temp->data == key) {
		*head = temp->next; 
		free(temp);
		return;
	}
	while (temp != NULL && temp->data != key) {
		prev = temp;
		temp = temp->next;
	}
	if (temp == NULL)
		return;
	prev->next = temp->next;
	free(temp); 
}

void print(struct Node* node)
{
	while (node != NULL) {
		printf(" %d ", node->data);
		node = node->next;
	}
    printf("\n");
}

int main()
{
	struct Node* head = NULL;
    while(1){
        int choice,value,key;
        printf("1. Create Node \t");
        printf("2. Delete Any Node \t");
        printf("3. Print list\t");
        printf("4. Exit \n");
        printf("Enter Choice \n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
        printf("Enter Number \n");
        scanf("%d",&value);
        insert(&head,value);
        break;
        case 2:
        printf("Enter No you want to Delete \n");
        scanf("%d",&key);
        deleteNode(&head,key);
        break;
        case 3:
        printf("This is List\n");
        print(head);
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
