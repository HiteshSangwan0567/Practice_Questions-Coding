#include<iostream>
using namespace std;
int main()
{
    int T, k, i, j, flag,sum=0;
    long N;
    long A[100000], B[100000];
    cin>>T;
       for(k=1;k<=T;k++)
       {
           cin>>N;
           sum=sum+N;
           if(sum<=5000)
           {
           for(i=1;i<=N;i++)
           {
               cin>>A[i];
           }
           for(i=1;i<=N;i++)
           {
               flag=0;
               for(j=1;j<i;j++)
               {
                 if(A[j]%A[i]==0)
                 {
                 flag = flag+1;
                 }
                 //cout<<flag<<endl;
               }
               B[i]=flag;
           }
           for(i=1;i<=N;i++)
           {
               //cout<<B[i];
               if(B[1]<B[i+1])
               {
                   B[1]=B[i+1];
               }
           }
           cout<<B[1];
           }

       }

}

