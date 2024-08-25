#include <iostream>
#include <climits>

using namespace std;

int getMax(int arr[],int n){
    int maxNum = INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i] > maxNum){
            maxNum = arr[i];
        }
    }
    return maxNum;

}

int getMin(int arr[],int n){
    int minNum = INT_MAX;

    for(int i=0;i<n;i++){
        if(arr[i] < minNum){
            minNum = arr[i];
        }
    }
    return minNum;

}

int main()
{
    int n;
    cin>>n;
    int num[100];

    for( int i = 0; i<n; i++){
        cin>>num[i];
    }
    cout<<"maximum number is " <<getMax(num,n) <<endl;
    cout<<"minimum number is " <<getMin(num,n) <<endl;

    return 0;
}
