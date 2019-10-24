#include<iostream>

using namespace std;

int main()
{
    int num;
    int flag;
    int i;
    cin>> num;
    cout<<"The input is"<<num<<endl;
    flag = num;
    for(i=1;i<=num;i++)
    {
        if(flag>0)
        {
            flag = flag-i;
            if(flag<=0)
            {
                cout<<"Patlu";
                break;
            }
            //else
                //break;
            flag = flag - 2*i;
            if(flag<=0)
            {
                cout<<"Motu";
            }
            //else
                //break;

        }
    }
}
