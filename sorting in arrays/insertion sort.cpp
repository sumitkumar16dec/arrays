#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int array[n];
  for(int i=0;i<n;i++){
    cin>>array[i];
  }

  for(int i=1;i<n;i++){
    int current=array[i];
    int j=i-1;
    while(array[j]>current){
      array[j+1]=array[j];
      j--;
    }
    array[j+1]=current;
  }

  for(int i=0;i<n;i++){
    cout<<array[i]<<" ";
  }

  return 0;
}



"""""""""" OR """"""""""



#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n; int arr[100000];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        for(int i=1;i<n;i++){
            int temp=arr[i]; int j=i-1;
            for(;j>=0;j--){
                if(arr[j]>temp) arr[j+1]=arr[j];
                else break;
            }
            arr[j+1]=temp;
        }
        
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
