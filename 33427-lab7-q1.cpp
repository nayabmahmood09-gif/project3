#include <iostream>
using namespace std;
int main() {
int size,n,sum,counts;
double avg;
sum=0;
counts=0;
cout<< "enter size of your array";
cin>>size;
int arr[size];
cout<<"enter" <<size<<"numbers"<<endl;

for(int i=0;i<size;i++){
cout<<"no."<<i+1<<" "<<endl;
cin>> arr[i];
}
cout<<"{"<<" ";
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
    if(arr[i]>0){
        sum+=arr[i];
        counts++;
    }
    
}
cout<<"}"<<endl;
cout<<"sum is"<<sum<<endl;
avg=(double)sum/counts;
cout <<"average is"<<avg;
}