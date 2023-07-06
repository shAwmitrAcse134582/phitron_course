/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

class Stack
{
    
public:
Node *head;
Node *tail;
int sz;
    Stack()
    {
        head=NULL;
        tail=NULL;
        sz=0;
    }

    int getSize()
    {
       return sz;
    }

    bool isEmpty()
    {
        if(sz==0)return true;
        else return false;
    }

    void push(int data)
    {
       sz++;
       Node *newNode=new Node(data);
       if(head==NULL){
           head=newNode;
           tail=newNode;
           return;
       }
      newNode->next=head;
       head=newNode;
    }

    void pop()
    {
        
        Node *deleteNode=head;
        if(head==NULL){
            return;
        }
        head=head->next;
        sz--;
    }

    int getTop()
    {
        if(sz==0)return -1;
        else
        return head->data;
    }
};