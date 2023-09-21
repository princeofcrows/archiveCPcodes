#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main(){
    //freopen("in.txt", "r", stdin);
    int a, b, n;
    stack <int> x;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        if(a==1){
            cin >> b;
            if(!x.empty())  x.push(max(x.top(), b));
            else x.push(b);
        }
        else if(a==2){
            x.pop();
        }
        else if(a==3){
            cout << x.top() <<endl;
        }
    }
    return 0;
}
