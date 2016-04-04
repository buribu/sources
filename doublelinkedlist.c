//Program of double linked list
# include <stdio.h>
# include <malloc.h>
struct node
{
	struct node *prev;
	int info;
	struct node *next;
}*start;
struct node create_list(int num);
void addatbeg(int num);
void addafter(int num,int c);
void count();
void del(int num);
void display();
void rev();
int main()
{
	int choice,n,m,po,i;
	start=NULL;
	while(1)
	{
		printf("1.Create List\n");
		printf("2.Add at begining\n");
		printf("3.Add after\n");
		printf("4.Delete\n");
		printf("5.Display\n");
		printf("6.Count\n");
		printf("7.Reverse\n");
		printf("8.exit\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice) 
		{
		 case 1: 
			printf("How many nodes you want : ");
			scanf("%d",&n);
			for(i=0;i<n;i++)
			{
				printf("Enter the element : ");
				scanf("%d",&m);
				create_list(m);
			}
			break;
		 case 2: 
			printf("Enter the element : ");
			scanf("%d",&m);
			addatbeg(m);
			break;
		 case 3: 
			printf("Enter the element : ");
			scanf("%d",&m);
			printf("Enter the position after which this element is inserted : ");
			scanf("%d",&po);
			addafter(m,po);
			break;
		 case 4: 
			printf("Enter the element for deletion : ");
			scanf("%d",&m);
			del(m);
			break;
		 case 5: 
			display();
			break;
		 case 6: 
			count();
			break;
		 case 7: 
			rev();
			break;
		 case 8: 
			//exit();
		 default: 
			printf("Wrong choice\n");
	}/*End of switch*/
   }/*End of while*/
   return 0;
}/*End of main()*/
struct node create_list(int num) 
{
	struct node *q,*temp;
	temp= malloc(sizeof(struct node));
	temp->info=num;
	temp->next=NULL;
	if(start==NULL) 
	{
		temp->prev=NULL;
		start->prev=temp;
		start=temp;
	}
	else
	{
		q=start;
		while(q->next!=NULL) 
			q=q->next;
		q->next=temp;
		temp->prev=q;
	}
}/*End of create_list()*/
addatbeg(int num) 
{
	struct node *temp;
	temp=malloc(sizeof(struct node));
	temp->prev=NULL;
	temp->info=num;
	temp->next=start;
	start->prev=temp;
	start=temp;
}/*End of addatbeg()*/
addafter(int num,int c) 
{
	struct node *temp,*q;
	int i;
	q=start;
	for(i=0;i<c-1;i++)	{
		q=q->next;
		if(q==NULL) 
		{
			printf("There are less than %d elements\n",c);
			return;
		}
	}
	temp=malloc(sizeof(struct node) );
	temp->info=num;
	q->next->prev=temp;
	temp->next=q->next;
	temp->prev=q;
	q->next=temp;
}/*End of addafter() */
del(int num) 
{
	struct node *temp,*q;
	if(start->info==num)	{
		temp=start;
		start=start->next;
  /*first element deleted*/		start->prev = NULL;
		free(temp);
		return;
	}
	q=start;
	while(q->next->next!=NULL) 
	{
		if(q->next->info==num)     /*Element deleted in between*/
		{
			temp=q->next;
			q->next=temp->next;
			temp->next->prev=q;
			free(temp);
			return;
		}
		q=q->next;
	}
	if (q->next->info==num)    /*last element deleted*/
	{
 	temp=q->next;
		free(temp);
		q->next=NULL;
		return;
	}
	printf("Element %d not found\n",num);
}/*End of del()*/
display()
{
	struct node *q;
	if(start==NULL) 
	{
		printf("List is empty\n");
		return;
	}
	q=start;
	printf("List is :\n");
	while(q!=NULL) 
	{
		printf("%d ", q->info);
		q=q->next;
	}
	printf("\n");
}/*End of display() */
count()
{
 	struct node *q=start;
	int cnt=0;
	while (q!=NULL) 
	{
		q=q->next;
		cnt++;
	}
	printf("Number of elements are %d\n",cnt);
}/*End of count()*/
rev()
{
	struct node *p1,*p2;
	p1=start;
	p2=p1->next;
	p1->next=NULL;
	p1->prev=p2;
	while (p2!=NULL) 
	{
		p2->prev=p2->next;
		p2->next=p1;
		p1=p2;
		p2=p2->prev;
 /*next of p2 changed to prev */
	}
	start=p1;
}/*End of rev()*/