#include <iostream>
using namespace std;

#include "ImplementStack.cpp"

bool checkBrackets(string brackets) {
    mystack<char> s(brackets.length());
    for(int i=0;i<brackets.length(); i++) {
        if(s.isEmpty()) {
            s.push(brackets[i]);
        } else if(s.top()=='(' && brackets[i]==')' ||
                 s.top()=='[' && brackets[i]==']' || 
                 s.top()=='{' && brackets[i]=='}') {
            s.pop();
        } else {
            s.push(brackets[i]);
        }
    }
    if(s.isEmpty()) {
        return true;
    }
    return false;
}

int main() {
    string expr = "({[]}{)}";
    string result = checkBrackets(expr)?"Brackets are Matched":"Brackets are not matched";
    cout << result << endl;
}