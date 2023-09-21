#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef struct node{
    int data;
    node* left;
    node* right;
}node;

int getHeight(node* root){
    if(root==NULL) return 0;
    else{
        return 1+max(getHeight(root->left), getHeight(root->right));
    }
}

node* creatnode(int data){
    if(data==-1) return NULL;
    else{
        node* newnode = new node;
        newnode->data = data;
        newnode->left = NULL;
        newnode->right = NULL;
        return newnode;
    }
}

void attachnode(node* root, int i){
    if(root==NULL) return;
    if(i==1){
        int a, b;
        cin >> a >> b;
        root->left = creatnode(a);
        root->right = creatnode(b);
    }
    else{
        attachnode(root->left, i-1);
        attachnode(root->right, i-1);
    }
}
void inOrder(node *root) {
    if(root==NULL)  return;
    inOrder(root->left);
    cout << root->data <<" ";
    inOrder(root->right);
}
void swapN(node* root, int i){
    if(root==NULL) return;
    if(i==1){
        node* temp;
        temp = root->right;
        root->right = root->left;
        root->left = temp;
    }
    else{
        swapN(root->left, i-1);
        swapN(root->right, i-1);
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    int n, t, l, i, h;
    cin >> n;
    node* root;
    root = creatnode(1);
    for(i=1;i<=n; i++){
        attachnode(root, i);
    }
    h = getHeight(root);
    cin >> t;
    while(t--){
        cin >> l;
        for(i = 1; l*i<=h; i++){
            swapN(root, l*i);
        }
        inOrder(root);
        cout <<endl;
    }
    return 0;
}

















