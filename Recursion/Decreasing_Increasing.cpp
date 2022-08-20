#include <iostream>
using namespace std;

//Algorithm
//Recursive Function to print elements in decreasing increasing order
/*
1.check base case
2.print n
3.Recursive call for n-1 elements
4.print n
*/
//Recursive Function to print elements in decreasing increasing order
void print(int n)
{
	if(n == 0)//base case
		return;

    cout<<n<<" ";//print n
	print(n - 1);//recursive call  for (n-1) 
    cout<<n<<" ";//print n
}

int main()
{

	int n ;//no. till which the elements will print
    cout<<"Enter N\n";
    cin>>n;
	print(n);//function call to print no. in decreasing increasing order
	return 0;
}

