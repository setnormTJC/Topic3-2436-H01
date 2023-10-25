#include <iostream>

#include<stack>

using namespace std;


//void doSomethingElse()
//{
//    cout << "Doing something else ..." << endl; 
//}
//
//void doSomething()
//{
//    doSomethingElse(); 
//}

bool isMatch(char openSymbol, char closeSymbol)
{
    if (openSymbol == '(' && closeSymbol == ')')
    {
        return true;
    }
    else if (openSymbol == '{' && closeSymbol == '}')
    {
        return true;
    }
    else
    {
        return false;
    }
}


bool isBalanced(string inputString)
{
    std::stack<char> openSymbolStack;
    for (auto& currentChar : inputString) {
        //check if current char is opening symbol
        if (currentChar == '(' || currentChar == '{') {
            openSymbolStack.push(currentChar);
        }

        //check for closing symbol:
        else if (currentChar == ')' || currentChar == '}') {
            if (openSymbolStack.empty())
            {
                return false; //close symbol MUST be preceded by an open symbol
            }
            if (isMatch(openSymbolStack.top(), currentChar))
            {
                openSymbolStack.pop();
            }
            else { //isMatch returned false, so string is unbalanced
                return false;
            }
        }// add else (neither an open symbol nor a close symbol)
    } //end for loop


    if (!openSymbolStack.empty())
    {
        return false;
    }
    else
    {
        return true;
    }
} //end `isBalanced`


int main()
{
 

    string UNbalancedExpression = "((){}";

    cout << std::boolalpha << isBalanced(UNbalancedExpression) << endl; 

    ////doSomething(); 

    //stack <string> namesStack; 

    //namesStack.push("Alice");
    //namesStack.push("Bob");
    //namesStack.push("Carol");

    ////
    //cout << namesStack.top() << endl; 
    ////The most important operations for stacks are top(), push(), and pop()
    //namesStack.pop(); 
    //cout << namesStack.size() << endl; 
    //namesStack.push("Darth");

    //cout << namesStack.top() << endl; 

    //namesStack.pop();
    //namesStack.pop();
    //namesStack.pop();
    //if (!namesStack.empty())
    //{
    //    namesStack.pop();
    //}


    


    return 0;
}