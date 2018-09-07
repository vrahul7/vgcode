#include <iostream>
using namespace std;

int main() {
	unsigned int test;
	unsigned int n;
	if ( test > 100)
		return 0;
	if ( n > 100 )
		return 0;
	cin>>test;
	while(test--){
	    cin>>n;
	    int a[n][n];
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            cin>>a[i][j];
	            if ( a[i][j] > 1000)
	            	return 0;
	        }
	    }
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            cout<<a[j][i]<<"\t";
	        }
	    }cout<<endl;
	}
	return 0;
}

