#include <iostream>
using namespace std ;
int main() {

    int n,arr[n], temp;;
    cout << "enter size of an  array:";
    cin >>n;

    cout <<"\n"<<"enter elements of an array: ";

    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    for(int i = 0; i <n/ 2; i++) {
        temp = arr[i];
        arr[i] = arr[n -i- 1];
        arr[n-i-1] = temp;
    }

    cout << "the reversed array is: ";

    for(int i = 0; i <n; i++) {
        cout <<"  "<< arr[i];
    }
    
    for(int i = 0; i <n; i++) {
        for(int j = 0; j <n; j++){
            if(arr[j] > arr[j + 1]) { 
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout<<endl<<"the second smallest element is:"<< arr[1] <<endl;
    cout<<"the second largest element is:"<< arr[n - 2];

}