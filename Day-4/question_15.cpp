#include <iostream>
#include<cmath>
using namespace std;

int main(){
int num;
long long arm = 0;
int d,temp,n=0;

cout << " ENTER THE NUMBER FOR CHECK WHETHER IT IS ARMSTRONG OR NOT : " ;
cin>> num;

temp = num;
while (temp > 0){
    n++;
    temp /= 10;
}

temp = num;
while (temp > 0){
d = temp % 10;

long long p = 1;
for(int i=0; i<n; i++)
p *= d;
arm = arm + p;
temp = temp/10;
}

if(num == arm){
    cout << " YES! NUMBER IS ARMSTRONG " << endl;
}else {
    cout << " NO! NUMBER IS NOT ARMSTRONG " << endl; 
}

    return 0;
}