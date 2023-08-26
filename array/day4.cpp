#include <bits/stdc++.h>
using namespace std;
void moveneg(int arr[],int n){
    int i=0,j=n-1;
    while(i<j){
        if(arr[i]<0){
            i++;
        }
        else if(arr[j]>0){
            j--;
        }
        else{
            swap(arr[i],arr[j]);
            
        }
    }
    
}
void duplicate(int arr[],int n){
    for(int i=0;i<n;i++){
        int ind=abs(arr[i]);
        if(arr[ind-1]>0){
            arr[ind-1]*=-1;

        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            cout<<i+1;
        }
    }
    
}
int main(){

    // int arr[]={1,2,-3,4,-5,6,-2,-4};
    // moveneg(arr,8);
    // for(int i=0;i<8;i++){ 
    //     cout<<arr[i]<<" ";
    // }
    int arr[]={1,3,2,3,4};
    int n=5;
    duplicate(arr,n);
  
 
}