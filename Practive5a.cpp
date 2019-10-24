#include<bits/stdc++.h>
using namespace std;

string solve(vector<int> A)
{
   int i,n,z;
   int rem;
   n=A.size();
   vector<int> r;
   for(i=0;i<n/2;i++)
   {
       z=100000;
       rem=0;
       while(rem==0)
       {
           if(A[i]/z>0)
           {
               rem=A[i]/z;
           }
           else
           z=z/10;
       }
       r.push_back(rem);
   }
   for(i=n/2;i<n;i++)
   {
       rem=A[i]%10;
       r.push_back(rem);
    }
    int even=0,odd=0;
    for(i=0;i<r.size();i++)
    {
        if(i%2==0)
        even+=r[i];
        else
        odd+=r[i];
    }
    if((even-odd)%11==0)
    cout<<"OUI";
    else
    cout<<"NON";
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i_A=0; i_A<N; i_A++)
    {
    	cin >> A[i_A];
    }

    string out_;
    out_ = solve(A);
    cout << out_;
}
