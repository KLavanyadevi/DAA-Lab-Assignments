#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 256

struct Node {
    char data;
    int freq;
    struct Node *left, *right;
};

struct Node* createNode(char data, int freq) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->freq = freq;
    node->left = node->right = NULL;
    return node;
}

void printCodes(struct Node* root, int arr[], int top) {

    if(root->left){
        arr[top] = 0;
        printCodes(root->left, arr, top + 1);
    }

    if(root->right){
        arr[top] = 1;
        printCodes(root->right, arr, top + 1);
    }

    if(root->left == NULL && root->right == NULL){
        printf("%c : ", root->data);
        for(int i=0;i<top;i++)
            printf("%d",arr[i]);
        printf("\n");
    }
}

int main(){

    char str[200];
    int freq[256]={0};

    printf("Enter the string: ");
    scanf(" %[^\n]",str);   // better input method

    int len=strlen(str);

    for(int i=0;i<len;i++){
        if(str[i]!=' ')
            freq[str[i]]++;
    }

    struct Node* nodes[256];
    int count=0;

    printf("\nCharacter Frequencies:\n");

    for(int i=0;i<256;i++){
        if(freq[i]>0){
            printf("%c = %d\n",i,freq[i]);
            nodes[count++]=createNode(i,freq[i]);
        }
    }

    while(count>1){

        int min1=0,min2=1;

        if(nodes[min2]->freq < nodes[min1]->freq){
            int t=min1;
            min1=min2;
            min2=t;
        }

        for(int i=2;i<count;i++){
            if(nodes[i]->freq < nodes[min1]->freq){
                min2=min1;
                min1=i;
            }
            else if(nodes[i]->freq < nodes[min2]->freq){
                min2=i;
            }
        }

        struct Node* left=nodes[min1];
        struct Node* right=nodes[min2];

        struct Node* parent=createNode('*',left->freq+right->freq);
        parent->left=left;
        parent->right=right;

        if(min1>min2){
            int t=min1;
            min1=min2;
            min2=t;
        }

        nodes[min1]=parent;
        nodes[min2]=nodes[count-1];

        count--;
    }

    int arr[100];

    printf("\nHuffman Codes:\n");
    printCodes(nodes[0],arr,0);

    return 0;
}