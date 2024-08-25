
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
    int last = n-1;

    while(start<=last){
        swap(arr[start],arr[last]);
        start++;
        last--;
    }
}

int main()
{
   int first[6] = {1,34,-4,34,13,56,};
   int second[5] = {1,4,6,-2,5};

   reversing(first,6);
   reversing(second,5);

   print(first,6);
   print(second,5);

    return 0;
}
