#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
};

void CreateList(struct Node **head,struct Node **pre){
    struct Node *createNode=NULL;
    int a;
    printf("Enter No Of Nodes:");
    scanf("%d",&a);
    for (int i=0;i<a;i++){
        int val;
        printf("Enter the value for Node %d: ",i+1);
        scanf("%d", &val);
        createNode=(struct Node*)malloc(sizeof(struct Node));
        
        createNode->data=val;
        createNode->next=NULL;
        if (*head==NULL){
            *head=createNode;
            *pre=createNode;
        }else{
            (*pre)->next=createNode;
            *pre=createNode;
        }
    }
}
void printList(struct Node **head){
    struct Node* temp=*head;
    printf("Linked list: ");
    while (temp != NULL) {
        printf(" %d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void AddAtEnd(int a,struct Node **head) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data=a;
    newNode->next=NULL;
    struct Node* temp=*head;
    while (temp->next!=NULL){
        temp=temp->next;
        temp->next=newNode;
    }
}
void AddAtSpecific(int a, int pos,struct Node **head) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = a;
    newNode->next = NULL;
    if (pos==1){
        newNode->next=*head;
        *head=newNode;
        return;
    }
    struct Node* temp=*head;
    for (int i =1;i<pos-1 && temp!=NULL;i++){
        temp=temp->next;
    }
    if (temp=NULL){
        printf("Out Of Boundry");
    }else{
        newNode->next=temp->next;
        temp->next=newNode;
    }
}
int main() {
    struct Node *head=NULL,*pre=NULL;
    int a;
    while(1){
        printf("Option:\n");
        printf("1.Create Linked Lits:\n");
        printf("2.Display The Linked List:\n");
        printf("3.Add At End:\n");
        printf("4.Add At Specific Point:\n");
        printf("Enter The Option:");
        scanf("%d",&a);
        switch(a){
            case 1:{
                CreateList(&head,&pre);
                break;
            }
            case 2:{
                printList(&head);
                break;
            }
            case 3:{
                int a;
                printf("Enter the Value:");
                scanf("%d",&a);
                AddAtEnd(a,&head);
                break;
            }
            case 4:{
                int a, pos;
                printf("Enter the Position and Value Of The Node:");
                scanf("%d%d",pos,a);
                AddAtSpecific(a,pos,&head);
            }
        }
        
    }
    return 0;
}




