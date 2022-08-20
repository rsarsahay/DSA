#include <iostream>
using namespace std;

//Algorithm
//Recursive Logarithmic function to return value of given no. and its power
/*
1.check base case
2.Recursive Logarithmic function call to store value of given no. and its power in n/2
3.square of recursive logarithmic function to get value
4.check n is odd
5.multiply no. with square of recursive logarithmic function to get value
6.return logarithmic value
*/

//Recursive Logarithmic function to return value of given no. and its power
int lgpower(int x,int n)
{
	if(n == 0)//base case
		return 1;

	int xpn= lgpower(x,n/2); //Recursive Logarithmic function call to store value of given no. and its power in n/2
    int xp=xpn*xpn;//multiply to get value

    if(n%2==1)//check n is odd
        xp= x*xp;//multiply no. with xp

    return xp;//return logarithmic value
}

int main()
{
  int x,n;
  cout<<"Enter x\n";
  cout<<"Enter n\n";
  cin>>x;//x is a no.
  cin>>n;//n is a power

  cout<<lgpower(x,n);//call of a recursive lgpower function to print value
   return 0;
}

