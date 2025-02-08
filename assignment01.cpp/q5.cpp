#include <iostream>
using namespace std;
int main() {

    int n;
    cout << "enter the value of n: ";
    cin >> n;

    int arr[n][n] = {0};

    cout << "enter the elements of the matrix";             
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
        cin >>arr[i][j];
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j=0;j<n/2;j++) {
            int temp = arr[i][j];
            arr[i][j]=arr[i][n-1-j];
            arr[i][n - 1 - j] = temp;
        }
    }

     cout << "the rotate matrix is " <<endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
        cout <<arr[i][j] << "  ";
        }
        cout <<"\n";
    }

    return 0;

    
}