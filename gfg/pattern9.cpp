#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int printTriangle(int n);
int printTriangle2(int n);
int main()
{
    int n;
    cin >> n;
    
    printTriangle(n);
    printTriangle2(n);
    return 0;
}

int printTriangle(int n)
    {
        /*
            n =5
            row 1 = 4space + * + 4space -1star
            row 2 = 3space + *** + 3space -3st
            row 3 = 2space + ***** + 2space - 5st
            row 4 = 1space + ******* + 1space -7st
            row 5 = 0space + ********* + 0space - 9st
            evey row space-- and * +2
            last row  = 2n-1 stars = 9
        */
       int space = n;
        for(int j=1;j<2*n;j+=2){
        space--;
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
        }
        
       
    }
int printTriangle2(int n)
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
