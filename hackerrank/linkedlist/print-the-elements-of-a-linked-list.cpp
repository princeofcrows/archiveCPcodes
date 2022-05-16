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

/*
  Print elements of a linked list on console
  head pointer input could be NULL as well for empty list
  Node is defined as*/
  struct Node{
     int data;
     struct Node *next;
  };

void Print(Node *head){
    while(head!=NULL){
        cout << head->data <<endl;
        head = head->next;
    }
}

int main(){
    int temp, n;
    cin >> n;
    Node *A = NULL;
    Node *B = NULL;
    for(int i = 0; i<n; i++){
        cin >> temp;
        Node *head = new Node;
        head->data = temp;
        head->next = NULL;
        if(i!=0) B->next = head;
        if(i==0) A  = head;
        B = head;
    }
    Print(A);
    return 0;
}
