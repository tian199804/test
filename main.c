#include <stdio.h>
#include <stdlib.h>
 typedef struct node{
    int data;
    struct node* left;
    struct node* right;
 } Node;

 typedef struct {
     Node* root;
 } Tree;
 void inorder(Node* node){
     if(node!=NULL){
         inorder(node->left);
         printf("%d  ",node->data);
         inorder(node->right);
     }
 }
void insert(Tree* tree,int value){
    Node* node= malloc(sizeof(Node));

    node -> data  = value;
    node -> left  = NULL;
    node -> right = NULL;
     if(tree->root == NULL)
         tree->root=node;
     else{
         Node* temp=tree->root;
         while(temp!=NULL){
                if(value < temp->data){
                         if(temp->left==NULL){
                                 temp->left=node;
                                 return;
                         }else{
                             temp=temp->left;
                         }
                 }else{
                    if(temp->right==NULL){
                                temp->right=node;
                                return;
                        }else{
                            temp=temp->right;
                     }
                 }
         }
     }
 }

 int main()
 {
     int arr[10]={4,7,13,5,11,9,39,6,22,10};
     Tree tree;
     tree.root=NULL;
     for(int i=0;i<10;i++){
             insert(&tree,arr[i]);
     }
     inorder(tree.root);
 }
