#include <bits/stdc++.h>

using namespace std;

int main()
{
     
    // int N = 123;
    int N ;
    cin>>N;
    
    int sum = 0, temp = N, sumTemp,rev = 0; 
                                    
        while(temp>0){
        int rem = temp % 10;
        sum+=rem;
        temp=temp/10;
        }
        sumTemp = sum;
        cout<<"sum"<<sum<<endl;
        while(sumTemp>0){
        int rem = sumTemp % 10;

        if(sumTemp>0){

        rev=(rev*10)+rem;
        }
        sumTemp=sumTemp/10;
        }

        cout<<"rev"<<rev;

        
    return 0;
}

