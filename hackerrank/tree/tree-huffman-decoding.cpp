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
   int freq;
   char data;
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

void decode_huff(node * root,string s){
    node* temp = root;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='0'&&temp->left!=NULL){
            temp = temp->left;
        }
        else if(s[i]=='1'&&temp->right!=NULL){
            temp = temp->right;
        }
        else{
            cout << temp->data;
            temp = root;
            i--;
        }
    }
    cout << temp->data;
}

int main(){
    int n;
    char temp;
    string str;
    cin >> str;
    n = str.length();
    node* root = NULL;
    for(int i=0; i<n; i++){
        temp = str[i];
        root = insert(root, temp);
    }
    preOrder(root);
    return 0;
}









