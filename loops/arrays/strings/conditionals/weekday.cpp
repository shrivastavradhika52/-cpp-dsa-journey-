#include <iostream>
using namespace std ;
int main()
{
    int day ;
    cout<<"enter no of days" ;
    cin>>day ;

    switch(day)
{
        case 1: cout<<"mon" ;
        break;
        case 2: cout<<"tues" ;
        break;
        case 3: cout<<"wed" ;
        break;
        case 4: cout<<"thurs" ;
        break;
        case 5: cout<<"fri" ;
        break;
        case 6: cout<<"sat"  ;
        break;
        case 7: cout<<"sun"  ; 
        break;
        case 8: cout<<"invalid day" ;
        break;
}       
     
        return 0;
}