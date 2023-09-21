#include <queue>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;

int main() {
    long long int n, ans, temp, t, diglen, i, j;
    cin >> n;
    for(i=0;i<=n;i++){
        temp = 0;
        bool flag = false;
        for(j=0;j<=(n+i);j++){
            if(j<n-i) cout << " ";
            else{
                if(temp==i){
                    cout << temp;
                    flag=true;
                    temp--;
                }
                else if(!flag){
                    cout << temp++;
                }
                else{
                    cout << temp--;
                }
            }
            if(j!=n+i) cout <<" ";
        }
        cout <<endl;
    }
    for(i=n-1;i>=0;i--){
        temp = 0;
        bool flag = false;
        for(j=0;j<=(n+i);j++){
            if(j<n-i) cout << " ";
            else{
                if(temp==i){
                    cout << temp;
                    flag=true;
                    temp--;
                }
                else if(!flag){
                    cout << temp++;
                }
                else{
                    cout << temp--;
                }
            }
            if(j!=n+i) cout <<" ";
        }
        cout <<endl;
    }
    return 0;
}
