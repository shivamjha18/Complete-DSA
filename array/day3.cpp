#include <bits/stdc++.h>
using namespace std;
void rowsum(int arr[][3],int n,int m){
    vector<int>ans;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum+=arr[i][j];
        }
        ans.push_back(sum);
    }
    cout<<" print";
    for(auto it:ans){
        cout<<it<<" ";
    }
}

void colsum(int arr[][3],int n,int m){
    vector<int>ans;
    for(int j=0;j<m;j++){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i][j];
        }
        ans.push_back(sum);
    }
    cout<<" print";
    for(auto it:ans){
        cout<<it<<" ";
    }
}
void transpose(int arr[][3],int n,int m){
    int i=0,j=0;
    while(i<n or j<m){
        if(i!=j){
            swap(arr[i][j],arr[j][i]);
        }
         i++;
            j++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
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
    for(int i=0;i<n;i++){ 
        cout<<arr[i]<<" ";
    }
}
int main(){
    // int n=3,m=3;
    // int arr[3][3]={
    //     {1,2,3},
    //     {4,5,6},
    //     {7,8,9}
    // };
    
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // rowsum(arr,3,3);
    // colsum(arr,3,3);
    // cout<<endl;
    // transpose(arr,3,3);
    int arr[]={1,2,-3,4,-5,6,-2,-4};
    moveneg(arr,8);
    

    
    
}