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

}
int main()
{
    return 0;
}

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

    ll.print();

    return 0;
}