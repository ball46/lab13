#include<iostream>
using namespace std;

int gcd(int,int);

int main(){
    int x, y;
    cin >> x >> y;
    cout << gcd(x,y);
    return 0; 
}

int gcd(int a, int b){
    if(a%b == 0) return b;
    else if(b%a == 0) return a;
    else{
        int c = 0;
        if(a>b) c = a%b;
        else c = b%a;
        a = b;
        b = c;
        return gcd(a,b);
    }
}
