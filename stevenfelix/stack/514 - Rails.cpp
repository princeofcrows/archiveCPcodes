//price_of_crows
//revolution_for_redemption
//BUET_Mushroom

#include <bits/stdc++.h>

using namespace std;

vector <pair <string, string> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str2, str3, star[200000];

long long ara[200005], ara2[200005];

bool flagar[200005], flagar2[200005];

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}
//____________________________________________________________________________________//
//____________________________________________________________________________________//
//____________________________________________________________________________________//

stack <long long> stk;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d;
    while(1){
        cin >> n;
        if(n==0) break;
        while(1){
            cin >> ara[0];
            if(ara[0]==0) break;
            for(i=1;i<n;i++){
                cin >> ara[i];
            }
            i = 2;
            j = 0;
            stk.push(1);
            while(1){
                if(stk.empty()){
                    stk.push(i);
                    i++;
                }
                else if(stk.top()==ara[j]){
                    stk.pop();
                    j++;
                    if(j==n){
                        cout << "Yes\n";
                        break;
                    }
                }
                else{
                    stk.push(i);
                    if(i>n){
                        cout << "No\n";
                        break;
                    }
                    i++;
                }
            }
            while(!stk.empty()) stk.pop();
        }
        cout << endl;
    }
    return 0;
}




















