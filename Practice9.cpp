#include <iostream>

using namespace std;

int main() {
	int num, i;
	cin >> num;
	//cout << "The size of the ladder is" << num << endl;
    for(i=0;i<=num-1;i++)
    {
        //cout<<"     "<<endl;
        cout<<"*   *"<<endl;
        //cout<<"     "<<endl;
        cout<<"*   *"<<endl;
        cout<<"*****"<<endl;
    }
    cout<<"*   *"<<endl;
    cout<<"*   *"<<endl;
}
