#include <iostream>

using namespace std;


int FibonacciByRecursion(int num){

    if(num==0)return 0;
    if(num==1)return 1;
    return FibonacciByRecursion(num-1)+FibonacciByRecursion(num-2);
}

int FibonacciByFor(int num){
    int first=0,second=1;
    if(num==0)return 0;
    for(int i = 2 ; i <=num ; i++){
        int temp = first;
        first = second;
        second +=temp;
    }
    return second;
}

int main()
{
    int num;
    cin>>num;
    cout<<FibonacciByFor(num);

    return 0;
}
