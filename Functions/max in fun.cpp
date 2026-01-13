#include <iostream>
using namespace std ;
int maxim(int x,int y,int z)
{
    if(x>y && x>z)  
    return x; 
    else if (y>x && y>z)
    return y;
    else 
        return z;
}
int main()
{
   int x=10 , y=30 , z=60 , r ;
   r= maxim (x,y,z);
   cout<<r<<endl ;
   

    return 0;
}