#include<iostream>
using namespace std;

int maxOfArray(int arr[],int idx,int n)
{
    if(n-1==idx)
        return arr[idx];

    int misa=maxOfArray(arr,idx+1,n);
    if(misa>arr[idx])
        return misa;
    else
        return arr[idx];
}

int main()
{
    int n;
    cout<<"Enter n=";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];

   int maxi= maxOfArray(arr,0,n);
   cout<<maxi;

    return 0;
}


