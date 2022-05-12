#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int hard=0,i,p;
    for(i=0;i<n;i++)
    {
        cin>>p;
        if(p==1){hard++;}
    }
    if(hard>0){cout<<"HARD"<<endl;}
    else {cout<<"EASY"<<endl;}




    return 0;
}

