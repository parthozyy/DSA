#include <iostream>
#include <vector> // or we can use the other library containing all the data structure implementations 
using namespace std;

int main(){
    vector <int> vec = {1,10,9,2,4,6};
    cout << vec.size() << endl ; // get the size
    vec.push_back(3); // add at last
    cout << vec.at(vec.size()-1)<< endl;
    vec.pop_back(); // remove from last
    cout << vec.front() << endl; // front function
    cout << vec.back() << endl; // back function
}