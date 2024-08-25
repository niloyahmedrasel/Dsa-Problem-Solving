
#include <iostream>
using namespace std;

void print(int arr[],int n){
    for( int i=0; i<n; i++){
        cout<<arr[i] << " ";
    }
    cout<<endl;
}

int reversing(int arr[],int n){
    int start = 0;
    int second = 1;

    for(int i=0; i<n; i++){
        swap(arr[start],arr[second]);
        start = start + 2;
        second = start + 1;
    }
}

int main()
{
   int first[10] = {1,34,-4,34,13,56,10,5,12,34};
   reversing(first,10);
   print(first,10);

    return 0;
}
