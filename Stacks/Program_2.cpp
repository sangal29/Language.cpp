// Stack using link list 
#include<iostream>
#include<list>
using namespace std;
class linkList{
  list<int>ll;
  
  public:

  void push(int val){
     ll.push_front(val);
  }

  void pop(){
   ll.pop_front();
  }

  int top()
  {
     return ll.front();

  }


bool empty(){
    return ll.size() == 0;
}
  
};
int main(){
linkList s;
s.push(10);
s.push(20);
s.push(30);

while(!s.empty())
{
    cout<< s.top() << " ";
    s.pop();

}

return 0;
}
