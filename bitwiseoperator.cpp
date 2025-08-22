#include<iostream>
using namespace std;

void operators(int a, int b){
    int choice;
    const char* operations[3] = {"AND","OR","XOR"};
    for (size_t i = 0; i < 3; i++)
    {
        cout << i+1 <<" "<< operations[i] << endl;
    }
    cout <<  "Enter your choice : ";
    cin >> choice;
    if(choice == 1){
        cout  << "The and operation of " << a << " and " << b << " is " << (a & b);
    } else if(choice == 2){
        cout  << "The or operation of " << a << " and " << b << " is " << (a | b);
    } else if(choice == 3){
        cout  << "The XOR operation of " << a << " and " << b << " is " << (a ^ b);
    } else{
        cout << "Invalid choice";
    }
}

int main() {
    operators(1,2);
    return 0;
}