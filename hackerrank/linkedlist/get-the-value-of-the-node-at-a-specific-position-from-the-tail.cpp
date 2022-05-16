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

int GetNode(Node *head,int positionFromTail){
    Node* temp = head;
    int i = 0;
    while(head!=NULL){
        head = head->next;
        i++;
    }
    head = temp;
    positionFromTail =i-positionFromTail-1;
    i=0;
    while(i!=positionFromTail){
        head = head->next;
        i++;
    }
    return head->data;
}

int main(){
    int temp, n, m;
    cin >> n;
    Node *A = NULL;
    Node *B = NULL;
    for(int i = 0; i<n; i++){
        cin >> temp;
        Node *head = new Node;
        A=Insert(A, temp);
    }
    cin >> n;
    cout << GetNode(A, n) <<endl;
    return 0;
}







