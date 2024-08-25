#include <iostream>
#include <climits>

using namespace std;

bool finding(int arr[],int n, int key){
    for(int i = 0; i <n ; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main()
{
   int arr[10] = {1,34,-4,34,13,56,32,24,34,54,};
   int key;
   cin>>key;
   bool found = finding(arr,10,key);
   if(found){
    cout<<"found the key";
   }
   else{
    cout<<"key is absent";
   }
    return 0;
}
