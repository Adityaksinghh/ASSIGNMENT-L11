#include<iostream>
using namespace std;
int main() {
    int arr[]={ 0,1,3,4,5,6};
    int n=sizeof(arr)/4;
    int x=0;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(arr[i]!= x){
            cout<<x<<endl;
            flag=true;
            break;
     }
    else x++;
    }
    if(flag==false) cout<<x<<endl;
}