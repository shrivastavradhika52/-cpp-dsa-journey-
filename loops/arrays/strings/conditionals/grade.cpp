#include <iostream>
 using namespace std ;
int main()
{          
         int m1,m2,m3,T ;
         float avg ;
         
         cout<<"enter marks of 3 subjects" ; 
         cin>>m1>>m2>>m3 ;
         avg=T/3.0 ;
         
        if (avg>=60)
        {
       cout<<"grade is"<<'A'<<endl ;
       }
        
        else if (avg>=35 && avg<60 ) {
        cout<<"grade is"<<'B'<<endl ;
        }
        
        else 
        cout<<"grade is"<<'C'<<endl ;
        
    return 0;
}