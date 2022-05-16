#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    int a, b;
    a = b = 0;
    if(a0<b0) b++;
    else if(a0>b0) a++;
    if(a1<b1) b++;
    else if(a1>b1) a++;
    if(a2<b2) b++;
    else if(a2>b2) a++;
    cout << a <<" "<<b;
    return 0;
}
