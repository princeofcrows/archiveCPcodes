#include <queue>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;
string str;

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, kg, kb, kr, ky, i, j, temp, tb, tg, tr, ty;
    cin >> str;
    n = str.length();
    kg = kb = kr= ky= 0;
    bool flag[n];
    memset(flag, false, sizeof flag);
    for(i=0; i<n;i++){
        if(str[i]=='!'){
            for(j = i+4; j<n; j+=4){
                if(str[j]=='R'){
                    kr++;
                    flag[i] = true;
                    str[i] = 'R';
                    break;
                }
                if(str[j]=='G'){
                    kg++;
                    flag[i] = true;
                    str[i] = 'G';
                    break;
                }
                if(str[j]=='B'){
                    kb++;
                    flag[i] = true;
                    str[i] = 'B';
                    break;
                }
                if(str[j]=='Y'){
                     ky++;
                     flag[i] = true;
                     str[i] = 'Y';
                     break;
                }
            }
            if(!(j<n)){
                for(j = i-4; j>=0; j-=4){
                    if(str[j]=='R'){
                        kr++;
                        flag[i] = true;
                        str[i] = 'R';
                        break;
                    }
                    if(str[j]=='G'){
                        kg++;
                        flag[i] = true;
                        str[i] = 'G';
                        break;
                    }
                    if(str[j]=='B'){
                        kb++;
                        flag[i] = true;
                        str[i] = 'B';
                        break;
                    }
                    if(str[j]=='Y'){
                         ky++;
                         flag[i] = true;
                         str[i] = 'Y';
                         break;
                    }
                }
            }
        }
        flag[i] = true;
    }
    temp = 0;
    tg = tr = tb = ty = 0;
    for(i=0; i<4;i++){
        if(flag[i]==false){
            temp++;
        }
        if(str[i]=='R'){
            tr++;
        }
        if(str[i]=='G'){
           tg++;
        }
        if(str[i]=='B'){
            tb++;
        }
        if(str[i]=='Y'){
            ty++;
        }
    }
    if(ty==0){
        for(i=0;i<4;i++){
            if(str[i]=='!'){
                for(j = i; j<n; j+=4){
                    str[j] = 'Y';
                    ky++;
                }
                break;
            }
        }
    }
    if(tb==0){
        for(i=0;i<4;i++){
            if(str[i]=='!'){
                for(j = i; j<n; j+=4){
                    str[j] = 'B';
                    kb++;
                }
                break;
            }
        }
    }
    if(tg==0){
        for(i=0;i<4;i++){
            if(str[i]=='!'){
                for(j = i; j<n; j+=4){
                    str[j] = 'G';
                    kg++;
                }
                break;
            }
        }
    }
    if(tr==0){
        for(i=0;i<4;i++){
            if(str[i]=='!'){
                for(j = i; j<n; j+=4){
                    str[j] = 'R';
                    kr++;
                }
                break;
            }
        }
    }
    cout << kr <<" "<<kb <<" "<< ky <<" "<<kg;
    return 0;
}






