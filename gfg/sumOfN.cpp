#include <bits/stdc++.h>

using namespace std;
long long sumOfSeries(long long N);
int main()
{
     
    
    int N;
    cin>>N;
    long long ans = sumOfSeries(N);
    

    cout<<ans;
                                    
        
        
   
    return 0;
}

long long sumOfSeries(long long N) {
        
        if(N==0) return 0;
        return (N*N*N)+sumOfSeries(N-1);
    }
