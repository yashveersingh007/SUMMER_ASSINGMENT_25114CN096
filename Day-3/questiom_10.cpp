#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int N, i, isPrime, j;
    cout << "N is range of numbers" << endl;
    cout << "Enter N = ";
    cin >> N;
    cout << "The Prime Numbers in the given range are: " << endl;
    for(j = 2; j <= N; j++) {
        isPrime = 1;                      

        for(i = 2; i <= j/2; i++) {  
            if(j % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if(isPrime == 1)
            cout << j << endl;
    }
    return 0;
}