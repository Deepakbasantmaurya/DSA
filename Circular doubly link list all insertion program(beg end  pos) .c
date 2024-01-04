
)#include <stdio.h>
#include<stdlib.h>
typedef struct node
{
  struct node *pre;
  int data;
  struct node *next;
} node;
struct node *
insertatbeg (struct node *tail, int data)
{
  struct node *newp = (struct node *) malloc (sizeof (struct node));
  newp->data = data;
  newp->pre = newp;
  newp->next = newp;
  if (tail == NULL)
    {
      return newp;		//that line code means no node have so it is creat;
    }
  else
    {
      struct node *temp = tail->next;	//if node have one or more than one tail is point the last of the node so it is a circular link list that reason last node pointing varible next part is attached or point a first node;
      newp->next = temp;	//means first node adress;
      newp->pre == tail;	//newp is become a first node so pre part is hold the last node address  of the link list because it is  doubly circular link list;
      temp->pre = newp;		// because doubly c l list;
      tail->next = newp;
      return tail;
    }
}

struct node *
insertatend (struct node *tail, int data)
{
  struct node *newp = (struct node *) malloc (sizeof (struct node));
  newp->data = data;
  newp->pre = newp;
  newp->next = newp;
  if (tail == NULL)
    {
      return newp;		//that line code means no node have so it is creat;
    }
  else
    {
      struct node *temp = tail->next;
      newp->pre = tail;		//means newp->pre part me tail ko dal rahre h 
      newp->next = tail->next;	//means newp become last node of the list that reson tail ->next address give to new->nex
      tail->next = newp;	//means tail ponting the last node;
      tail = tail->next;	//tail ko move kara rahe hai //tail=newp
      return tail;
    }
}

struct node *
insertatpos (struct node *tail, int data, int pos)
{
  struct node *temp = tail->next;
  struct node *newp = (struct node *) mallo
    {
      return newp;		//that line code means no node have so it is creat;
    }
pos--;
      while (pos > 1)
	{
	  temp = temp->next;
	  pos--;
	}
      if (temp == tail)		//if pos is last;
	{
	  newp->pre = tail;	//means newp->pre part me tail ko dal rahre h 
	  newp->next = tail->next;	//means newp become last node of the list that reson tail ->next address give to new->nex
	  tail->next = newp;	//means tail ponting the last node;
	  tail = tail->next;	//tail ko move kara rahe hai //tail=newp
	  return tail;
	}
      else
	{
	  newp->pre = temp;
	  newp->next = temp->next;
	  temp->next->pre = newp;
	  temp->next = newp;
	  return tail;
	}
    }


void
print (struct node *tail)
{
  struct node *temp = tail->next;
  if (temp == NULL)
    printf (" list is empty");
  else
    {
      do
	{
	  printf ("%d", temp->data);
	  temp = temp->next;
	}
      while (temp != tail->next);	//we use do while loop because one move need because tail->next==temp so that reson
    }
}

int
main ()
{
  struct node *tail = NULL;
  printf ("enter the node  size for insertion at begning");
  int n, data, i, pos, data1;
  scanf ("%d", &n);
  for (i = 1; i <= n; i++)
    {
      printf ("enter the data for %d node", i);
      scanf ("%d", &data);
      tail = insertatbeg (tail, data);
    }
  print (tail);
  printf ("\n");
  printf ("\nenter the node size for insertion at end\n");
  scanf ("%d", &n);
  for (i = 1; i <= n; i++)
    {
      printf ("enter the data for %d node", i);
      scanf ("%d", &data);
      tail = insertatend (tail, data);
    }
  print (tail);
  printf ("\nenter the pos where you want for inserting data");
  scanf ("%d", &pos);
  printf ("enter the data");
  scanf ("%d", &data);
  tail = insertatpos (tail, data, pos);
  print (tail);
}
