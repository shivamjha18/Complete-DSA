// #include<bits/stdc++.h>
// using namespace std;
// class Authentication{
//     public:
//       void login(){
//         cout<<"logged in"<<endl;
//       }
//       void logout(){
//         cout<<"log out"<<endl;
//       }
//       void userdetail(string name){
//         cout<<"user is "<<name<<endl;
//       }
// };
// int main(){
//     Authentication a1;
//     a1.login();
//     a1.userdetail("virat");
//     a1.logout();
// }
// In this code for login & logout using the same class and for user details also
// same class being used so multiple responsibility of one class
#include<bits/stdc++.h>
using namespace std;
class Authentication{
    public:
      void login(){
        cout<<"logged in"<<endl;
      }
      void logout(){
        cout<<"log out"<<endl;
      }
};
class Detail{
    public:
    void UserDetail(string name){
        cout<<"user is "<<name<<endl;

    }
};
//we have to create one object so we have to use MULTIPLE INHERITANCE
class User:public Authentication,public Detail{

};
int main(){
    User u;
    u.login();
    u.UserDetail("shyam");
    u.logout();
}
