#include <iostream>

using namespace std;

int main()
{
	int a[5], i;
	for(i=0;i<=5;i++)
	{
	    cin >> a[i];
	}
	for(i=0;i<=10;i++)
	{
	    if(a[i]==42)
        break;
	    cout<<a[i];

	}
			// Writing output to STDOUT
}
