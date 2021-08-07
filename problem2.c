/**
 * Program to Implement a queue in C 
 *
 * Compilation : gcc problem2.c
 * Execution : ./a.out
 * Ankush Chhabra 1910990144 6-08-2021
 * Assignment -> Day_2_Coding_Assignment
 */
#include <stdio.h>
int queue[100005];

int front=0; 
int last=0;
int sz=0;

//return 1 if queue is empty else return 0
int is_empty() 
{
   if(sz == 0)
      return 1;
   else
      return 0;
}

// Function to remove element from front of the queue and return the front element
int dequeue() {
    
   if(is_empty()==0)
   {
      int value = queue[front];
      front++;
      sz--;
      return value;
   }
   else
   {
      printf("Queue Underflow.\n");
      return -1;
   }
}

//return the front element of the queue but not remove it
int peek() 
{
   if(is_empty()==0) 
   {
      return queue[front];
   } 
   else//If queue is empty it will underflow
   {
      printf("\nQueue Underflow.\n");
      return -1;
   }
   
}

// Function to insert data in Queue
void enqueue(int data)
{
      queue[last] = data;
      last++;
      sz++;
}

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    //remove front element and return it
    int front = dequeue();
    printf("%d ",front);
    
    //return the front element of the queue but not remove it
    front = peek();
    printf("\n%d ",front);
    int res = is_empty();
    if(res == 1)
    {
        printf("\nQueue is empty");
    }else
    {
       printf("\nQueue is not empty"); 
    }
    
    printf("\n%d ",sz); 
}
