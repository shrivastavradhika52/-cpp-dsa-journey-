#include <iostream>
using namespace std ;
int main()
{
    int A[7] = {6,9,5,4,800,20,12} ;
    int n=7,max=6 ;
    for(int i=0; i<7; i++) 
    {
           if (A[i]>max) 
           {
               max=A[i] ;
           }
    }
            cout<<"maximum element is "<<max ;

    return 0;
}