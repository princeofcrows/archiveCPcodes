#include <bits/stdc++.h>
using namespace std;

int x, y, ab[2];
string str;
deque <char> a;
deque <char> b;

int main(){
    //freopen("in.txt", "r", stdin);
    int i, t, c;
    scanf("%d", &t);
    while(t--){
        cin >> str;
        scanf("%d%d", &x, &y);
        ab[0] = ab[1] = 0;
        for(i=0;i<str.length();i++){
            ab[str[i]-'a']++;
        }
        c = 0;
        while(ab[0]){
            if(c==x){
                c = 0;
                if(ab[1]){
                    a.push_back('b');
                    ab[1]--;
                }
                else{
                    a.push_back('*');
                }
            }
            else{
                ab[0]--;
                a.push_back('a');
                c++;
            }
        }
        c = 0;
        while(ab[1]){
            if(c==y){
                c = 0;
                if(!a.empty()){
                    if(a.front()=='a'){
                        b.push_back('a');
                        a.pop_front();
                    }
                    else{
                        ab[1]++;
                        a.pop_front();
                        c = y;
                        continue;
                    }
                }
                else{
                    b.push_back('*');
                }
            }
            else{
                ab[1]--;
                b.push_back('b');
                c++;
            }
        }
        while(!a.empty()){
            printf("%c", a.front());
            a.pop_front();
        }
        while(!b.empty()){
            printf("%c", b.front());
            b.pop_front();
        }
        printf("\n");

    }
    return 0;
}
















