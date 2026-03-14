#include <iostream>
#include <stack>
#include <queue>
#include <string>
using namespace std;

bool SameOrder(stack<char> s, queue<char> q) {

    if (s.size() != q.size()){
        return false;
    }


    stack<char> tempStack;

    while (!s.empty()) {
        tempStack.push(s.top());
        s.pop();
    }

    while (!tempStack.empty()) {
        if (tempStack.top() != q.front()) {
            return false;
        }
        tempStack.pop();
        q.pop();
    }

    return true;
}

int main() {
    stack<char> cs1;
    queue<char> cq1;
    string name = "MohamedMagdy";

    cout << "Test Case 1: " << name << "\n";
    cout << "Contents in entry order: ";
    for (int i=0;i<name.length();i++) {
        char c = name[i];
        cout << c << " ";
        cs1.push(c);
        cq1.push(c);
    }

    if(SameOrder(cs1, cq1)){
    cout << "\nResult: Same Order\n";
    }
    else{
    cout << "\nResult: Different Order\n";

    }

    cout << "====================================\n";

    cout << "Test Case 2: (A,B vs B,A)\n";

    stack<char> cs2;
    queue<char> cq2;

    cs2.push('A');
    cs2.push('B');
    cq2.push('B');
    cq2.push('A');


    if(SameOrder(cs2, cq2)){
    cout << "\nResult: Same Order\n";
    }
    else{
    cout << "Result: Different Order\n";

    }
    cout << "====================================\n";


    return 0;
}
