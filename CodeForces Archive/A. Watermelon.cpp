#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    if(N>2)
    {
        if(N%2==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else
        cout<<"NO"<<endl;
    return 0;
}
