#include <iostream>

using namespace std;

int main() {
	int num, X, A[100],i;
	cin >> num;
	cin>> X;
	for(i=1;i<=num;i++)
    {
        cin>>A[i];
    }
    for(i=1;i<=num;i++)
    {
        if(A[i]>=X)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}
