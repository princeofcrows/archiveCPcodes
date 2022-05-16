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

bool has_cycle(Node* head) {
    if(head==NULL) return head;
    Node* temp[100005];
    int i=0;
    while(head!=NULL){
        for(int j=0;j<i;j++){
            if(temp[j]==head){
                return true;
            }
        }
        temp[i] = head;
        head = head->next;
        i++;
    }
    return false;
}

int main(){
    int temp, n;
    cin >> n;
    Node *A = NULL;
    for(int i = 0; i<n; i++){
        cin >> temp;
        A=Insert(A, temp);
    }
    cout << has_cycle(A) <<endl;
    Print(A);
    return 0;
}


