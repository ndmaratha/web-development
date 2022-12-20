/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

struct node{
    struct node* left;
    int data;
    struct node* right;
    
};
    struct node*root=NULL;


// struct node* getnode(int x){
//     struct node* temp =(struct node*)malloc(sizeof(struct node));
//     temp->data=x;
//     temp->left=NULL;
//     temp->right=NULL;
//     return temp;
// }



// struct node* insert(struct node* root,int x){
//     struct node* temp=root;
//     if(temp==NULL){
//         temp=getnode(x);
//     }
//     else if(x<=temp->data){
//         temp->left=insert(temp->left,x);
//     }
//     else{
//         temp->right=insert(temp->right,x);

//     }
//     }

struct node* insert(struct node* p,int d){
    if(p==NULL){
        p=(struct node*)malloc(sizeof(struct node));
        p->left=p->right=NULL;
        p->data=d;
    }
    else{
        if(d<p->data){
            p->left=insert(p->left,d);
        }
        else {
            if(d>p->data)
            p->right=insert(p->right,d);
        }
    }
    return p;
}
    
 void pree(struct node *node){
     if(node!=NULL){
         printf("%d",node->data);
         pree(node->left);
         pree(node->right);
     }
     
     return;
 }
 void in(struct node *node){
     if(node!=NULL){
         pree(node->left);
         printf("%d",node->data);
         pree(node->right);
     }
     return;
 }
 void pro(struct node *node){
     if(node!=NULL){
         pree(node->left);
         pree(node->right);
         printf("%d",node->data);
     }
     
     return;
 }
 
int main()
{
    struct node *tree,*temp;
    tree=insert(tree,5);
    tree=insert(tree,6);
    tree=insert(tree,4);
    tree=insert(tree,2);
    tree=insert(tree,1);
    tree=insert(tree,7);
    tree=insert(tree,8);
    
    if(tree==NULL){
        printf("null");
    }
    else{
    pree(tree);
    in(tree);
    pro(tree);
    }
    

    return 0;
}
