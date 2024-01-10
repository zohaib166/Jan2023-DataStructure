#include <iostream>
using namespace std;
#include "ImplementStack.cpp"

void reverseWords(string phrase) {
    mystack<char> s(phrase.length());

    for(int i=0;i<phrase.length(); i++) {
        if(phrase[i]!=' ') {
            s.push(phrase[i]);
        } else {
            while(!s.isEmpty()) {
                cout << s.top();
                s.pop();
            }
            cout << " ";
        }  
    }
    while(!s.isEmpty()) {
        cout << s.top();
        s.pop();
    }
    cout << endl;
}

int main() {
    string str = "Hello World";
    reverseWords(str);
}