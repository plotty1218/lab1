#include <iostream>
using namespace std;

int main()
{
	int n;
	
	cin >> n;
	cout << n;
	
	while(1){
		if (n==1){
			break;
		}
		if(n%2==1){
			n=3*n+1;
		}
		else{
			n=n/2;
		}
		cout << " " << n;
	}
	cout << endl;
	return 0;
}
