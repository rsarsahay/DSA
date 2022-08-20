#include <iostream>
using namespace std;

void toh(int n, char A, char B, char C)
{
    if (n == 1)
    {
        cout<<"Move 1 from " <<  A << " to " << C << endl;
        return;
    }
    toh(n-1, A, C, B);
    cout<<"Move " << n << " from " <<  A << " to " << C << endl;
    toh(n-1, B, A, C);
}

int main()
{
    int n;char A,B,C;
    cout<<"Enter n\n";
    cin>>n;
    cout<<"Enter disk1\n";
    cin>>A;
    cout<<"Enter disk2\n";
    cin>>B;
    cout<<"Enter disk3\n";
    cin>>C;
    toh(n,A,B,C);
    return 0;
}
