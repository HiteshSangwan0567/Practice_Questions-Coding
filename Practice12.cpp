#include <iostream>

using namespace std;

int main()
{
	int A[100], B[100], i, j, m;
	int N;
	cin>> N;
	for(i=0;i<=N;i++)
	{
	    cin >> A[i];
	    for(j=1;j<=m;j++)
	    {
	        cin>>B[j];
	        A[B[j]] = A[B[j]] + 1;
	    }
	    if(i>N)
	    {
	        break;
	    }

	}
	for(i=0;i<=N;i++)
	{
	    cout<<A[i];
	}


}
