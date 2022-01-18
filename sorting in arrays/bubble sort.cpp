#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;

  int array[n];
  for(int i=0;i<n;i++){
    cin>>array[i];
  }

  int counter=1;
  while(counter<n){
    for(int i=0;i<n-counter;i++){
      if(array[i]>array[i+1]){
        int temp=array[i];
        array[i]=array[i+1];
        array[i+1]=temp;
      } 
    }
    counter++;
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
        
        for(int i=1;i<n;i++){
          bool swapped=true;  // for best case (time complexity becomes O(n) from O(n^2)
          for(int j=0;j<n-i;j++){
            if (arr[j]>arr[j+1]){ swap(arr[j],arr[j+1]); swapped=false; }
          }
          if(swapped==true) break;
        }
    
        for(int i=0;i<n;i++){
          cout<<arr[i]<<" ";
        }
    }

return 0;
}
