/*Reverses a linked list. Example: 1-> 2 -> 3 -> 4 ->5 
						Reverses to 5 -> 4 -> 3 -> 2 -> 1 
*/

#include<stdio.h>
#include<stdlib.h>
struct link{
	int n;
	struct link *next;
};

typedef struct link node;
node * reverse(node *head)
{
	if(head==NULL)
	{
		printf("Empty link \n");
		return head;
	}
	else
	{
		if(head->next==NULL)
			return head;
		node* p= head,*h = head,*m;
    	while (h != NULL) 
		{
        	m = h->next;
        	//printf("%d",m->n);
	       	if(h==head)
        		h->next = NULL;
        	else
       			h->next=p;
        	p=h;
        	h=m;
    	}
    head = p;
	return head;
	}
}
node *push(node *head,int e)
{
	node *h,*ele;
	ele=(node *)malloc(sizeof(node));
	ele->n=e;
	ele->next=NULL;
	if(head==NULL)
	{
		head=ele;
		return head;
	}
	else
	{
		h=head;
		while(h->next!=NULL)
		h=h->next;
		h->next=ele;
		return head;
	}
}
void main()
{
	node *head,*t;
	head=NULL;
	int ch,e,f=0;
	while(f==0)
	{
		printf("enter 1 for push . 2 for reverse , 3 for exit ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter the number ");
				scanf("%d",&e);
				head=push(head ,e);
				break;
			case 2:
				head = reverse(head);
				break;
			case 3:
				f=1;
				break;
		}
		t=head;
		while(t!=NULL)
		{
			printf("%d ",t->n);
			t=t->next;
		}
		printf("\n");
	}
}