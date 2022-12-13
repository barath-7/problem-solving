#include <iostream>
#include<math.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,k,step;
	    cin>>x>>y>>k;
    //optimal approach
    int diff = abs(x-y);
    if(diff%k == 0){
        cout<<diff<<endl;
    }
    else{
        cout<<diff+1<<endl;
        /*
        if diff is not completely divisible by k it will leave a reminder which will always be less than k so to travel remaining distance user has to a one jump (because every jump user goes k steps forward)
        */
    }


        //below is brute force approach
	    // if(x<y){
	    //     while(x<=y){
	    //     x+=k;
	    //     if(x!=y){
	            
	    //     step++;
	    //     }
	    // }
	    // } else if(y<x) {
	    //    while(y<=x){
	    //     y+=k;
	    //     //cout<<y<<" "<<endl;
	    //     if(x!=y){
	            
	    //     step++;
	    //     }
	    // } 
	    // }
	    // cout<<step<<endl;
	}
	return 0;
}
