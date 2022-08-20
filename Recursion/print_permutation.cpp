#include <iostream>
using namespace std;


// Function to print permutations of string
// This function takes three parameters:
// 1. String
// 2. Starting index of the string
// 3. Ending index of the string.
void print_permutation(string a, int l, int r)
{
    // Base case
    if (l == r)
        cout<<a<<endl;
    else
    {
        // Permutations made
        for (int i = l; i <= r; i++)
        {
           // Swapping done
            swap(a[l], a[i]);

            // Recursion called
            print_permutation(a, l+1, r);

            //backtrack
            swap(a[l], a[i]);
        }
    }
}
int main()
{
    cout<<"Enter String : ";
    string str;
    cin>>str;
    int n = str.size();
    print_permutation(str,0,n-1);
    return 0;
}
