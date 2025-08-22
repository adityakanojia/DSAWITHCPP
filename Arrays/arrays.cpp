#include<iostream>
using namespace std;

void reverseArray(int arr[],int count) {
    for (size_t i = 0; i < count/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[count - i - 1];
        arr[count - 1 - i] = temp;
    }    
}

void productAndSum(int arr[], int count){
    int product= 1;
    int sum = 0;
    for (size_t i = 0; i < count; i++)
    {
        product =product * arr[i];
        sum += arr[i];
    }
    cout << "the product of an array is "<< product <<endl ;
    cout << "the sum of all the numbers in aa array "<<sum<<endl;
}

void swapMaxAndMinNum(int arr[],int count){
    int largest = 0;
    int largestIndex = 0;
    int min = arr[0];
    int minimumIndex = 0;
    for (size_t i = 0; i < count; i++)
    {
        if(largest < arr[i]){
            largest = arr[i];
            largestIndex = i;
        }
        if (min > arr[i])
        {
            min = arr[i];
            minimumIndex = i;
        }
    }

    int temp = arr[minimumIndex]; //temporary storing value
    arr[minimumIndex] = arr[largestIndex]; //storing minimum nuber with largest number
    arr[largestIndex] = temp; //changing largest number with the temporary variable    
}

void uniqueValues(int arr[],int count){
    for (size_t i = 0; i < count; i++)
    {
        bool isUnique = true;
        for (size_t j = 0; j < count; j++)
        {
            if(i != j && arr[i] == arr[j]){
                isUnique = false;
                break;
            }
        }
        if(isUnique)
        {
            cout << arr[i] << " ";
        }
    }
    
}

int main() {
    int arr[] = {1,2,35,4,77,77,1,2};
    int count = sizeof(arr)/sizeof(int);
    reverseArray(arr,count);
    productAndSum(arr,count);
    swapMaxAndMinNum(arr,count);
    for (size_t i = 0; i < count; i++)
    {
        cout << arr[i] << endl;
    }
    uniqueValues(arr,count);
    
    return 0;
}