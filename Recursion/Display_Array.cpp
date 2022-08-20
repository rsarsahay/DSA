#include<iostream>
using namespace std;

//Algorithm
//Recursive Function to display array
/*
1.check base case if size of array is equal to index then return
2.print first index of an array 
2.Recursive call for (idx+1) elements of an array 
*/
void da(int arr[], int idx,int n)
{
    //int n=arr.size();
    if(n==idx)//check base case if size of array is equal to index then return
        return;
    cout<<arr[idx]<<" ";//print first index of an array
    da(arr,idx+1,n);//Recursive call for (idx+1) elements of an array 
}

int main()
{
    int n;//no. of elements in an array
    cout<<"Enter n=";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];//input array elements
    da(arr,0,n);//recursive call for da function to display an array
    return 0;
}
