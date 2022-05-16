#include <iostream>
#include <cstddef>
using namespace std;
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:
    Node* insert(Node *head,int data)
      {
          Node *temp = new Node(data);
          if(head==NULL) return temp;
          Node *nde = head;
          while(nde->next!=NULL){
              nde = nde->next;
          }
          nde->next = temp;
          return head;
      }
      void display(Node *head)
      {
          Node *start=head;
          while(start)
          {
              cout<<start->data<<" ";
              start=start->next;
          }
      }
};
int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T--){
        cin>>data;
        head=mylist.insert(head,data);
    }
	mylist.display(head);

}
