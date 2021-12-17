#include <iostream>
using namespace std;
void search_element(int arr[], int n, int find) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == find) {
            cout << "Tim thay phan tu " << find << " o vi tri " << i -1 << endl;
            return;
        }
    }
}