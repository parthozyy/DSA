#include <iostream>
using namespace std;
// maximum subarray sum = brute force here is more optimized than just doing a single operation like actually using 3 loops to calculate the sum and comparing it again and again ,the absolute brute force is sum = 0 after int end = start loop and then another loop to add the vlaues and then using max function of max_sum and sum
int main(){
    int n=5,max_sum = INT_MIN;
    int arr[] = {1,2,3,4,5};
    for(int start = 0 ; start < n ;start++ ){
        int sum = 0;
        for(int end = start;end <n ; end++ ){
            sum += arr[end];
            max_sum = max(max_sum,sum);
        }
    }
    cout << max_sum;
    return 0;
}