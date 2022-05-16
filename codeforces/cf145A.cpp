#include <queue>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;
vector < pair <string, string> > x;
vector <string> a1;
vector <string> a2;
string str1, str2;

int main() {
    //freopen("in.txt", "r", stdin);
    long long int temp, t, diglen, i, a, n, b, ans, temp2, m, j, rep, swp;
    cin >> str2 >> str1;
    n = str1.length();
    b = a = 0 ;
    swp = 0;
    for(i=0; i<n; i++){
        if(str1[i]!=str2[i]){
            if(str2[i]=='7'){
                if(b>0){
                    swp++;
                    b--;
                }
                else a++;
            }
            else if(str2[i]=='4'){
                if(a>0){
                    swp++;
                    a--;
                }
                else b++;
            }
        }
    }
    swp+=a+b;
    cout << swp;
    return 0;
}









