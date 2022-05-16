#include <bits/stdc++.h>
using namespace std;

string star[10], str;

int check(int i){
    int c = 0;
    for(int j=0;j<str.length();j++){
        bool flag = true;
        for(int l=0;l<star[i].length();l++){
            if(j+l>=str.length()){
                flag = false;
                break;
            }
            if(str[j+l]!=star[i][l]){
                flag = false;
                break;
            }
        }
        if(flag) c++;
    }
    if(c==1) return 1;
    if(c==0) return 0;
    if(c>1) return 2;
}

int main(){
    //freopen("in.txt", "r", stdin);
    int i, j, k, l, n;
    cin >> str;
    star[0] = "Danil";
    star[1] = "Olya";
    star[2] = "Slava";
    star[3] = "Ann";
    star[4] = "Nikita";
    k = 0;
    for(i=0;i<=4;i++){
        j = check(i);
        if(j==1) k++;
        if(j==2){
            cout << "NO";
            return 0;
        }
    }
    if(k>1||k==0){
        cout << "NO";
        return 0;
    }
    cout << "YES";
    return 0;
}











