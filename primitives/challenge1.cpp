#include<iostream>
#include<string>

using namespace std;

// Tea Information Display Write a program that declares variables to store the type of tea, its price per kilogram (float), and its rating (char). Use data types effectively and print them in a formatted output using escape sequences.

int main(){
    string typeTea;
    float priceTea = 45;
    char rating= 'A';

    cout << "Enter your tea type: ";
    getline(cin, typeTea);

    cout<<priceTea<<"\n"<<rating<<endl;
    cout<<typeTea;

    return 0;
}