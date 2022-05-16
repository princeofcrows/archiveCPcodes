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

typedef struct node
{
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
};

bool check(node* root, int mn, int mx) {
    if(root==NULL) return true;
    if(root->data<=mn||root->data>=mx) return false;
    return check(root->left, mn, root->data)&&check(root->right, root->data, mx);
}

bool checkBST(node* root) {
    return check(root, 0, INT_MAX);
}

int main(){
    int n, temp;
    cin >> n;
    node* root = NULL;
    for(int i=0; i<n; i++){
        cin >> temp;
        root = insert(root, temp);
    }
    cout << checkBST(root);
    return 0;
}









