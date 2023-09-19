#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,X,Y,Z;
	cin>>n;
	int res[n];
	
	while (n--)
	{
	    cin>>X>>Y>>Z;
	    cout<<(X*5+Y*10)/Z<<endl;
	}
	
	return 0;
}
