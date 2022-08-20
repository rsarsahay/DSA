#include<iostream>
using namespace std;
//Algorithm:
//Recursive function to find First Index of Occurrence in Array
/*
  1.check base case if index is equal to last index
  2.check if 0th index value is equal to data then return index of that element
  3.else call a firstIdx recursive function for (idx+1) then return index of that element 
*/
//Recursive function to find First Index of Occurrence in Array
int firstIdx(int arr[],int idx,int data,int n)
{
    int fi;
    if(idx==n)//check base case if index is equal to last index
        return -1;

    if(arr[idx]==data)//check if 0th index value is equal to data
       return idx;//return index of that element

    else
        fi=firstIdx(arr,idx+1,data,n);//call a firstIdx recursive function for (idx+1)
        return fi;//return index of that element 
}

int main()
{
    int n,data;
    cout<<"Enter n=";
    cin>>n;//input no. of elements
    int arr[n];
    cout<<"Enter Elements\n";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];//input elements in the array
    }
    cout<<"Enter data=";
    cin>>data;//input data whose 1st index of occurrence is to be found
    int fi=firstIdx(arr,0,data,n);//recursive call of a firstidx function to find 1st index of occurrence of a given data
    cout<<fi;//print index of 1st index of occurrence of a given data
    return 0;
}
