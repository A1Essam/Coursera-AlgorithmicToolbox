#include <iostream>

using namespace std;

//RULE
//GCD(a , b) = GCD(b , a%b)

int GCD(int a , int b){
    if(b==0)return a;
    GCD(b,a%b);
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<GCD(a,b);

    return 0;
}
