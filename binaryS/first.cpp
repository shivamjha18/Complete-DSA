// #include<bits/stdc++.h>
// using namespace std;

// int search(int arr[],int n,int k){
//     int low=0,high=n-1;
//     while(low<=high){
//         int mid=(low+high)/2;
//         if(arr[mid]==k){
//             return mid;
//         }
//         else if(arr[mid]>k){
//             high=mid-1;
//         }
//         else{
//             low=mid+1;
//         }
//     }
//     return -1;
// }

// int recursivesearch(int arr[],int low,int high,int target){
//     if(low>high){
//         return -1;
//     }
//     int mid=(low+high)/2;
//     if(arr[mid]==target){
//         return mid;
//     }
//     else if(arr[mid]>target){
//         return recursivesearch(arr,low,mid-1,target);
//     }
//     else{
//         return recursivesearch(arr,mid+1,high,target);
//     }
// }

// int lowerBound(int arr[],int n,int k){
//     int ans=-1;
//     int low=0,high=n-1;
//     while(low<=high){
//         int mid=(low+high)/2;
//         if(arr[mid]>=k){
//             high=mid-1;
//             ans=mid;
//         }
//         else{
//             low=mid+1;
//         }
//     }
//     return ans;
// }

// int upperBound(int arr[],int n,int k){
//     int low=0,high=n-1;
//     int ans=-1;
//     while(low<=high){
//         int mid=(low+high)/2;
//         if(arr[mid]>k){
//             high=mid-1;
//             ans=mid;
//         }
//         else{
//             low=mid+1;
//         }
//     }
//     return ans;
// }

// int firstocc(int arr[],int n,int x){
//     int low=0,high=n-1;
//     int ans=-1;
//     while(low<=high){
//         int mid=(low+high)/2;
//         if(arr[mid]==x){
//             high=mid-1;
//             ans=mid;
//         }
//         else{
//             low=mid+1;
//         }
//     }
//     return ans;
// }

// int lastocc(int arr[],int n,int x){
//     int low=0,high=n-1;
//     int ans=-1;
//     while(low<=high){
//         int mid=(low+high)/2;
//         if(arr[mid]==x){
//             ans=mid;
//             low=mid+1;
//         }
//         else{
//             high=mid-1;
//         }
//     }
//     return ans;
// }
// int Searchrotated(int arr[],int n,int k){
//     int low=0,high=n-1;
//     while(low<=high){
//         int mid=(low+high)/2;
//         if(arr[mid]==k){
//             return mid;
//         }
//         else if(arr[mid]>=arr[low]){
//             if(arr[low]<=k && k<=arr[mid]){

//                 high=mid-1;

//             }
//             else{
//                 low=mid+1;
//             }

//         }
//         else{
//             if(arr[mid]<=k&& arr[high]>=k ){
//                 low=mid+1;
//             }
//             else{
//                 high=mid-1;
//             }
//         }
//     }
//     return -1;
// }

// int MinInRotatedSortedArray(int arr[],int n){
//     int low=0,high=n-1;
//     int ans=INT_MAX;
//     while(low<=high){
//         int mid=(low+high)/2;
//         if(arr[mid]>=arr[low]){
//             ans=min(ans,arr[low]);
//             low=mid+1;
//         }
//         else{
//             ans=min(ans,arr[mid]);
//             high=mid-1;
//         }
//     }
//     return ans==INT_MAX?-1:ans;
// }

// int singleElement(int arr[],int n){
//     int low=1,high=n-2;
//     if(n==1) return arr[0];
//     if(arr[0]!=arr[1]) return arr[0];
//     if(arr[n-1]!=arr[n-2]) return arr[n-1];
//     while(low<=high){
//         int mid=(low+high)/2;
//         if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1]){
//             return mid;
//         }
//         else if((mid%2==1 && arr[mid]==arr[mid-1])|| (mid%2==0 && arr[mid]==arr[mid+1])){
//             low=mid+1;
//         }
//         else{
//             high=mid-1;
//         }
//     }
// }

// int main(){
//     int arr[]={2,4,6,8,8,12,12,12,14,16};
//     int n=10;
//     // cout<<search(arr,n,6);
//     //cout<<recursivesearch(arr,0,n-1,12);
//     //cout<<lowerBound(arr,n,8);
//     //cout<<upperBound(arr,n,12);
//     //cout<<firstocc(arr,n,8);
//      //cout<<lastocc(arr,n,12);
//      int arr1[]={7,8,9,3,4,5,6};
//      //cout<<Searchrotated(arr1,9,12);
//      cout<<MinInRotatedSortedArray(arr1,7);
     
// }

#include <bits/stdc++.h> 
#include <iostream>
using namespace std;
void rotate(int a[],int n,int k){
    int arr[n];
    k=k%n;
    for(int i=0;i<n;i++){
      arr[i]=a[i+k]%n;
   }
   for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
   }
}
int square(int n){
    int low=1,high=n;
    int ans=-1;
    while(low<=high){
        int mid=(high+low)/2;
        if((mid*mid)<=n){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
}
int main() {
//    int n;
   
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//       cin>>arr[i];
//    }
//    int k;
//    cin>>k;
//    rotate(arr,n,k);
cout<<square(9);
   
}