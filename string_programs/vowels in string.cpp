#include <iostream>
using namespace std ;
int main()
{
    string str="i love programming";
    int vowels=0 , consonants=0 , spaces=0 ;
    for(int i=0;str[i]!=0;i++)
    { 
        if (str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' ||
        str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' )
        vowels++ ;
    
    
        else if (str[i]==' ')
        spaces++ ;
        else 
            consonants++ ;
    }
        cout<<"vowels"<<vowels<<endl ;
        cout<<"consonants"<<consonants<<endl ;
        cout<<"words"<<spaces+1<<endl ;
    return 0;
}