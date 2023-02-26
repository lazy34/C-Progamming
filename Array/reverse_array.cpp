#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,start,end,i;
    cout<<"Specify the array size"<<endl;
    cin>>n;
    int arr[n];

    cout<<"Input your elements:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    start=0;
    end=n-1;

    while(start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    cout<<"Your elements are: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<" "<<arr[i]<<" "<<endl;

    }

    return 0;
}
