#include <iostream>
#include <vector>
using namespace std;

//Recursive function to get maze path
//sr-source row
//sc-source column
//dr-destination row
//dc-destination column
vector<string>mazepath_HV_01(int sr,int sc, int dr, int dc)
{
    if (sr == dr && sc == dc)
    {
        vector<string> base;
        base.push_back("");
        return base;
    }
    vector<string> myAns;
    if (sc + 1 <= dc)//check source column is less than and equal to destination column
    {
        vector<string> Hori = mazepath_HV_01(sr, sc + 1, dr, dc);//recursive call for column
        for (string s : Hori)
            myAns.push_back("h" + s);//push h to the string while moving in vertical dirction
    }

    if (sr + 1 <= dr)//check source row is less than and equal to destination row
    {
        vector<string> Verti = mazepath_HV_01(sr + 1, sc, dr, dc);//recursive call for row
        for (string s : Verti)
            myAns.push_back("v" + s);//push v to the string while moving in vertical dirction
    }
    return myAns;
}

void display(vector<string>&arr)
{
    cout<<"[";
    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr[i];
        if(i<arr.size()-1)
            cout<<",";
    }
    cout<<"]"<<endl;
}

int main()
{
         int n,m;
         cout<<"Enter no. n and m=";
         cin>>n;
         cin>>m;

         vector<string>wd;
          wd=mazepath_HV_01(0, 0, n-1, m-1);
        display(wd);
         return 0;
}

