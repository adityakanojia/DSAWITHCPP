#include<iostream>
using namespace std;

void numberPattern (int number) { // outer loop will run till number
    for(int i = 1; i <= number; i++){
        for (int j = 1; j <= number; j++)  // inner loop will go through each number till the number 
        {
            cout << j;
        };        
        cout << endl; // create the endline after inner loop will end
    }
}

int main() {
    // numberPattern(4);
    return 0;
}