#include<iostream>
 #include<vector>
 using namespace std;

//Algorithm
//Recursive Function to find all subsequences of given elements
/*
  1.check base case ,index is greater than equal to no. of elements
  2.print the subsequences
  3.print null string
  4.take or pick the particular index into the subsequence
  5.not take or not pick, this element is not added to the subsequence
*/
 void func(int index,vector<int>&v,int arr[],int n )
 {
 	if(index>=n)
 	{
 		for(auto x:v)
         cout<<x<<" ";//print the subsequences

 	    if(v.size()==0)
         cout<<"{}"<<" ";//print null string

 		cout<<endl;
 		return ;
	 }

	//take or pick the particular index into the subsequence
	v.push_back(arr[index]);
	func(index+1,v,arr,n);

	v.pop_back();

	//not take or not pick, this element is not added to the subsequence
	func(index+1,v,arr,n);

 }

 int main()
 {
 	int n;
 	cout<<"Enter no. of elements";
 	cin>>n;//no. of elements
 	int arr[n];
	cout<<"Enter elements=\n";
	for(int i=0; i<n; i++)
	cin>>arr[i];//input elements in the array
	cout<<"All possible subsequences are: "<<endl;
 	vector<int> v;

 	func(0,v,arr,n);//call recursive function to print no. of subsequences

 }