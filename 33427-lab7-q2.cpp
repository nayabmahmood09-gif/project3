#include <iostream>
using namespace std;
int main() {
    int counts;
    counts=0;
int arr [4][3]={{1,0,3},{0,2,0},{0,7,8},{0,9,0}};
for(int i=0;i<4;i++){
  for  (int j=0;j<3;j++){
        
           cout<<arr[i][j];
           if(arr[i][j]==0){
            counts++;
        }
        }
        
        cout<<endl;
    }
    cout<<"number of zeros are"<<" "<<counts<<endl;
    if(counts>=((4*3)/2)){
        cout<<"matrix is sparse matrix";
    }
    else{
        cout<<"matrix is not sparse matrix";
    }
    }
    


