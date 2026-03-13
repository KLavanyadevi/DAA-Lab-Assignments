#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    char color;
    struct node *left,*right,*parent;
};

struct node* createNode(int data){
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->color='R';
    temp->left=temp->right=temp->parent=NULL;
    return temp;
}

struct node* insertBST(struct node* root,struct node* pt){
    if(root==NULL)
        return pt;

    if(pt->data < root->data){
        root->left=insertBST(root->left,pt);
        root->left->parent=root;
    }
    else if(pt->data > root->data){
        root->right=insertBST(root->right,pt);
        root->right->parent=root;
    }

    return root;
}

void inorder(struct node *root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

int main(){
    struct node *root=NULL;
    int n,val;

    printf("Enter number of nodes: ");
    scanf("%d",&n);

    printf("Enter values: ");
    for(int i=0;i<n;i++){
        scanf("%d",&val);
        struct node* newNode=createNode(val);
        root=insertBST(root,newNode);
    }

    printf("Inorder traversal: ");
    inorder(root);

    return 0;
}