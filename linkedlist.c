//Linked List Data Structure

#include <stdio.h>
#include <conio.h>
//#include <alloc.h>
#define newnode (struct node*) malloc(sizeof(struct node))

struct node
{
	int data;
	struct node *next;
};

struct node *create_list();
int find_len(struct node *f);

int main()
{
	struct node *f;
	int len;
	f = NULL;
	clrscr();
	
	f = create_list();
	len = find_len(f);
	printf("\n length = %d",len);
} // main

struct node *create_list()
{
	struct node *f,*c,*p;
	int tdata;	
	f = NULL;
	printf("\n Enter data number ( use 0 to exit ) : ");
	scanf("%d",&tdata);
	while( tdata != 0 )
	{
		c = newnode;
		if( c == NULL)
		{
			printf("\n Insuf. mem. ");
		    return 0;	//exit(0);
		}
		c->data = tdata;
		c->next = NULL;
		if( f== NULL)
			f = c;
		else
			p->next = c;
			p = c;
			printf("\n Enter data number ( use 0 to exit ) : ");
			scanf("%d",&tdata);
	} //while
	return(f);
} // create list

int find_len(struct node *f)
{
	int len=0;
	struct node *t;	
	if( f == NULL)
	return(0);
	t = f;	
	while( t != NULL )
	{
		len++;
		t = t->next;
	}
	return(len);
}
//sent via Codebox - A quick reference app for the most common programming problems. 
//http://goo.gl/mq11jY

// /data/data/com.hipipal.qpyplus/files/bin/qpython-android5.sh
// export PATH=$PATH:/data/data/com.hipipal.qpyplus/files/bin/;
//LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/data/data/com.hipipal.qpyplus/files/bin;