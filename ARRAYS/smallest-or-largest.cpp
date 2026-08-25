#include <iostream>
#include <climits>
using namespace std;

int main(){
    int nums[] = {5,6,2,-12,1242,21};
    int size = sizeof(nums) / sizeof(nums[0]);
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for(int i =0;i< size ;i++){
        smallest = min(nums[i],smallest);
        largest = max(nums[i],largest);
    }
    cout << smallest << endl;
    cout << largest << endl;
}