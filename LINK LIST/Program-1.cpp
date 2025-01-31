// Program -1 The basic syntax of the link list how we acess the link list elemnt 


// this implise by the push front// Program -1 The basic syntax of the link list how we acess the link list elemnt 



#include<iostream>
using namespace std;
class Node{
public:

int data;
Node* next;

Node( int val)
{
    data = val;
    next = NULL;
}

};

class List{

    Node* head;
    Node* tail;

    public:

    List(){
        head = tail = NULL;
    }

    void push_front(int val)
    {
        Node* newNode = new Node(val);
        if( head == NULL){
            head = tail = newNode;
            return; 
        }
        else{
            newNode->next = head;
            head = newNode; 
        }
    }

    void push_back(int val ){
        
        Node* newNode = new Node(val);
        if(head == NULL)
        {
           head = tail = newNode;
        }
        else
        {
            tail-> next = newNode;
            tail = newNode;
        }
    }

    void pop_front()
    {if(head == NULL )
    {
        cout<<" The link list is empaty ";
         return;

    }
      else{
        Node* temp = head;
        head = head->next;
        temp -> next = NULL;
        delete temp;

      }

    }
    void pop_back()
    {
        if( head == NULL)
        {
            cout << " The list is empaty ";
            Node* temp = tail;
            tail = tail ->next;
            temp -> next = NULL;
            delete temp;
        }
    }

    void print()
    {
        Node* temp = head;
        while (temp  != NULL)
        {
            cout << temp -> data << " ";
            temp = temp ->next; 
        }
        cout << endl;
    }

};
int main()
{
    List ll;

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);

    ll.pop_front();
    
    ll.push_back(4);

    ll.pop_back();

    ll.print();

    return 0;
}