#ifndef _STK_
#define _STK_

#include <iostream>
using namespace std;
template <typename T>
class mystack {
public:
    T *stk;
    int size;
    int t;
    mystack(int n): size(n) {
        stk = new T[size];
        t = -1;
    }
    void push(T ele) {
        if(t==size-1) {
            cout << "stack is already full\n";
            return;
        }
        t++;
        stk[t] = ele;
    }
    T pop() {
        if(t==-1) {
            cout << "stack is empty\n";
            return -1;
        }
        return stk[t--];
    }

    T top() {
        return stk[t];
    }

    bool isEmpty() {
        if(t==-1) return true;
        return false;
    }
};

/* int main() {
    mystack<int> s{5};
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout << s.top() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
} */
#endif
