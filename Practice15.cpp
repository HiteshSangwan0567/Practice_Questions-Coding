#include <iostream>
#include<cstdlib>
using namespace std;

int main()
{
	long int T, N[10], i, A =0, B =7;
	cin >> T;
	for(i=1;i<=T;i++)
    {
        cin>> N[i];
    }
    for(i=1;i<=T;i++)
    {
	if(N[i]>=0&&N[i]<=7)
        {
            if(abs(N[i]- A)<=abs(B -N[i]))
            {
                cout<<"A"<<endl;
                A =N[i];
            }
            else
            {
                cout<<"B"<<endl;
                B=N[i];
            }
        }
    }
}
