#include<iostream>
#include<string>

using namespace std;


// Favorite Tea Input Write a program that takes the user’s favorite tea as input using getline and also asks how many cups of tea they want using cin. Display the result in a fun message.
int main(){
    string userFav;
    cout<<"Enter your favourite tea: "<<endl;
    getline(cin,userFav);

    int teaCups;
    cout<<"Enter the number of tea cups you want: "<<endl;
    cin >>teaCups;

    cout<<"Order Receipt \n"<<teaCups<<" "<<userFav<<endl;
    return 0;
}