#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#define max_size 5

class stack {
private:
    int top=-1;
    int arr [max_size];
public:




//*********************************************************************************

// push function

void push(int x){
	if(top==max_size-1){
		printf("=======================\n");
		printf("\n error Stack overflow  happened\n");
		printf("\n=======================\n");
		return;

	}
	top++;
	arr[top]=x;
}
//*********************************************************************************

// pop function
void pop(){
	if(top ==-1){
		printf("=======================\n");
		printf("\n error stack is already empty can't pop\n");
		printf("\n=======================\n");
		return;
	}
	top--;//top--
}
//*********************************************************************************

// top function
int peek(void){
if(top ==-1){
    printf("sorry the stack is already empty \n");
    return -1;
}
	return arr[top];
}
//*********************************************************************************

// is empty function
bool is_empty (void){
	if(top==-1){


		return true;
	}
	else{

		return false ;
	}
}
//*********************************************************************************

// print function
void print(stack s){
    stack temp;
    printf("Stack : \n\n");

    while(!(s.is_empty())){
        temp.push(s.peek());
        s.pop();
    }

    while(!(temp.is_empty())){
        printf("%d\n", temp.peek());
        temp.pop();
    }
}


};// End of the Class

int main(void){
printf("Data Structure Task #2\n");
printf("=======================\n\n");

stack s;
s.pop();
s.push(3);
s.push(2);
s.push(0);
s.push(2);
s.push(2);
s.is_empty();


//bool x=s.is_empty();
s.print(s);

}

