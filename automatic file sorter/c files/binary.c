#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node* rigth;
};
struct node* create(int n)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=n;
    newnode->left=NULL;
    newnode->rigth=NULL;
    return newnode;
}
void inorderTraversal(struct node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorderTraversal(root->left);
    printf("%d\t",root->data);
    inorderTraversal(root->rigth);
}
void preorderTraversal(struct node* root)
{
    if(root==NULL)
    {
        return;
    }
    printf("%d\t",root->data);
    preorderTraversal(root->left);
    preorderTraversal(root->rigth);
}
void postorderTraversal(struct node* root)
{
    if(root==NULL)
    {
        return;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->rigth);
    printf("%d\t",root->data);
}
int main()
{
    struct node* root=create(10);
    root->left=create(20);
    root->rigth=create(30);
    root->left->left=create(40);
    root->left->rigth=create(50);
    root->rigth->left=create(40);
    root->rigth->rigth=create(50);
    printf("\nbinary tree created successfully");
    printf("\n Inorder traversal");inorderTraversal(root);
    printf("\n preorder traversal");preorderTraversal(root);
    printf("\n postorder traversal");postorderTraversal(root);
    return 0;
}