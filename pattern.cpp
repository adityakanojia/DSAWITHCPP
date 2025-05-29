#include<iostream>
using namespace std;

void countPattern (int count) { // outer loop will run till count
    for(int i = 1; i <= count; i++){
        for (int j = 1; j <= count; j++)  // inner loop will go through each count till the count 
        {
            cout << j;
        };        
        cout << endl; // create the endline after inner loop will end
    }
}

void triangleSquarePattern (int count){
    for(int i = 1; i<=count; i++){
        for(int j=1; j<=count; j++){
            cout << "*";
        }
        cout << endl;
    }  
}

void pyrammidTriangle (int count){
    for(int i = 1; i <= count;i++){ // count of lines pattern will be formed
        for(int j=1;j<=i;j++){ // will run untill i 
            cout << "*";  // print * for example when i = 1 innerloop will print * and when i = 2 innerloop wi;; run twice and print ** 
        }
        cout << endl; // after 
    }
}

void alphabetSquare (int count) {
    char character = 'A';
    for(int i = 1; i<= count;i++){
        for(int j = 1; j <= count; j++)
        {   
            cout << character << " ";
            character += 1;
        }
        
        cout << endl;
    }
}

void squarecount (int count){
    int num = 1;
    for (int i = 1; i <= count; i++)
    {
        for (int j = 0; j <= count; j++)
        {
            cout << num << " ";
            num += 1;
        }
        
        cout << endl;
    }
    
}

void countPyrramidPattern (int count) {
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < i+1; j++)  // when i = 0 if  j < 0 + 1 = 1 
        {
            cout << i + 1 << " "; // console 0 + 1 = 1  
        }
        
        cout << endl ;
    }
    
}

void alphabetPyrramidPattern (int count){
    char alp = 'A';
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
         cout << alp << " ";   
        }
        alp++;
        cout << endl;
    }
    
}

void pyrrmaidPatternTwo (int count){
    for (int i = 0; i < count; i++)
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

void pyrammidContinuationNumber (int count) {
 int num = 1;
 for (int i = 0; i < count; i++)
 {
    for (int j = 0; j < i+1; j++)
    {
        cout << num << " ";
        num++;
    }
    
    cout << endl;
 }
 
}

void pyrammidPatternReverseNumber (int count) { // Backward loop problem
    
    for (int i = 0; i < count; i++)
    {
        for (int j = i+1; j > 0; j--)
        {
            cout << j << " ";
        };
        cout << endl;
    };
}

int main() {
    // countPattern(4);
    // triangleSquarePattern(5);
    // pyrammidTriangle(5);
    // alphabetSquare(6);
    // squarecount(3);
    // countPyrramidPattern(4);
    // alphabetPyrramidPattern(4);
    // pyrrmaidPatternTwo(3);
    // pyrammidContinuationNumber(4);
    pyrammidPatternReverseNumber(4);
    return 0;
}