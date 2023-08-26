#include <bits/stdc++.h>
using namespace std;
int Unique(vector<int>arr){
    int ans=0;
    for(auto it:arr){
        ans^=it;
    }
    return ans;
}
vector<int>Union(vector<int>arr,vector<int>arr1){
    vector<int>ans;
    int n=arr.size(),m=arr1.size();
    int i=0,j=0;
    while(i<n && j<m){
        if(arr[i]<arr1[j]){
            ans.push_back(arr[i]);
            i++;
        }
        else if(arr[i]>arr1[j]){
            ans.push_back(arr1[j]);
            j++;
        }
        else if(arr[i]==arr1[j]){
            i++;
        }
    }
    while(i<n){
            ans.push_back(arr[i++]);
        
    }
    while(j<m){
            ans.push_back(arr1[j++]);
        
    }
    return ans;
}
void func(vector<int>arr,int sum){
    map<int,bool>mp;
    for(auto it:arr){
        mp[it]=true;
    }
    for(auto it:arr){
        int x=sum-it;
        if(mp.find(x)==mp.end()){
            cout<<it<<" ";
            break;
        }
    }
}
void Triplet(vector<int>arr,int sum){
    sort(arr.begin(),arr.end());
    int i=0,j=1,n=arr.size();
    while(j<n){
        int x= arr[i]+arr[j]+arr[n-1];
        if(x==sum){
            cout<<arr[i] << arr[j] <<arr[n-1];
            break;
        }
        else if(x>sum){
            n--;
        }
        else{
            i++;
            j++;
        }
    }
}

int main()
{
    vector<int>arr{2,4,6,3,9,1};
    int sum=13;
   
    Triplet(arr,sum);
    // vector<int>arr{1,2,3,4};
    // vector<int>arr1{2,4,5,6};
    // sort(arr.begin(),arr.end());
    // sort(arr1.begin(),arr1.end());
    // //cout<<Unique(arr);
    // vector<int>ans=Union(arr,arr1);
    // for(auto it:ans){
    //     cout<<it<<" ";
    // }
    // int a[5];
    // memset(a, -1, sizeof(a));
    // for (int i = 0; i < 5; i++)
    //     cout << a[i] << " ";
    // cout << endl;
}