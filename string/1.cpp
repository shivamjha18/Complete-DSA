// #include <bits/stdc++.h>
// using namespace std;
// void replace(string str){
//     for(int i=0;i<str.size();i++){
//         if(str[i]==' '){
//             str[i]='@';
//         }
//     }
//     cout<<str;
// }
// void uppercase(string str){
//     for(int i=0;i<str.size();i++){
//         str[i]=str[i]-'a'+'A';
//     }
//     cout<<str;
// }
// void lowercase(string str){
//     for(int i=0;i<str.size();i++){
//         str[i]=str[i]+'a'-'A';
//     }
//     cout<<str;
// }
// bool cmp(char first,char second){
//     return first>second;
// }
// void sortit(string str){
//     int n=str.length();
//     sort(str.begin(),str.end(),cmp);
//     cout<<str;
// }
// int main(){
//     string str="apple is red";
//     //replace(str); 
//     //palindrome
//     //reverse
//     //uppercase("apple");
//     //lowercase("APPLE");
//     sortit("deabc");
    
// }
/////////////////////////////////////////////////

//reverse letter not special character
// "a_bc_de" ans="e_dc_ba"
// bool isalpha(char c){
//          if(c>='a' && c<='z' || c>='A' && c<='Z'){
//              return true;
//          }
//          return false;
//     }
//     string reverseOnlyLetters(string s) {
//         int i=0,j=s.size()-1;
//         while(i<=j){
//             if(isalpha(s[i]) && isalpha(s[j])){
//                 swap(s[i],s[j]);
//                 i++;j--;
//             }
//             else if(!isalpha(s[i])){
//                 i++;
//             }
//             else{
//                 j--;
//             }
//         }
//         return s;
 ////////////////////////////////////////////////       
        //longest common prefix
        // ["flower","flow","flight"] ans="fl"
        // string longestCommonPrefix(vector<string>& strs) {
        // int i=0;
        // string ans;
        // while(true){
        //     char curr=0;
        //     for(auto it:strs){
        //         if(i>=it.size()){
        //             curr=0;
        //             break;
        //         }
        //         if(curr==0){
        //             curr=it[i];
        //         }
        //         else if(curr!=it[i]){
        //             curr=0;
        //             break;
        //         }
        //     }
        //     if(curr==0){
        //         break;
        //     }
        //     ans.push_back(curr);
        //     i++;
        // }
        // return ans;
/////////////////////////////////////////////////////////
        //reverse vowel
        //"hello"=>holle;
//         bool isvowel(char ch){
//         if(ch=='a' || ch=='A' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
//             return true;
//         }
//         return false;
//     }
// public:
//     string reverseVowels(string s) {
//       int i=0,j=s.size()-1;
//       while(i<=j){
//           if(isvowel(s[i]) && isvowel(s[j])){
//               swap(s[i],s[j]);
//               i++;j--;
//           }
//           else if(!isvowel(s[i])){
//               i++;
//           }
//           else{
//               j--;
//           }
//       }
//       return s;