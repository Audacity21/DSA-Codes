#include <iostream>

using namespace std;

//  stack implementation starts here ---------

/* STACK works in last in first  out mechanism 

  MAIN FUNCTION OF STACK

  1) push -> it is use to insert the element in stack 

  2) pop -> To remove the element from the stack 

  3) peek -> To get the value (data) of top element in the stack
 */

// code part begins here-----

int stack[100], n=100, top=-1;

// n = size of the stack 
//  top = act as a  pointer 

// implementation of push function 

void push(int val) {
   if(top>=n-1) // base condition 

   //    if the size is full , no element can insert to it 
   cout<<"Stack Overflow"<<endl;
   else {
      top++;
      stack[top]=val;
   }
}
// implementation of pop  function 
void pop() {
    //     if ther is no element , that mean no popping of elements
   if(top<=-1)// base condition
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< stack[top] <<endl;
      top--;
   }
}
// this fucniton is use to print the stack 
void display() {
   if(top>=0) {
      cout<<"Stack elements are:";
      for(int i=top; i>=0; i--)
      cout<<stack[i]<<" ";
      cout<<endl;
   } else
   cout<<"Stack is empty";
}
//  MAIN starts here ------------------
int main() {
   int ch, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
     /* here we use do while and switch case statement to perform the stack operation */
//    do while is use to run the statement atleast one time 
//    switch case statment provide as to choose multip option at a time 
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4);
   return 0;
}