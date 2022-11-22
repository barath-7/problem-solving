#include <bits/stdc++.h>

using namespace std;

int main()
{
     
    int N = 22074;
    
    int count = 0, temp = N;
        while(temp>0){
        int rem = temp % 10;
        if(N%rem == 0){
            count++;
        }
        temp = temp/10;
        }
   cout << "count";
    return 0;
}

// int count =0, temp = N;
    // while(temp>0){
    //     int rem = temp % 10;
    //     if(n%rem == 0){
    //         count++;
    //     }
    //     temp = temp/10;
    // }
    // cout << count;