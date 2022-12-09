#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int printTriangle(int n);
int printTriangleAlternate (int n);

int main()
{
    int n;
    cin >> n;
    
    // printTriangle(n);
 printTriangleAlternate (n);

    return 0;
}

int printTriangle(int n)
    {
        
        for(int i=0;i<n;i++){
            bool printFull = false;
            if(i==0 || i==(n-1)){
                printFull = true;
            }
            for(int j=0;j<n;j++){
            if(printFull){
            cout<<"*";
            } else {
                if(j==0 || j==n-1){
                    cout<<"*";
                }
                else {
                    cout<<" ";
                }
            }
            }
            cout<<endl;
            
        }
    }

int printTriangleAlternate (int n)
{
        
        for(int i=0;i<n;i++){

            for(int j=0;j<n;j++){
            if(i==0 || j==0 || i==n-1 || j==n-1){
            cout<<"*";
            } else 
                    cout<<" ";
            
            }
            cout<<endl;
            }
            
        }
    

/*
sample output for input 5

****
*  *
*  *
****
n=4
i=0 4 *
i=3 4 *

*/
