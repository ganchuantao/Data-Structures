#include <iostream>
#include "basicactions.h"
using namespace std;

Node *skipList(Node *head, int data, Node *expressHead) {
  Node *p = expressHead;
  Node *q = head;
  Node *temp = NULL;
  
  while (p != NULL) {

    if (p->next->data > data) {
      p = p->next;
      break;
    }

    if (p->next->data < data) {
      // displayNodes(p);
      temp = p->next;
      p = p->next;
    }
    p = p->next;
  }
  
  while (p != NULL) {
    if (p->data == data) {
      cout << "Data Found at Address : " << p->store << endl;
      break;
    }
    p = p-> next;
    }
  
return temp;
}


Node *buildList(Node *head) {
  int n = 4;
  Node *p = head;
  Node *forward;
  int counter=0;
  bool first=false;
  
 
  // Node *temp = forward;

  int cnt=0;
  while (p != NULL) {
    
    if (counter == n || first==false ) {
      first = true;
      
    }

    
  //return *forward;
}


int main() {
  Node *head = NULL;
  Node *Nhead = NULL;
  insertAtEnd(head,10);
  insertAtEnd(head,20);
  insertAtEnd(head,22);
  insertAtEnd(head,23);
  insertAtEnd(head,27);
  insertAtEnd(head,30);
  insertAtEnd(head,43);
  insertAtEnd(head,45);
  insertAtEnd(head,50);
  insertAtEnd(head,54);
  insertAtEnd(head,57);
  insertAtEnd(head,58);
  insertAtEnd(head,62);
  insertAtEnd(head,65);

  Nhead = buildList(head);
  // displayNodes(Nhead);
  skipList(head, 54, Nhead);
}
