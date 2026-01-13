#include <iostream>
using namespace std ;
int add (int a, int b)

{ 
    
    
    return a+b ;
}   
float add (float x ,float y ) 
{
    
    
    return x+y;
} 
int add (int p,int q,int r) 
{ 
    
    
    return p+q+r ;
} 
  int main()
{
  int a=8,b=9 ,c ;
  c = add (a,b) ;
  cout<<"sum is" <<c<<endl ;
  
  float x=4.5 ,y=6.3, z ;
  z=add(x,y) ;
  cout<<"sum is" <<z<<endl  ;
  
  int p=89,q=34,r=6,s  ;
  s=p+q+r ;
  cout<<"sum is" <<s<<endl ;
  
  return 0;
}
  
  
  
    

    
