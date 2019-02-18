#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};

void push(struct node** , int );
void printList(struct node* );
int multiplyTwoLists(struct node* , struct node* );
int main()
{
int op, val;
struct node* first=NULL;
struct node* second=NULL;
do
{
printf("1. enter first number \n");
printf("2. enter second number \n");
printf("3. result of multiplication of two number \n");
printf("enter your choice \n");
scanf("%d",&op);
switch(op)
{
case 1:
printf("enter the number \n");
scanf("%d",&val);
push(&first,val);
printf("First List is: \n"); 
printList(first); 
break;
case 2:
printf("enter the number \n");
scanf("%d",&val);
push(&second,val);
printf("Second List is: \n"); 
printList(second); 
break;
case 3:
printf("%d\n", multiplyTwoLists(first, second)); 
break;
default:
printf("enter correct option\n");
break;
}
}while(op!=4);
return 0;
}


void push(struct node** head, int new_data)
{
struct node *new_node=(struct node*)malloc(sizeof(struct node));
new_node->data= new_data;
new_node->next=*head;
*head=new_node;
}

void printList(struct node *head)
{
struct node *ptr=head;
while(ptr!=NULL)
{
printf("%d\n",ptr->data);
ptr=ptr->next;
}
printf("\n");
}

int multiplyTwoLists(struct node* first, struct node* second) 
{ 
	int num1 = 0, num2 = 0; 
	
	// Generate numbers from linked lists 
	while (first!=NULL || second!=NULL) 
	{ 
		if (first!=NULL) 
		{ 
			num1 = num1*10 + first->data; 
			first = first->next; 
		} 
		if (second!=NULL) 
		{ 
			num2 = num2*10 + second->data; 
			second = second->next; 
		} 
	} 

	// Return multiplication of 
	// two numbers 
	return num1*num2; 
}




