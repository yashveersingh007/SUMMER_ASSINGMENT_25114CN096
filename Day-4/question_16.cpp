#include <iostream>
using namespace std;

int main(){
    int low, high;

    cout << "ENTER THE RANGE (LOW HIGH) : ";
    cin >> low >> high;

    cout << "ARMSTRONG NUMBERS BETWEEN " << low << " AND " << high << " ARE " << endl;

    for(int i=low; i<=high; i++){
        int temp = i, n = 0, d;
        long long arm = 0;

        while (temp > 0){
            n++;
            temp /= 10;
        }

        temp = i;
        while(temp > 0){
            d = temp % 10;

            long long p = 1;
            for(int j=0; j<n; j++)
            p *= d;

            arm += p;
            temp /= 10;
        }
        if(arm == i){
            cout << i << endl;
        }
    }

    return 0;
}