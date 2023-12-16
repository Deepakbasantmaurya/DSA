//we start coding 
//Binary search tree using linked list
#include<stdio.h>
#include<stdlib.h>
struct node{int data;
struct node*left ,*right;
};
struct node*Search(struct node*head,int data)
{if(head==NULL)
{printf("Node are not exist");
return 0;
}
if(data==head->data)
{return head;
}
else if(data>head->data)
{return Search(head->right,data);
}
else
return Search(head->left,data);
}
void print(struct node*root)
{if(root==NULL)
return 0;
print(root->left);
printf("%d\n",root->data);
print(root->right);
}
struct node* newnode(int data)
{struct node* new=(struct node*)malloc(sizeof(struct node));
new->data=data;
new->left=NULL;
new->right=NULL;
return new;
}
struct node*creat(struct node*root,int data)
{if(root==NULL)
{root=newnode(data);
return root;
}
else if(root->data<data)
{root->right=creat(root->right,data);//root->right ke pass bhi null hoga to if 
//wala condition true ho jayega or root->right me ek node join ho jayega 
//jiska data greter hoga root ke data se 
}
else
root->left=creat(root->left,data);
return root;
}
int main()
{struct node*head=NULL;
head=creat(head,6);
head=creat(head,3);
head=creat(head,4);
head=creat(head,2);
print(head);
//for serching the element
struct node*search=Search(head,3);
printf("root address=%d at value is%d",search,search->data);
return 0;
}

