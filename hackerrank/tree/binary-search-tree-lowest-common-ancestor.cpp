#include <map>
#include <set>
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
using namespace std;

typedef struct node{
   int data;
   node * left;
   node * right;
}node;

void preOrder(node *root) {
    if(root==NULL) return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

node * insert(node * root, int value)
{
    if(root == NULL) {
        node* temp = new node;
        temp->left = NULL;
        temp->right = NULL;
        temp->data = value;
        return temp;
        }
    else {
        node* cur;
        if(value <= root->data){
            cur = insert(root->left, value);
            root->left = cur;
        }
        else{
            cur = insert(root->right, value);
            root->right = cur;
        }
    }
   return root;
}

node * lca(node * root ,int v1,int v2){
    if(v1<root->data&&v2<root->data){
        root = lca(root->left, v1, v2);
    }
    else if(v1>root->data&&v2>root->data){
        root = lca(root->right, v1, v2);
    }
    return root;
}

int main(){
    int n, temp;
    cin >> n;
    node* root = NULL;
    for(int i=0; i<n; i++){
        cin >> temp;
        root = insert(root, temp);
    }
    cout << LCA(root, 1, 7)->data;
    return 0;
}









