#include<bits/stdc++.h>
using namespace std;
//Algorithm:
//Recursive function to find last Index of Occurrence in Array
/*
  1.check base case if index is equal to last index
  2.call a lastIdx recursive function for (idx+1)
  3.check if index value is not equal to data
    i)if idx element is equal to data
    ii)return index value
    iii)if not return -1
  4.else return index of that element
*/
//Recursive function to find last Index of Occurrence in Array
int lastIdx(int arr[],int idx,int data,int n)
{
    int li;
    if(idx==n)//check base case if index is equal to last index
        return -1;

    li=lastIdx(arr,idx+1,data,n);//call a lastIdx recursive function for (idx+1)

    if(li==-1)//check if index value is not equal to data
    {
       if(arr[idx]==data)//if idx element is equal to data
        return idx;//return index value

       else
        return -1;//if not return -1
    }
    else
        return li;//return index of that element
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
    cin>>data;//input data whose last index of occurrence is to be found
    int li=lastIdx(arr,0,data,n);//recursive call of a lastidx function to find last index of occurrence of a given data
    cout<<li;//print index of last index of occurrence of a given data
    return 0;
}

