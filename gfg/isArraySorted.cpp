#include <bits/stdc++.h>

using namespace std;
class Solution {//brute force
  public:
    bool arraySortedOrNot(int arr[], int n) {
        // code here
        
        for(int i =0;i<n;i++){ // time complexity = O(n^2)
            for(int j=i+1;j<n;j++){
                if(arr[j]<arr[i]) {
                    return false;
                }
            }
        }
        return true;
    }
};
class OptimalSolution {// optimal solution
  public:
    bool arraySortedOrNot(int arr[], int n) {
        // code here
        //for a consecutive pair of elements in a sorted array(ascending) arr[i] will always be less than arr[i+1]
        //TODO: Note: If i<n then escape character will be considered so the result will change
        for(int i =0;i<n-1;i++){ // time complexity = O(n)
            cout<<"arr i ->" <<arr[i]<< endl;
            cout<<"arr i+1 ->" <<arr[i+1]<< endl;
            if(arr[i+1]<arr[i]){
                return false;
            }
        }
        return true;
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

    // Solution answer;
    OptimalSolution answer;
    cout<<answer.arraySortedOrNot(arr,n);
    
   
    return 0;
}

/*

//for a consecutive pair of elements in a sorted array(ascending) arr[i] will always be less than arr[i+1]

*/