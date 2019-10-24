#include <iostream>

using namespace std;

int main()
{
	string A;
	int a[2], i;
	a[0]=0;
    a[1]=0;
	cin >> A;
	//cout << A;
    for(i=0;i<=A.size();i++)
    {
        if(A[i]=='L')
          a[0]=a[0]-1;
        else if(A[i]=='R')
          a[0]=a[0]+1;
        else if(A[i]=='U')
          a[1]=a[1]+1;
        else if(A[i]=='D')
          a[1]=a[1]-1;
    }
    cout<<a[0]<<' '<<a[1];
}

