#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

   /* int x, y;
    int sum, product, difference;
    cout << "Type a number: ";
    cin >> x;
    cout << "Type another number: ";
    cin >> y;
    sum = x + y;
    product = x * y;
    difference = x - y;
    cout << "Sum is: " << sum << endl;
    cout << "Product is: " << product << endl;
    cout << "Difference is: " << difference; */

    float x, y;
    float sum, product, difference;
    cout << "Type a number: ";
    cin >> x;
    cout << "Type another number: ";
    cin >> y;

    if(x > y){
        cout << x << " is the largest number";
    }else if(y > x){
        cout << y << " is the largest number";
    }else{
        cout << "They are equal";
    };
    return 0;
}
