#include <stdio.h>
#include <stdlib.h>

// Define the structure for a linked list node
struct Node {
    int data;
    struct Node* next;
};
//struct Node* head = NULL;

// Function to create a new node with given data
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); //Dynamic memory allocation for created node (newNode)
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a new node at the beginning

void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head; //newNode next points to the node where head was pointing previusly (that is to the node, before newNode created)
    *head = newNode; //head pointing to newNode (since head always points to the first node)
}

// Function to insert a new node at the end

void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);

// If the newNode is the First node
0
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL) { //Moving to the node in which next=NULL (last node)
        temp = temp->next;
    }
    temp->next = newNode;  //Last node pointing to new node (The node whose next is NULL, now pointing to the newNode)
}

// Function to delete a node by value
void deleteNode(struct Node** head, int key){
    struct Node* temp = *head, *prev = NULL;
	

    // If head node itself holds the key
    if (temp != NULL && temp->data == key){
        *head = temp->next; //head pointing to the node which is next to the node with the deleted key
        free(temp);
	printf("Deleting %d...\n",key);
        return;
    }

    // Search for the key
    while (temp != NULL && temp->data != key) { //If the first node does not contain the key, move next until the key matches or till last node
        prev = temp;
        temp = temp->next;
    }

    // If key was not present in linked list
    	if (temp == NULL)
	{
		printf("Key not found in the list\n");
		return;
	}

	printf("Deleting %d...\n",key);

    // Unlink the node from linked list
    prev->next = temp->next; //the node previous to the deleted node points to the node to which the deleted node was pointing
    free(temp);
}

// Function to display the linked list
void displayList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main() {

	int choice=0,val,key;  
	struct Node* head = NULL;
	//struct Node* temp = NULL;
   
    printf("\n********* Operations on linked list*********\n");  
    printf("\n----------------------------------------------\n");  
    while(choice != 5)  
    {  
        printf("\n\nChose one from the below options...\n");  
        printf("\n1.Insert Begining\n2.Insert End\n3.Delete\n4.Show\n5.Exit");  
        printf("\n Enter your choice \n");        
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            {   
		printf("Enter the Element:");
		scanf("%d",&val);
               	insertAtBeginning(&head, val);
	       	break;  
            }  
            case 2:  
            {
		printf("Enter the Element:");
		scanf("%d",&val); 
                insertAtEnd(&head, val);
                break;  
            }  
	    case 3:
	    {
		struct Node* temp = head;
		if(temp==NULL)
		{
			printf("List Empty");
			break;
		}
		else
		{
			printf("Enter the Element to delete:");
			scanf("%d",&key);

			//printf("Deleting %d...\n",key);
    			deleteNode(&head, key);
			printf("Updated linked list: ");
    			displayList(head);
			break;
		}
	    }

            case 4:  
            {  
                printf("Linked list: ");
    		displayList(head);
		break;
  
            }  
            case 5:   
            {  
                printf("Exiting....");  
                break;   
            }  
            default:  
            {  
                printf("Please Enter valid choice ");  
            }   
   	 } 

    }

    return 0;
}
