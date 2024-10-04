#include<iostream>
#include<string>

using namespace std;

// Modify Tea Prices Create a program where the user inputs a base price for tea. Use type casting to increase the price by 10% and display the rounded new price using explicit casting.
int main(){
    int teaPrice;

    cout<<"Enter Tea Price: ";
    cin>>teaPrice;
    float newPrice = teaPrice + (0.1 * teaPrice);
    cout<<"The price of tea after tax is: "<< newPrice;
        
    return 0;
}