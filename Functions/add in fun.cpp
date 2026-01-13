#include <iostream>
using namespace std ;

int add(int a, int b)
{

 int c;
 c=a+b;
 return c;
    
} 

int main()
{
 int  a=34 , b=40, c;
  c=add(a,b);
  cout<<"sum is"<<c ;


    return 0;
}