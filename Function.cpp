//FUNCTION WITH PARAMETER
#include<iostream>
using namespace std;
void getnum(int n1,int n2)
{
    cout<<"First value is : "<<n1;
    cout<<"\nSecond value is : "<<n2;
}
int main()
{
    int n1=5;
    int n2=10;
    getnum(n1,n2);
    return 0;
}
