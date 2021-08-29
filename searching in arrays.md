#include<iostream>
using namespace std;

int binarySearch(int array[], int n, int key){
  int s=0; int e=n;
  while(s<=e){
    int mid=(s+e)/2;

    if(array[mid]==key) return mid;
    else if(array[mid]>key) e=mid-1;
    else s=mid+1;
  }
  return -1;
}

int main(){
  int n;
  cout<<"Enter total no. of digits : ";
  cin>>n;
  int array[n];

  for(int i=0;i<n;i++){
    cout<<"Enter "<<i<<"th index digit : ";
    cin>>array[i];
  }
  int key;
  cout<<"Enter value of digit to find : ";
  cin>>key;
  cout<<"Required digit's index is "<<binarySearch(array,n,key)<<endl;

  return 0;
}
![Screenshot (1442)](https://user-images.githubusercontent.com/77963232/131237218-acbf2dda-9151-4c79-87df-d9f68c11f6a4.png)
