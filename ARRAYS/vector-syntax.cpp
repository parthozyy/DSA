#include <iostream>
#include <vector> // or we can use the other library containing all the data structure implementations 

using namespace std;
int main(){
    vector <char> name = {'p','a','r','t','h'};
    vector <int> vec(3,1); //size 3 contining 1 as all the elements

    for(int val : vec ){ // for each loop
        cout << val << " " ;
    }
    
    cout << endl;

    for(char character : name){ // for each loop
        cout << character << " ";
    }
}