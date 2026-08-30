#include <iostream>
#include <climits>
using namespace std;
#define N 100
int main(){
    int arr[N] = {0,-2,1,4,3,-5,21,43,-200};
    int currentsum = 0, maxsum = INT_MIN;
    for(int i = 0;i<N;i++){
        currentsum += arr[i];
        maxsum = max(currentsum,maxsum);
        if(currentsum < 0 ){
            currentsum = 0;
        }
    }
    cout << "Maximum sum is = " << maxsum << endl;
    return 0;
}
// for edge case where all the elements are -ve then currentsum is reset to 0 so the we get the greatest actual number instead of it only being just 0