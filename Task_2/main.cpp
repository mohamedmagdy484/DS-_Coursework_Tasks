#include <iostream>
#include <stack>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

void collapse(stack<int>& s) {
    stack<int> temp;


    while (!s.empty()) {
        temp.push(s.top());
        s.pop();
    }

    while (!temp.empty()) {
        int sum = temp.top();
        temp.pop();

        if (!temp.empty()) {
            sum += temp.top();
            temp.pop();
        }

        s.push(sum);
    }
}
//****************************************************
void printStack(stack<int> s) {
    stack<int> temp;

    while (!s.empty()) {
        temp.push(s.top());
        s.pop();
    }

    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
}
//****************************************************

int main() {
    stack<int> s;
    printf("Data Structure assignment # 2\n");

    printf("===============================\n");

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(13);
    s.push(7);

    printf("\nBefore collapse: ");
    printStack(s);
    printf("\n===============================\n");
    collapse(s);

    printf("\nAfter collapse: ");
    printStack(s);
    printf("\n===============================\n");

    return 0;
}
