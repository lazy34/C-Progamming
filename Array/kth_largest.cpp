#include<bits/stdc++.h>
using namespace std;

void print(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}
void bubble(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    
}
int main()
{
    int n;
    cout<<"Specify the array size"<<endl;
    cin>>n;
    int *arr;
    arr=(int*)malloc(n*sizeof(int));

    cout<<"Enter your elements:"<<" ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    bubble(arr,n);

    cout<<"sorted form: "<<" ";
    print(arr,n);

    int k;
    cout<<endl<<"Enter Your kth max elements: ";
    cin>>k;

    cout<<endl<<"kth max element: "<<" ";
    cout<<arr[n-k];

    return 0;

}