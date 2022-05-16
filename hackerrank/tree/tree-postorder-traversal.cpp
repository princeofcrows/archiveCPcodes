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

void postOrder(node *root) {
    if(root==NULL)  return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data <<" ";
}

int main(){
    return 0;
}
