//Given an array, predict if the array contains duplicates or not.
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,4,6,4,6,7};
    int n=sizeof(arr)/4;
    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                flag=true;
                break;
            }
        }
    if(flag==true) break;
    }
    if(flag==true){
        cout<<"duplicates";
    }
    else{
        cout<<"not dublicates";
    }


}