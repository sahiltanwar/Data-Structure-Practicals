include<iostream>
#include<cstdlib>
 
using namespace std;
 
int gcd(int n,int m)
{
    if((n>=m)&&((n%m)==0))
        return(m);
    else
        gcd(m,(n%m));
}
 
int main()
{
    int n,m,result;
    cout<<"Input the first integer number:";
    cin>>n;
    cout<<"Input the second integer number:";
    cin>>m;
    result=gcd(n,m);
    cout<<"nGCD of "<<n<<" and "<<m<<" is "<<result;
 
    return 0;
}
