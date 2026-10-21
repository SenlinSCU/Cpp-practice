#include<iostream>
using namespace std;
long long f(int n){
    if(n==0||n==1){
        return 1;
    }
    return f(n-1)+f(n-2);
}

