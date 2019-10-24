#include<bits/stdc++.h>
using namespace std;

int main() {
	char id[1000];
	cin>>id;
	int i;
	if(id[2]!='A'&&id[2]!='B'&&id[2]!='E'&&id[2]!='I'&&id[2]!='O'&&id[2]!='U'&&id[2]!='Y'&&(id[0]+id[1])%2==0&&(id[3]+id[4])%2==0&&(id[7]+id[8])%2==0)
	  {
	     cout<<"valid";
	  }
	else
	  {
         cout<<"invalid";
	  }
}

