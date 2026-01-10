#include <iostream>
using namespace std ;
int main()
{
    int A[8]={30,7,8,9,0,34,67,80} ;
    int n=7,min=30 ;
    for(int i=0; i<8; i++)
    {
        if (A[i]<min)
        { 
            min=A[i];
        } 
    }
         cout<<"minimum element is"<<min ;
    return 0;
}