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

struct node
{
    int data;
    node* left;
    node* right;
};

void top_view(node * root){
    if(root==NULL) return;
    if(root->left!=NULL){
        root->left->right = NULL;
        top_view(root->left);
    }
    cout << root->data<<" ";
    if(root->right!=NULL){
        root->right->left = NULL;
        top_view(root->right);
    }
}

int main(){
    return 0;
}
