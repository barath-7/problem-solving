#include <bits/stdc++.h>

using namespace std;

int main()
{
     
    // int N = 123;
    int N = 0;
    
    int reverse_num = 0, temp = N; 
                                    
        while(temp>0){
        int rem = temp % 10;
        reverse_num+=rem;
        if(temp/10 > 0){

        reverse_num=reverse_num*10;
        }
        temp = temp/10;
        }
        if(reverse_num == N){
                cout<< "Yes";
            }else {
                cout<< "No";
            }
   
    return 0;
}

