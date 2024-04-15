//Find the second largest element in the given Array in one pass.
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={1,4,5,7,3};
    int n=sizeof(arr)/4;
    int max = INT_MIN;
    int smx= INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            smx=max;
            max=arr[i];
        }
    }
    cout<<max<<endl;
    cout<<smx<<endl;
}