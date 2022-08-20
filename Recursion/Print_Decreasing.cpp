#include <iostream>
using namespace std;
//Recursive Function to print elements in increasing order
void printToN(int n)
{
	if(n == 0)//base case
		return;

	cout<<n<<" ";//print n
	printToN(n - 1);//recursive call  for (n-1) 

}

int main()
{
    int n ;//no. till which the elements will print
    cout<<"Enter n\n";
    cin>>n;
	printToN(n);//function call to print no. in decreasing order
	return 0;
}