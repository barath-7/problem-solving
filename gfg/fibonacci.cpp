#include <bits/stdc++.h>

using namespace std;
int printFibb(int n);
int main()
{
     int n;
     cin >>n;
     int x = printFibb(n);
     cout<<x;
    
                                    
        
        
   
    return 0;
}
int printFibb(int n) {
int first = 0,second =1,next;
if(n==0 || n==1){
    // cout << 1;
    return 1;
}else{
    while(n>0){
    next = first+second;
    first = second;
    second = next;
    n--;
    cout<< next;
    }
// return next;
}
}
