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

void triangleSquarePattern (int number){
    for(int i = 1; i<=number; i++){
        for(int j=1; j<=number; j++){
            cout << "*";
        }
        cout << endl;
    }  
}

void pyrammidTriangle (int number){
    for(int i = 1; i <= number;i++){ // number of lines pattern will be formed
        for(int j=1;j<=i;j++){ // will run untill i 
            cout << "*";  // print * for example when i = 1 innerloop will print * and when i = 2 innerloop wi;; run twice and print ** 
        }
        cout << endl; // after 
    }
}

void alphabetSquare (int number) {
    for(int i = 1;i<=number;i++){
        char ch = 'A';
        for (int j = 1; j <= number; j++)
        {
            cout << ch;
            ch = ch + 1;
        }
        
        cout << endl;
    }
}

void squareNumber (int number){
    int num = 1;
    for(int i=1;i<=number;i++){
        for (int j = 1; j <= number; j++)
        {
            cout << num;
            num = num + 1;
        }
        cout << endl;
    }
}


int main() {
    // numberPattern(4);
    // triangleSquarePattern(5);
    // pyrammidTriangle(5);
    // alphabetSquare(5);
    squareNumber(3);
    return 0;
}