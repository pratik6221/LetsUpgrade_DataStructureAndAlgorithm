#include<iostream>
#include<stdio.h>
using namespace std; 
  
struct Stack 
{ 
    stack<int> s; 
    int min; 
  
    void getMin() 
    { 
        if (s.empty()) 
            cout << "Stack is empty\n"; 
  
        else
            cout <<"Minimum Element in the stack is: "
                 << min << "\n"; 
    } 
  
    void peek() 
    { 
        if (s.empty()) 
        { 
            cout << "Stack is empty "; 
            return; 
        } 
  
        int t = s.top();
  
        cout << "Top Most Element is: "; 
  
        (t < min)? cout << min: cout << t; 
    } 
  
    void pop() 
    { 
        if (s.empty()) 
        { 
            cout << "Stack is empty\n"; 
            return; 
        } 
  
        cout << "Top Most Element Removed: "; 
        int t = s.top(); 
        s.pop(); 
  
        if (t < min) 
        { 
            cout << min << "\n"; 
            minEle = 2*min - t; 
        } 
  
        else
            cout << t << "\n"; 
    } 
  
    void push(int x) 
    { 
        if (s.empty()) 
        { 
            min = x; 
            s.push(x); 
            cout <<  "Number Inserted: " << x << "\n"; 
            return; 
        } 
   
        if (x < min) 
        { 
            s.push(2*x - min); 
            min = x; 
        } 
  
        else
           s.push(x); 
  
        cout <<  "Number Inserted: " << x << "\n"; 
    } 
}; 
   
int main() 
{ 
    Stack s; 
    s.push(6); 
    s.push(10); 
    s.getMin(); 
    s.push(4); 
    s.push(2); 
    s.getMin(); 
    s.pop(); 
    s.getMin(); 
    s.pop(); 
    s.peek(); 
  
    return 0; 
} 
