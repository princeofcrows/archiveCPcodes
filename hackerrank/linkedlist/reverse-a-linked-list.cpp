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

Node* Reverse(Node *head){
    if(head==NULL) return head;
    if(head->next==NULL) return head;
    Node* temp = head;
    Node* temp2;
    head = head->next;
    temp->next=NULL;
    temp2 = temp;
    temp = head;
    head = head->next;
    while(head!=NULL){
        temp->next = temp2;
        temp2 = temp;
        temp = head;
        head = head->next;
    }
    temp->next=temp2;
    return temp;
}

int main(){
    int temp, n;
    cin >> n;
    Node *A = NULL;
    Node *B = NULL;
    for(int i = 0; i<n; i++){
        cin >> temp;
        Node *head = new Node;
        A=Insert(A, temp);
    }
    A=Reverse(A);
    Print(A);
    return 0;
}

















