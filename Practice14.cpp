#include<iostream>
using namespace std;
int main()
{
    int T, k, i, j, flag=0;
    long N;
    long A[100000], B[100000];
    cin>>T;
       for(k=1;k<=T;k++)
       {
           cin>>N;
           for(i=1;i<=N;i++)
           {
               cin>>A[i];
           }
           for(i=1;i<=N;i++)
           {
               for(j=0;j<=N;j++)
               {
                 if(A[i]%A[j]==0)
                 {
                 flag = flag+1;
                 }
                 //cout<<flag<<endl;
               }
               B[i]=flag;
               //flag=0;

           }
           for(i=1;i<=N;i++)
           {
               cout<<B[i];
               if(B[i]>B[i+1])
               {
                   B[i]=B[i+1];
               }
           }
           cout<<B[i];
       }

}
