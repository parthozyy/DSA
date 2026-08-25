#include <iostream>
using namespace std;

int linearsearch(int arr[],int size,int target){
    for(int i = 0;i < size;i++){
        if(arr[i] == target){
            return i;
        }
    }
    cout << "Not found " << endl;
    return -1;
}
int main(){
    int arr[] = {1,5,2,3,4,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int index = linearsearch(arr,size,5);
    cout << "found at index -> " << index << endl;
    return 0;
}