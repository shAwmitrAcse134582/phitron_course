#include <bits/stdc++.h> 
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
class Queue {
public:
int sz;
Node *head;
Node *tail;
    Queue() {
        head=NULL;
        tail=NULL; 
        sz=0;         
                   
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(sz==0)
        return true;
        else return false;
    }

    void enqueue(int data) {
       sz++;
       Node *newNode=new Node(data);
       if(head==NULL){
          head=newNode;
          tail=newNode;
          return;
          
       }
       
       tail->next=newNode;
        tail=newNode;
          return;
    
    }

    int dequeue() {
     if(isEmpty()){
         return -1;
     }
     int ans=head->data;
     Node *tmp=head;
     head=head->next;
     if(head==NULL){
         tail=NULL;
     }
     delete tmp;
     sz--;
     return ans;
    }

    int front() {
        if(isEmpty())return -1;
        else
          return head->data;
    }
};