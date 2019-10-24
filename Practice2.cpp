#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
   long long N, i;
   cin>>N;
   for(i=0;i<N;i++){
       string s1;
       string s2;
       cin>>s1;
       cin>>s2;
       sort(s1.begin(),s1.end());
       sort(s2.begin(),s2.end());
       if(s1==s2)
        {
          cout<<"YES"<<endl;
        }
        else
        {
           cout<<"NO"<<endl;
        }
}
}
