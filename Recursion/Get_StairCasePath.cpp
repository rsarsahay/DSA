#include <iostream>
using namespace std;

//Recursive Solution to find StairCase Path
//T.C:
//S.C: O(1)
void getStairPaths(int n, string psf)
{
    if(n==0)
    {
        cout<< psf<< endl;
        return;
    }
     //call the function recursively with values n-jump, and sum up the values that returned
    for(int jumps=1; jumps<=3; jumps++)
    {
        if((n-jumps)>=0)
            getStairPaths(n-jumps,psf + to_string(jumps)); 
            
    }
}

int main()
     {
         int n;
         cout<<"Enter no.=";
         cin>>n;
         getStairPaths(n,"");
     }