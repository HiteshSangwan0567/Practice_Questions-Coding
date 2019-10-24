#include<iostream>
//#include<stdio.h>
using namespace std;
int main()
{
    int T, N,i, num[100],j,p[100], flag = 1, num1[100],k,num2[100], temp;
    cin>>T;
    if(T<=100&&T>=1)
    {
    for(i=1;i<=T;i++)
    {
       cin>>N;
       if(N>=7&&N<=100)
       {
            for(i=1;i<=N;i++)
                {
                    cin >> num[i];
                }
            for(i=2;i<=N;i++)
                {
                    if(num[i]>=350&&num[i]<=750)
                    {
                        num1[i]=num[i];
                        if(i>5)
                        {
                        for(k=i;k>=i-5;k--)
                        {
                            num2[k]=num1[k];
                            cout<<num2[k]<<endl;
                        }
                        temp=num2[i];
                        for(k=i;k>=i-5;k--)
                        {
                            if(temp>num2[k])
                            {
                                temp=num2[k];
                                if(temp==num2[i])
                                 {
                                flag = flag+1;

                                 }
                                 cout<<"Flag"<<flag<<endl;
                            }
                            cout<<"Temp"<<temp<<endl;

                        }
                    }
                    //else{
                      //  return false;
                    //}
                {

            }
       }
       //else
       //{
         //  return false;
       //}
       }

     }
     else
    {
         return false;
    }
    cout<<flag;
    }

}
 else
    {
         return false;
    }


}
