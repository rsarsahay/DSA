#include <iostream>
#include <vector>
using namespace std;

//Recursive Function n to find subsequences of a given string
//Algorithm
/*Recursive Function n to find subsequences of a given string
   -check if the input is empty then print output
   -0th index of input string
   -removing 0th index of input string
   -recursive call of function solve

*/

void solve(string ip, string op)
{
  if(ip.length()==0)//check if the input is empty then print output
  {
      cout<<op<<" ";
      return;
  }

  string op1=op;
  string op2=op;

  op2.push_back(ip[0]);//0th index of input string


  ip.erase(ip.begin() + 0);//removing 0th index of input string

  solve(ip,op1);//recursive call of function solve
  solve(ip,op2);
  return;
}

int main7tt()
{
    cout<<"Enter String whose subsequence is to be found out : ";
    string ip;
    cin>>ip;
    string op="";
    solve(ip,op);
    return 0;
}

