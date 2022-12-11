#include <iostream>
#include<math.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int n,x;
	    cin>>n>>x;
	    long long int income = pow(2,x);
	    int i = n;
	    float spend = 0,remaining = income;
	    while(i>0){
	        spend += (0.5 * remaining);
	        remaining = income - spend;
	        i--;
	    }
	    cout<< remaining<<endl;
	}
	return 0;
}
