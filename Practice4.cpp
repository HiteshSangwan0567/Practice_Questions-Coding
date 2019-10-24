#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int num[10], sum=0;
	for(int i=1;i<=10;i++)
    {
        cin>>num[i];
        sum = sum + num[i]*i;
    }
    //cout<<sum;
    int foo = sizeof(num)/sizeof(int);
    if(foo!=10)
    {
        cout<<"Illegal ISBN";
    }
    else
    {
        if(sum%11==0)
          {
            cout<<"Legal ISBN";
          }
        else
          {
            cout<<"Illegal ISBN";
          }
    }

}

