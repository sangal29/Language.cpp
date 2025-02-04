// This is a leetcode qution of stack problem 
// link of the qution : https://leetcode.com/problems/valid-parentheses/description/


#include<iostream>
#include<stack>
using namespace std;
bool isValid(string str){
    stack<char>st;
    for( int i = 0 ; i< str.length(); i++)
    {
        if(str[i] == '(' || str[i] == '{' || str[i] == '[') // opning case of bracket 
        {
            st.push(str[i]);
        }
        else{
               // closing case of bracket
               if(st.empty()){
                return false;
               }
               if((st.top() == '(' && str[i] == ')') ||
                (st.top() == '{' && str[i] == '}') ||
                (st.top() == '[' && str[i] == ']'))
                {
                    st.pop();
                }
                else{
                    return false;
                }

            
               
        }
    }
    return st.empty();
}
int main()
{
    string bracket = "({{[]}}";
    bool ans = isValid(bracket);

     cout <<" the given srting is = " << (ans ? "valid ": "invalid") <<endl;;

    return 0;
}