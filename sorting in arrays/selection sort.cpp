#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int array[n];
  for(int i=0;i<n;i++){
    cin>>array[i];
  }

  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      if(array[j]<array[i]){
        int temp=array[j];
        array[j]=array[i];
        array[i]=temp;
      }
    }
  }

  for(int i=0;i<n;i++){
    cout<<array[i]<<" ";
  }

  return 0;
}
![Screenshot (1442)](https://user-images.githubusercontent.com/77963232/131237218-acbf2dda-9151-4c79-87df-d9f68c11f6a4.png)