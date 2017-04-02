#include<stdio.h>
#include<malloc.h>
struct node{ int data;
	     struct node *left;
	      struct node *right;
            };
int key;
typedef struct node node_adt;

node_adt* create_node(int key)
{
 node_adt *new_node;
 new_node=(node_adt*)malloc(sizeof(node_adt));
 new_node->data=key;
 new_node->left=NULL;
 new_node->right=NULL;
 return new_node;
}
node_adt* insert_node(node_adt *root,int key)
{
  if(root==NULL)
   {
     return create_node(key);
   }
   
 else
  {
     if(key > root->data)
     {
      root->right=insert_node(root->right,key);
     }
 
    else
    root->left=insert_node(root->left,key);
    
   
   return root;
  }
 
}

node_adt* search(node_adt *root,int key)
{
  if(root==NULL)
   {
    printf("key not found\n");
    return root;
   }

 else if(root->data==key)
  {
    printf("key found\n");
    return root;
   }

 else
 {
   if(key>root->data)
    {root->right=search(root->right,key);}

   else
    {root->left=search(root->left,key);}

  return root;
 }

}
node_adt* find_minvalue_node(node_adt *root)
{
 node_adt *temp;
 temp=root;
 while(temp->left!=NULL)
  {
   temp=temp->left;
  
   }
 printf("minimum value= %d\n",temp->data);
 return temp;
}
node_adt* delete_node(node_adt *root,int key)
{
  if(root==NULL)
   return root;

  else if(root->data==key)
   {
     if(root->left==NULL)
      {
       node_adt *temp=root->right;
        free(root);         
        return temp;
      }
    else if(root->right==NULL)
      {
       node_adt *temp=root->left;
        free(root);         
        return temp;
      }
     else
     {
       node_adt *min=find_minvalue_node(root->right);
        root->data=min->data;       
       root->right=delete_node(root->right,min->data);
      }


   }
 
  else
   {
    if(key>root->data)
    {root->right=delete_node(root->right,key);}

     else
      {root->left=delete_node(root->left,key);}

     return root;
     
    }

}
main()
{ int a,b=1,c,e;
  node_adt *root=NULL;
 while(b!=5)
 { 
   printf("1=insert,2=serch,3=delete\n4=find minimum value,5=exit\n");
    scanf("%d",&b);
  switch(b)
        { case 1:	
	       { printf("give value to insert\n");
         	scanf("%d",&a);
         	root=insert_node(root,a);
                 break;
            }

            case 2:
             {printf("give value to search\n");
         	   scanf("%d",&c);
                search(root,c);
                break;
	          }

	  case 3:
          { printf("give value to search\n");
         	scanf("%d",&e);
	        delete_node(root,e);
           break;
	      }
         case 4:
          {find_minvalue_node(root);
           break; 
          }
          default :
            continue;
       }







   }
}
