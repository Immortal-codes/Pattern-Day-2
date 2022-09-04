/*
    *    
   * *   
  * * *  
 * * * * 
* * * * *
*/

#include<iostream>
using namespace std;

int main()
{
for (int row = 1; row <=5; row++ )
{
   int k=1;
    
    for (int col = 1; col<=9; col++)
    {
      
       if (col>=6-row && col<=4+row&&k)
       {
        cout<<"*";
        k=0;
        
       }
       else{
        cout<<" ";
        k=1;
       }
        
        
    }
    cout<<endl;
}
}
