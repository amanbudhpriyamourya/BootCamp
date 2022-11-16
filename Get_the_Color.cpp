#include<iostream>
#include<string>
using namespace std;
int main(){
    string my_color;
    cout<<"Enter your favorite color :";
    getline(cin , my_color);
    cout<<"Hey " << my_color << " is my fav too";
    return 0;
}