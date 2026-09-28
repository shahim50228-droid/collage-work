#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

void display(struct node *head){
    struct node *temp = head;
    if (head == NULL){
        printf("list is empty");
    }
    else{
        while(temp!=NULL){
            printf("%d ", temp->data);
            temp=temp->next;
        }
    }
}  

struct node* insertatbeginning(struct node *head, int val){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL){
        printf("memory allocation failed!\n");
        return head;
    }
    newnode->data = val;
    newnode->next = head;
    head = newnode;
    return head;
}

struct node* insertatend(struct node *head, int val){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL){
        printf("memory allocation failed!\n");
        return head;
    }
    newnode->data = val;
    newnode->next = NULL;

    if (head == NULL){
        return newnode;}
        struct node *temp = head;
        while (temp->next != NULL){
            temp=temp->next;
        }
        temp->next=newnode;
        return head;
}

struct node*  insertAfternode(struct node *head, int targetvalue, int val){
    struct node *temp = head;

    while (temp != NULL && temp->data != targetvalue){
        temp = temp->next;
    }

    if (temp == NULL){
        printf("node with value %d not found in the list!\n", targetvalue);
    return head;
    }

    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode==NULL){
        printf("memory allocation failed\n");
        return head;
    }

    newnode->data = val;
    newnode->next=temp->next;
    temp->next= newnode;

    return head;
}


struct node* deleteFromBeginning(struct node* head){
    if (head==NULL){
        printf("List is already empty! nothing to delete.\n");
    return NULL;}

    struct node *temp = head;
    head=head->next;
    free(temp);
    
    printf("first node deleted successfully.\n");
    return head;
}

struct node* deleteFromEnd(struct node* head){
    if (head == NULL){
        printf("List is already empty! nothing to delete.\n");
        return NULL;
    }


    if (head->next == NULL){
        free(head);
        printf("last node deleted successfully.\n");
        return NULL;
    }

    struct node *temp = head;

    while (temp->next->next != NULL){
        temp = temp->next;
    }

    free(temp->next);
    temp->next = NULL;

    printf("last node deleted successfully.\n");
    return head;
}



int main(){
    struct node *newnode,*head=NULL,*temp;
    int choice =1;
    while(choice==1){
        newnode = (struct node*) malloc(sizeof(struct node));
    if(newnode == NULL){
    printf("memory allocation failed/n");
    break;
    }

    printf("enter data: ");
    scanf("%d",&newnode->data);
    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode;
        temp = head;
    }
    else{
        temp->next = newnode;
        temp = newnode;
    }
    printf("do you want to insert more data?(1 for yes, 0 for no): ");
    scanf("%d",&choice);
}
printf("the linked list is: ");
display(head);
printf("\nthe linkedlist after inserting 99 at beginning is: ");
head = insertatbeginning(head,99);
display(head);
printf("\nthe linked list after inserting 200 at end is: ");
display(insertatend(head, 200));
printf("\nthe linked list after inserting in between is: ");
display(insertAfternode(head,12,900));

printf("\nthe linked list after deleting from beginning is: ");
head = deleteFromBeginning(head);
display(head);


printf("\nthe linked list after deleting from end is: ");
head = deleteFromEnd(head);
display(head);

return 0;
}

display(head);

return 0;
}
