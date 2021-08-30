#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int array[n];
  for(int i=0;i<n;i++){
    cin>>array[i];
  }

  int maxSum=0;
  int curSum=0;
  for(int i=0;i<n;i++){
    curSum=curSum+array[i];
    if(maxSum<curSum) maxSum=curSum;
    if(curSum<0) curSum=0;
  }cout<< maxSum;

return 0;
}
