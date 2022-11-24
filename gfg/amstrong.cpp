#include <bits/stdc++.h>

using namespace std;

int main()
{
     
    // int N = 123;
    int N ;
    cin>>N;
    
    int amstrong = 0, temp = N; 
                                    
        while(temp>0){
        int rem = temp % 10;
        amstrong+=rem*rem*rem;
        temp=temp/10;
        }
        if(amstrong == N){
                cout<< "Yes";
            }else {
                cout<< "No";
            }
   
    return 0;
}

