#include <iostream>
using namespace std;
int main (){

    int n;
    cout << "ENTER THE VALUE OF N IN THE SERIES : " ;
    cin >> n;

    if(n <= 0 ){
        cout << "PLEASE ENTER A POSITIVE INTEGER : " << endl;
    }else if (n == 1){
        cout << "1st FIBONACCI TERM IS : 0" << endl;
    }else if (n == 2){
        cout << "2nd FIBONACCI TERM IS : 1" << endl;
    }else{
        long long f1 = 0, f2 = 1, temp;
        for (int i=2; i<n; i++){
            temp  = f1 + f2;
            f1 = f2;
            f2 = temp;
        }
        cout << n << "th FIBONACCI TERM IS : " << f2 << endl;
    }

    return 0;
}