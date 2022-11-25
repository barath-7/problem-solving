#include <bits/stdc++.h>

using namespace std;
void printNos(int N);
int main()
{
     int N;
    cin >>N;
    printNos(N);      
   
    return 0;
}

void printNos(int N)
    {
        
        if(N>0){
            printNos(N-1);
            cout << N<<" ";
        }
        else {
            return;
        }
    }
           