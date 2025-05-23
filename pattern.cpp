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
    char character = 'A';
    for(int i = 1; i<= number;i++){
        for(int j = 1; j <= number; j++)
        {   
            cout << character << " ";
            character += 1;
        }
        
        cout << endl;
    }
}

void squareNumber (int number){
    int num = 1;
    for (int i = 1; i <= number; i++)
    {
        for (int j = 0; j <= number; j++)
        {
            cout << num << " ";
            num += 1;
        }
        
        cout << endl;
    }
    
}

void numberPyrramidPattern (int number) {
    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < i+1; j++)  // when i = 0 if  j < 0 + 1 = 1 
        {
            cout << i + 1 << " "; // console 0 + 1 = 1  
        }
        
        cout << endl ;
    }
    
}

void alphabetPyrramidPattern (int number){
    char alp = 'A';
    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
         cout << alp << " ";   
        }
        alp++;
        cout << endl;
    }
    
}

void pyrrmaidPatternTwo (int number){
    for (int i = 0; i < number; i++)
    {
        int num = 1;
        for (int j = 0; j < i + 1; j++)
        {
         cout << num << " ";
         num++;
        }
        cout << endl;
    }
    
}

int main() {
    // numberPattern(4);
    // triangleSquarePattern(5);
    // pyrammidTriangle(5);
    // alphabetSquare(6);
    // squareNumber(3);
    // numberPyrramidPattern(4);
    // alphabetPyrramidPattern(4);
    pyrrmaidPatternTwo(3);
    return 0;
}