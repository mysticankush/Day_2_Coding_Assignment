/**
 * Program to Implement a stack in C 
 *
 * Compilation : gcc problem1.c
 * Execution : ./a.out
 * Ankush Chhabra 1910990144 6-08-2021
 * Assignment -> Day_2_Coding_Assignment
 */

#include <stdio.h>
int stack[100005];
int top = -1; 
int is_empty()
{
   if(top == -1)
      return 1;
   else
      return 0;
}
// Function to remove the topmost element of the stack 
int pop() 
{
   int temp;
   if(is_empty()!=1) 
   {
      temp = stack[top];
      top--;   
      return temp;
   }
   else //if stack is empty then it will underflow
   {
      printf("Stack Underflow.\n");
      return -1;
   }
}

// Function to find the topmost element of the stack 
int peek() 
{
   if(is_empty()!=1) 
   {
      return stack[top];
   } 
   else //if stack is empty then it will underflow
   {
      printf("Stack Underflow.\n");
      return -1;
   }
   
}
//Function to push element at the top of the stack 
void push(int data) 
{
      top++;   
      stack[top] = data;
}

int size(){
    return top+1;
}

int main()
{
    push(1);
    push(2);
    push(3);
    
    //Find the topmost element of the stack but not remove it
    int top = peek();
    printf("%d ",top);
    
    int data = pop();
    //remove the top element and return it
    printf("\n%d ",data);
    
    int res = is_empty();
    if(res==1)
    {
        printf("\nStack is empty");
    }else
    {
       printf("\nStack is not empty"); 
    }
    
    int sz = size();
    printf("\n%d",sz);
}
