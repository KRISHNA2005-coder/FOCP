#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the matrix ";
    cin >> n;
    int arr[25][25] = {0};  

    cout << "Enter the elements of the matrix ";
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            cin >> arr[row][col];
        }
    }

    int top = 0, bottom = n - 1 , left = 0, right = n - 1;
    
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            cout << arr[top][i] << " ";
        }
        top++;
        
        for (int i = top; i <= bottom; i++) {
            cout << arr[i][right] << " ";
        }
        right--;
        
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
            cout << arr[bottom][i] << " ";
            }
            bottom--;
        }
        
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                cout << arr[i][left] << " ";
            }
            left++;
        }
    }

    return 0;
}

