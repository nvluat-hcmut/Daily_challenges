#include <iostream>
using namespace std;
#define MAX_N 100
void showArray(int array[], int number) {
        for (int i = 0; i < number; i++) {
            cout << array[i] << " ";
        }
        cout << endl;
    }
    
int main () {
    //Thuat toan doi cho truc tiep
    // input: 4
    // 5 7 3 2
    // output: Buoc 1: 2 7 5 3/ Buoc 2: 2 3 7 5/ Buoc 3: 2 3 5 7

    int number;
    cout << "Input number of array: ";
    cin >> number;
    int array[MAX_N];
    for (int i = 0; i < number; i++) {
        cin >> array[i];
    }
    int temp;
    for (int i = 0; i < number; i++) {
        for (int j = i + 1; j < number; j++) {
            if (array[i] > array[j]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
        if (i <= number - 2) {
            cout << "Buoc "<< i+1 << ": ";
            showArray(array, number);
            cout << endl;
        }
        
    }

    return 0;
}