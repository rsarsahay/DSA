#include <iostream>
using namespace std;

//Algorithm
//Recursive Function to print zigzag no.
/*
1.check base case
2.Recursive call of an element to return factorial of a given element
*/
/*
 input:
 2

 output:
 Pre 2
 Pre 1
 In 1
 Post 1
 In 2
 Pre 1
 In 1
 Post 1
 Post 2 
*/
void pzz(int n)
{
  if(n==0)
    return;

  cout<<"Pre"<<" "<<n<<"\n";//print pre no.
  pzz(n-1);
  cout<<"In"<<" "<<n<<"\n";
  pzz(n-1);
  cout<<"Post"<<" "<<n<<"\n";
}

int main()
{
    int n;
    cout<<"Enter n\n";
    cin>>n;
    pzz(n);
    return 0;
}
