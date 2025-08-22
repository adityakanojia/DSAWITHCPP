#include<iostream>
using namespace std;

int pow(int x, int n){
    int ans = x;
    for (int i = 1; i < n; i++)
    {
        ans *= x;
    }    
    return ans;
}

int main(){
    int answer = pow(2,3);
    cout << answer;
    return 0;
}