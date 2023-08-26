// #include<bits/stdc++.h>
// using namespace std;
// // class Encapsulation{
// //     private:
// //       int age;
// //       string name;
// //     public:
// //       void getdetail(){
// //            cout<<"name is "<<name<<"age is"<<age;
// //       }
// //       void setter(string name,int age){
// //            this->name=name;
// //            this->age=age;
// //       }

// // };

// // class parent{
// //     public:
// //     void Dog(){
// //         cout<<"parents";
// //     }
// // };
// // class child:public parent{
// //        public:
// //          void cat(){
// //             cout<<"child";
// //          }
// // };

//                   //polymorphism
//                   //function overloading
//                   //operator overloading

// class poly{
//     public:
//     int val;
//     void operator+(poly& obj2){
//         int val1=this->val;
//         int val2=obj2.val;
//         cout<<(val2-val1)<<endl;
//     }

// };


// int main(){
//     // Encapsulation e1;
//     // e1.setter("shivam",22);
//     // e1.getdetail();

//     // parent p1;
//     // p1.Dog();
//     // child c1;
//     // c1.Dog();

//     poly obj1,obj2;
//     obj1.val=7;
//     obj2.val=2;
//     obj1 + obj2;

// }

#include<bits/stdc++.h>
using namespace std;
int third(int len,vector<int>v){
    int count=0;
    sort(v.begin(),v.end());
    for(int i=0;i<len;i++){
        if(v[i]>=0 && count<3){
            count++;
        }
        if(count==3){
            return v[i];
        }
    }
    return -1;
}
int main(){
    vector<int>v={1,1,1,5,4};
    cout<<third(5,v);

}