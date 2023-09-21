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

Node* Insert(Node* head, int data){
    Node* node = new Node;
    node->data = data;
    if(head==NULL){
        head = node;
        return head;
    }
    else{
        Node* last = head;
        while(last->next!=NULL){
            last=last->next;
        }
        last->next=node;
        return head;
    }
}

Node* MergeLists(Node *headA, Node* headB){
    if(headA==NULL&&headB==NULL) return NULL;
    Node* C = new Node;
    Node* ans;
    if(headA==NULL) ans = headB;
    else if(headB==NULL) ans = headA;
    else if(headA->data<headB->data) ans = headA;
    else ans = headB;
    while(headA!=NULL&&headB!=NULL){
        if(headA->data<headB->data){
            C->next = headA;
            C = C->next;
            headA = headA->next;
        }
        else{
            C->next = headB;
            C = C->next;
            headB = headB->next;
        }
    }
    if(headA==NULL&&headB!=NULL){
        C->next = headB;
    }
    else if(headA!=NULL&&headB==NULL){
        C->next = headA;
    }
    return ans;
}

int main(){
    int temp, n, m;
    cin >> n >> m;
    Node *A = NULL;
    Node *B = NULL;
    for(int i = 0; i<n; i++){
        cin >> temp;
        Node *head = new Node;
        A=Insert(A, temp);
    }
    for(int i = 0; i<m; i++){
        cin >> temp;
        Node *head = new Node;
        B=Insert(B, temp);
    }
    Node *C = MergeLists(A, B);
    Print(C);
    return 0;
}







