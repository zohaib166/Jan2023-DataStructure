#include "ImplementStack.cpp"

int getPrecedence(char op)
{
	switch (op) {
	case '+':
	case '-':
		return 1;
	case '*':
	case '/':
		return 2;
	case '^':
		return 3;
	default: 
		return -1;
	}
}

int isOperator(char ch)
{
	return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^' || ch=='(' || ch==')');
}

string infix2postfix(string infix) {
    int i=0,j=0;
    int len = infix.size();
    mystack<char> s(len);
    string postfix;

    for (i = 0; i < len; i++) {
        if(!isOperator(infix[i])) {
            postfix.push_back(infix[i]);
        } else if(infix[i]=='(') {
            s.push(infix[i]);
        } else if(infix[i]==')') {
            while(!s.isEmpty() && s.top()!='(') {
                postfix.push_back(s.pop());
            }
            if(!s.isEmpty() && s.top()!='(') {
                return "Invalid Expression";
            } else {
                s.pop();
            }
        } else if(isOperator(infix[i])) {
            while(!s.isEmpty() && getPrecedence(infix[i]) <= getPrecedence(s.top())) {
                postfix.push_back(s.pop());
            } 
            s.push(infix[i]);
        }
    }

    while(!s.isEmpty()) {
        postfix.push_back(s.pop());
    }

    return postfix;
}

int main() {
    string infix = "a*(b+c/d*e)";
    string postfix = infix2postfix(infix);
    
    cout << postfix << endl;
}