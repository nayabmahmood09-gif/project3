








#include <iostream>
using namespace std;
int main() {
    
    int n;
    cout<<"how many names to be sorted?"<<endl;
    cin>>n;
    string arr[n];
    cout<<"enter 5 names"<<endl;;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        
        
    }
      for(int i=1;i<n;i++){
          
          for(int j=i;j>=0;j--){
             
              if(arr[j]<arr[j-1]){
                  
              
              string temp=arr[j-1];
              arr[j-1]=arr[j];
              arr[j]=temp;
          }
          }
      }
      cout<<"sorted names in ascending order="<<endl;
      for (int i=0;i<n;i++){
          cout<<arr[i]<<","<<" ";
      }
      
    }
    
  