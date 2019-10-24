#include<iostream>

using namespace std;

int main()
{
    int num;
    cin>> num;
    cout<<"The input is", <<num<<endl;
    flag = num;
    for(i=1;i<=n;i++)
    {
        if(flag>0)
        {
            flag = flag-i;
            if(flag<=0)
            {
                print("Patlu");
            }
            else
                break;
            flag = flag - 2*i;
            if(flag<=0)
            {
                print("Motu");
            }
            else
                break;

        }
    }
}
