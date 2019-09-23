#include <iostream>
#include <algorithm>

using namespace std;


    int solveBySort(int arr[],int length){
        sort(arr ,arr + length ,greater<int>());
        return arr[0]*arr[1];
    }


    int findMax(int arr[],int length,int except=-1){
            int maxNumIndex = except==-1 ? 0 : 1;
            for(int i = 1 ; i <length;i++)
                if(except!=i)
                    if(arr[maxNumIndex]<arr[i])
                        maxNumIndex=i;
            return maxNumIndex;
        }
    int solveByFindMax(int arr[] ,int length){
        int firstMax = findMax(arr,length);
        int secondMax= findMax(arr,length,firstMax);
        return arr[firstMax]*arr[secondMax];

    }



    int main()
    {

            int inputsize ;
            cin>>inputsize;
            int numbers[inputsize];
            for(int i = 0 ; i <inputsize;i++)cin>>numbers[i];

            // O(n log(n))
            cout<< solveBySort(numbers , inputsize);
            // O(n)
            cout<<endl<<solveByFindMax(numbers,inputsize);
        return 0;
    }
