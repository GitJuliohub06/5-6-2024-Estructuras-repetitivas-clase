#include <iostream>
using namespace std;
int main(){
int n = 0;
int i = 0;

cout<<"Ingrese un numero positivo n = ";
cin>>n; 

if ( n > 0)
{
    while (i < n )
    {
    cout<< i<< "\n";
    i = i+2;
    }

}
else
{
    cout<<"Error, n debe de ser positivo";   

}
    return 0;
}