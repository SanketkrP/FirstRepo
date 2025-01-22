#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> val,int h)
{
    int n=val.size(),c=0;
    for(int i=0;i<n;i++)
    {
        if(val[i]<=h)
        {
            c=c+1;
        }
        else
        {
          c=c+3;  
        }
    }
    
    cout<<c<<"    "<<endl;
}

int main()
{
    int n,h;
    cin>>n>>h;
    vector<int> val(n);
    int i=0;
    while(n--)
    {
        cin>>val[i];
        i++;
    }
    solve(val,h);
    return 0;
}
