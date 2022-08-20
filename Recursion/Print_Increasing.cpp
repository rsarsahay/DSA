#include <iostream>
using namespace std;

void printToN(int n)
{
	if(n == 0)
		return;

	printToN(n - 1);
    cout<<n<<" ";
}

int main()
{

	int n ;
    cout<<"Enter N\n";
    cin>>n;
	printToN(n);
	return 0;
}
