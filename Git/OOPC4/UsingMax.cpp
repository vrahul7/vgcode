#include <iostream>
using namespace std;
int main() {
	//code
	unsigned int test;
	cin>>test;
	while(test--)
	{
	    int a,b;
	    cin>>a>>b;
	    if(b==0)
	    {cout<<"inf"<<endl;
	    continue;}
	    cout<<max(a+b,(max(a*b,max(a-b,a/b))))<<endl;
	}
	return 0;
}
