
  #include <iostream>
using namespace std;
int main() {
    int size1,size2;
    cout<<"enter the row size";
    cin>>size1;
    cout<<"enter the column size";
    cin>>size2;
    int arr[size1][size2];
    cout<<"enter the "<<size1*size2<< "element";

    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
    
            cin>>arr[i][j];
        
    }
    }
    cout<<"your matrix is"<<endl;
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
    
            cout<<arr[i][j];
        
    }
    cout<<endl;
    }
}
    