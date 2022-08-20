#include<iostream>
using namespace std;

void dra(int arr[], int idx,int n)
{
    //int n=arr.size();
    if(n==idx)
        return;
    dra(arr,idx+1,n);
    cout<<arr[idx]<<" ";
}

int main()
{
    int n;
    cout<<"Enter n=";
    cin>>n;
    cout<<"Enter elements\n";
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    dra(arr,0,n);
    return 0;
}

