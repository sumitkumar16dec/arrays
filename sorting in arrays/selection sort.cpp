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



"""""""""" OR """"""""""

  
  
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        int n; cin>>n; int arr[1000];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        for(int i=0;i<n-1;i++){
          int minIndex=i;
          for(int j=i+1;j<n;j++){
            if (arr[j]<arr[minIndex]) minIndex=j;
          }
          swap(arr[i],arr[minIndex]);
        }
    
        for(int i=0;i<n;i++){
          cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

return 0;
}
