#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int N, i, isPrime = 1;
    cout << "N is number you need check its PRIME or NOT" << endl;
    cout << "Enter N = ";
    cin >> N;

    if(N <= 1) {
        isPrime = 0;
    } else {
        for(i = 2; i <=N/2; i++) {  
            if(N % i == 0) {             
                isPrime = 0;             
                break;                   
            }
        }
    }

    if(isPrime == 1)
        cout << N << " is a PRIME Number" << endl;
    else
        cout << N << " is NOT a PRIME Number" << endl;

    return 0;
}