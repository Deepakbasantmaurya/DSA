
#include <stdio.h>
#include<stdlib.h>
 typedef struct node{int data;
struct node*left,*right;
}node;
struct node*newnode(int data)
{struct node*new=(struct node*)malloc(sizeof(node));
new->data=data;
new->left=NULL;
new->right=NULL;
return new;
}
struct node*insert(struct node*root,int data)
{if(root==NULL)
{root=newnode(data);
return root;
}
else if(data<root->data)
{root->left=insert(root->left, data);
}
else
{root->right=insert(root->right,data);
}
return root;
}
void print(struct node*root)
{if(root!=NULL)
{print(root->left);
printf("%d",root->data);
print(root->right);
}
}
struct node* search(node *root,int data)
{if(root==NULL)
return root;
    if(data==root->data)
{ return root;
}
else if(data<root->data)
{return search(root->left,data);
}
else
{return search(root->right,data);
}  
}

int main()
{struct node* root=NULL;
root=insert(root,8);
root=insert(root,5);
root=insert(root,9);
root=insert(root,3);
print(root);
printf(" \n ");
int key;
printf("enter data which data you want to serch");
scanf("%d",&key);
struct node*temp=search(root,key);
if(temp->data==NULL)
printf("not found");
else 
printf("found at %dadress %d",temp,temp->data);
}


