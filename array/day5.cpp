#include <bits/stdc++.h>
using namespace std;
int bs(int arr[],int low,int high,int x){
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]>x){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}

int exp(int arr[],int n,int x){ //exponential search
    int i=0;
    if(arr[i]==x){
        return i;
    }
    i=1;
    while(i<n && arr[i]<=x){
        i=i*2;
    }
    return bs(arr,i/2,min(i,n-1),x);
}

int main(){
    int arr[]={1,3,5,7,9,11,23,45,56};
    int n=9;
    int tar=23;
    int x=exp(arr,n,tar);
    cout<<x;
    return 0;
}