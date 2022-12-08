#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int A,B,A1,B1,A2,B2;
	    cin>>A>>B>>A1>>B1>>A2>>B2;
	    if( ( (A==A1) || (A==B1) )&&( (B==A1) || (B==B1) ) ){
	        std::cout << 1 << std::endl;
	    }
	    else if( ( (A==A2 )||( A==B2) )&&( (B==A2) || (B==B2))  ){
	        cout<<2<<endl;
	    }
	    else {
	        cout<<0<<endl;
	    }
	}
	return 0;
}
