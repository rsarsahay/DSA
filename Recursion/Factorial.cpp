#include <bits/stdc++.h>
using namespace std;

//Algorithm
//Recursive Function to return factorial of a given element
/*
1.check base case
2.Recursive call of an element to return factorial of a given element
*/

//Recursive Function to return factorial of a given element
int fact(int n)
{
	if(n == 1)//base case
		return 1;

	return n*fact(n - 1);//recursive call of an element to return factorial of a given element

}

int main()
{
  int n;//no. to find its factorial
  cout<<"Enter n\n";
  cin>>n;
  //fact(n);
  cout<<fact(n);//call of a recursive factorial to print factorial of a given no.
   return 0;
}

