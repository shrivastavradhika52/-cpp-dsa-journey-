#include <iostream>
using namespace std ;
int main()
{
   int a=56 ,b=0,c ;
   try 
   { 
       if (b==0)
          throw 1; 
       c=a/b ;
       cout<<c<<endl;
   }
   catch (int e)
   { 
       cout<<"division by zero"<<e<<endl ;
   }
       
    return 0;
}