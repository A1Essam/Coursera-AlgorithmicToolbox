#include <iostream>

using namespace std;




int LastNum(int num){
    int first=0,second=1;
    if(num==0)return 0;
    for(int i = 2 ; i <=num ; i++){
        int temp = first;
        first = second;
        second +=temp;
        second %=10;
    }
    return second;
}

int main()
{
    int num;
    cin>>num;
    cout<<LastNum(num);

    return 0;
}
