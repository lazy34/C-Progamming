#include<iostream>
#include<limits.h>
using namespace std;
int main(){

    int *arr,n,i;

    cout<<"Enter your number of elements"<<endl;
    cin>>n;

    arr=(int*)malloc(n*sizeof(int));

    cout<<"Enetr your elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Your elements are: "<<endl;

    for(i=0;i<n;i++)
    {
       cout<<" "<<arr[i] <<" ";
    
    }
    
    int min=INT_MAX;
    int max=INT_MIN;

    for(i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }

    cout<<endl<<"max= "<<max<<endl;
    cout<<"min= "<<min;

    free(arr);


    return 0;

}