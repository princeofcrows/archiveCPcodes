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

void LevelOrder(node * root){
    queue <node*> x;
    x.push(root);
    while(!x.empty()){
        node* temp = x.front();
        x.pop();
        cout << temp->data <<" ";
        if(temp->left!=NULL){
            x.push(temp->left);
        }
        if(temp->right!=NULL){
            x.push(temp->right);
        }
    }
}

int main(){
    return 0;
}
