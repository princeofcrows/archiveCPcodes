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
     struct Node *prev;
  };
void Print(Node *head){
    while(head->next!=NULL){
        cout << head->data <<endl;
        head = head->next;
    }
    cout << head->data <<endl;
    while(head->prev!=NULL){
        cout << head->data <<endl;
        head = head->prev;
    }
    cout << head->data <<endl;
}

Node* Insert(Node* head, int data){
    Node* node = new Node;
    node->data = data;
    if(head==NULL){
        node->prev = NULL;
        node->next = NULL;
        return node;
    }
    else{
        Node* last = head;
        while(last->next!=NULL){
            last=last->next;
        }
        last->next=node;
        node->prev=last;
    }
    return head;
}

Node* SortedInsert(Node *head,int data){
    Node* node = new Node;
    node->data = data;
    if(head==NULL) return node;
    if(data<=head->data){
        node->next = head;
        head->prev = node;
        return node;
    }
    else{
        Node* temp = SortedInsert(head->next, data);
        temp->prev = head;
        head->next = temp;
        return head;
    }
}
int main(){
    int temp, n;
    cin >> n;
    Node *A = NULL;
    for(int i = 0; i<n; i++){
        cin >> temp;
        A=SortedInsert(A, temp);
    }
    Print(A);
    return 0;
}


