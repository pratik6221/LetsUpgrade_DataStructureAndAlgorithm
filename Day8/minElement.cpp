#include<iostream>
#include<stdio.h> 
using namespace std; 
  
class MaxStack 
{ 
    stack<int> mainStack; 
  
    stack<int> trackStack; 
  
public: 
    void push(int x) 
    { 
        mainStack.push(x); 
        if (mainStack.size() == 1) 
        { 
            trackStack.push(x); 
            return; 
        } 
  
        if (x > trackStack.top()) 
            trackStack.push(x); 
        else
            trackStack.push(trackStack.top()); 
    } 
  
    int getMax() 
    { 
        return trackStack.top(); 
    } 
  
    int pop() 
    { 
        mainStack.pop(); 
        trackStack.pop(); 
    } 
}; 
  
int main() 
{ 
    MaxStack s; 
    s.push(2); 
    cout << s.getMax() << endl; 
    s.push(1); 
    cout << s.getMax() << endl; 
    s.push(6); 
    cout << s.getMax() << endl; 
    return 0; 
} 
