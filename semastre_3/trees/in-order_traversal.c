#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node{
    int value;
    struct Node* left;
    struct Node* right;
};

struct Node* createN(int value){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node*));
    newNode->value = value;
    newNode->left = newNode->right = NULL;
    return newNode;
};

void inOrderTraversal(struct Node* root){
    if(root == NULL){return;}
    inOrderTraversal(root->left);
    printf("%d ",root->value);
    inOrderTraversal(root->right);
}

void preOrderTraversal(struct Node* root){
    if(root == NULL){return;}
    printf("%d ",root->value);
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void postOrderTraversal(struct Node* root){
    if(root == NULL){return;}
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    printf("%d ",root->value);
}
void swap_nodes(struct Node* root){
    if(root == NULL){return;}
    struct Node* x = root->left;
    root->left = root->right;
    root->right = x;
    swap_nodes(root->left);
    swap_nodes(root->right);
}
void printTree(struct Node* root) {
    if (root != NULL) {
        printTree(root->left);
        printf("%c ", root->value);
        printTree(root->right);
    }
}

bool search_element(struct Node* root,int v){
    if (root == NULL)
        return false;
    if (root->value == v)
    return true;
    if (v < root->value)
        return search_element(root->left, v);
    else
        return search_element(root->right, v);
/*
    best case : O(log n)
    average case : O(log n)
    worst case : O(n)
*/
}

int main(){
    struct Node* root = createN(6);
    struct Node* node2 = createN(4);
    struct Node* node3 = createN(8);
    struct Node* node4 = createN(1);
    struct Node* node5 = createN(5);
    struct Node* node6 = createN(2);
    struct Node* node7 = createN(3);

    root->left = node2;
    root->right = node3;
    node2->left = node4;
    node2->right = node5;
    node4->right = node7;
    node7->left = node6;
    

    printf("pre-order traversal of the binary tree: \n");
    preOrderTraversal(root);
    printf("\n");
    printf("in-order traversal of the binary tree: \n");
    inOrderTraversal(root);
    printf("\n");
    printf("post-order traversal of the binary tree: \n");
    postOrderTraversal(root);
    printf("\n\n\n");

    printTree(root);
    printf("\n\n\n");
    swap_nodes(root);
    printTree(root);

    printf("\n\n\n");
    if(search_element(root,15)){printf("found\n");}
    else{printf("not found\n");}

}