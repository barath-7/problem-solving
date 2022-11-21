#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int printTriangle(int n);
int main()
{
    int n;
    cin >> n;
    
    printTriangle(n);
    return 0;
}

int printTriangle(int n)
    {
        
       int space = 0;
        for(int j=(2*n)-1;j>0;j-=2){
        
            int temp =j , temp_space = space;;
            while(temp_space>0){
                cout << " ";
                temp_space--;
                
            }
            while(temp>0){
                cout <<"*";
                temp--;
                
            }

            
        cout <<endl;
        space++;
        }
        
       
    }

/*
sample output for input 5


    *
   ***
  *****
 *******
*********

*/
