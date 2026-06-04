#include <iostream>
using namespace std;
int main (){

int n;
cout << " ENTER THE NUMBER OF TERMS : ";
cin >> n;
long long f1 = 0, f2 = 1, next;
cout << " FIBONACCI SERIES ("  <<  n  << " terms):" << endl;

for ( int i=1; i <=n ; i++){
    if(i ==1 ){
        cout << f1;
    }else if (i == 2){
        cout << "  " << f2;
    }else{
        next = f1 + f2;
        f1 = f2;
        f2 = next;
        cout << "  " << f2;
    }
}
cout << endl;

    return 0;
}