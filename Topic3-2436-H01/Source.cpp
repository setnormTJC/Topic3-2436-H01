#include <iostream>

#include<stack>

using namespace std;


void doSomethingElse()
{
    cout << "Doing something else ..." << endl; 
}

void doSomething()
{
    doSomethingElse(); 
}

int main()
{
    
    //doSomething(); 

    stack <string> namesStack; 

    namesStack.push("Alice");
    namesStack.push("Bob");
    namesStack.push("Carol");

    //
    cout << namesStack.top() << endl; 
    //The most important operations for stacks are top(), push(), and pop()
    namesStack.pop(); 
    cout << namesStack.size() << endl; 
    namesStack.push("Darth");

    cout << namesStack.top() << endl; 

    namesStack.pop();
    namesStack.pop();
    namesStack.pop();
    if (!namesStack.empty())
    {
        namesStack.pop();
    }


    


    return 0;
}