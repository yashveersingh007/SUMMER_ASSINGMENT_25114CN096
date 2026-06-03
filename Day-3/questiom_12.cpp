#include<iostream>
using namespace std;
int main() {
    int a, b, temp, gcd, lcm;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int x = a, y = b;          
    while(b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;
    lcm = (x * y) / gcd;      
    cout << "LCM = " << lcm << endl;
    return 0;
}