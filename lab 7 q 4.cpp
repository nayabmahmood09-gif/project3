#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of square matrix:" << endl;
    cin >> n;

    int arr[n][n], arr2[n][n];

    cout << "Enter"<< n*n <<" numbers:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
            arr2[i][j] = arr[i][j];
        }
    }

    cout <<"Matrix is:"<< endl;
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            cout << arr[i][j] << " ";
        }
        cout<<endl;
    }

    for (int i=0;i<n;i++) {
        for (int j=i+1;j<n;j++) {
            int temp =arr[i][j];
            arr[i][j] =arr[j][i];
            arr[j][i] =temp;
        }
    }

    cout<<"Transpose of matrix is:"<< endl;
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            cout<< arr[i][j] << " ";
        }
        cout<<endl;
    }

    bool symmetric=true;
    for (int i=0; i<n;i++) {
        for (int j=0;j<n;j++) {
            if (arr[i][j] != arr2[i][j]) {
                symmetric=false;
                break;
            }
        }
    }

    if (symmetric)
        cout<<"The matrix is Symmetric."<<endl;
    else
        cout<<"The matrix is Asymmetric."<<endl;

    return 0;
}
