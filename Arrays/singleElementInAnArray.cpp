#include<iostream>
#include <vector>
using namespace std;

/* Given a non-empty array of integers nums, every element appears twice except for one and we need to find that single element 
    **the solution should be linear**

    input [1,1,3,4,4]
    output will be 3

    the logic here is if we just add + - alternatively numbers will cancel out and it will give the single element
    hence, we can just use XOR ie if number exixt twice the XOR of that will be zero so if we just xor the whole vector it will only give the single element
    n^n = 0 and n^0 = n

*/

int main() {
    char name;    
    vector<int> vect;
    vect = {4,1,2,1,2};
    int singleElement = 0;
    for(int val : vect){
        singleElement = (singleElement ^ val);
    };
    
    
    cout << singleElement;

    return 0;
}