//Find the minimum value out of all elements in the array.
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={3,5,8,2,4};
    int n=sizeof(arr)/4;
    int min=INT_MAX;
    for(int i=0;i<=n-1;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<min;
}