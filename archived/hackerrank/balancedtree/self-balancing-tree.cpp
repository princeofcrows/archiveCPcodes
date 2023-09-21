#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

typedef struct node
{
    int val;
    struct node* left;
    struct node* right;
    int ht;
} node;

node* newnode(int val){
    node* nwnd = new node;
    nwnd->val = val;
    nwnd->left = NULL;
    nwnd->right = NULL;
    nwnd->ht = 0;
    return nwnd;
}

int height(node* root){
    if(root==NULL) return -1;
    return root->ht;
}

int getBalanced(node* root){
    if(root==NULL) return 0;
    return height(root->left)-height(root->right);
}

node* leftrotate(node* root){
    node* n = root->right;
    node* m = n->left;
    n->left = root;
    root->right = m;
    root->ht = max(height(root->left), height(root->right)) + 1;
    n->ht = max(height(n->left), height(n->right)) + 1;
    return n;
}
node* rightrotate(node* root){
    node* n = root->left;
    node* m = n->right;
    n->right = root;
    root->left = m;
    root->ht = max(height(root->left), height(root->right)) + 1;
    n->ht = max(height(n->left), height(n->right)) + 1;
    return n;
}

node* insert(node* root, int val)
{
    if(root==NULL) return newnode(val);
    if(val<root->val){
        root->left = insert(root->left, val);
    }
    else{
        root->right = insert(root->right, val);
    }
    root->ht = max(height(root->left), height(root->right)) + 1;
    int balance = getBalanced(root);
    if(balance>1 && val<root->left->val){
        return rightrotate(root);
    }
    if(balance>1&&val>=root->left->val){
        root->left = leftrotate(root->left);
        return rightrotate(root);
    }
    if(balance<-1 && val>root->right->val){
        return leftrotate(root);
    }
    if(balance<-1 && val<=root->right->val){
        root->right = rightrotate(root->right);
        return leftrotate(root);
    }
    return root;
}

void inOrder(node *root) {
    if(root==NULL)  return;
    cout << root->val <<" ";
    inOrder(root->left);
    inOrder(root->right);
}

int main() {
    //freopen("in.txt", "r", stdin);
    int n, temp;
    cin >> n;
    node* root = new node;
    while(n--){
        cin >> temp;
        root = insert(root, temp);
    }
    inOrder(root);
    return 0;
}















