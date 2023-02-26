//Implementation of two stack in the array

#include<iostream>
#include<stack>
using namespace std;

class twostack
{
    public:
    int *arr;
    int top1;
    int top2;
    int size;


    //initialize two stack
    twostack(int s)
    {

    this->size=s;
    top1=-1;
    top2=s;
    arr=new int[s];

    //push in stack1
    void push1(int num)
    {
        //atleast empty space required
        if(top2-top1>1)
        {
            top1++;
            arr[top1]=num;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }
    void push2(int num)
    {
        if(top2-top1>1)
        {
            top2--;
            arr[top2]=num;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }

    //pop from stack 1 and returns popped elements

    int pop1()
    {
        if(top1>=0)
        {
            int ans=arr[top1];
            top1--;
            return ans;
        }
        else 
        {
            return -1;
        }
    }

    //pop from stack 1 and returns popped elements
    
    int pop1()
    {
        if(top1>=0)
        {
            int ans=arr[top2];
            top1--;
            return ans;
        }
        else 
        {
            return -1;
        }
    }

  
}
