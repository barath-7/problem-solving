#include <bits/stdc++.h>

using namespace std;
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
        int max = -1,secondMax = -1; //10 5 10 
        for(int i =0;i<n;i++){
            if(arr[i]>=max){
                if(arr[i]!=max){
                secondMax = max;
                }
                max = arr[i];
            }
            else if(arr[i]>secondMax){
                secondMax = arr[i];
            }
        }
        return secondMax;
	}
};
int main()
{
     int n;
     cin>>n;
   int arr[n];
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }

    Solution answer;
    cout<<answer.print2largest(arr,n);
    
   
    return 0;
}

/*
in GFG array elemnts will always be reater than 1 so te above approach will work
 revisite Striver solution to handle if negative numbers are present in the array


*/