#include <bits/stdc++.h>
using namespace std;

int main(){
    //freopen("in.txt", "r", stdin);
    int n, p, i, j;
    string str, str2;
    scanf("%d%d", &n, &p);
    cin >> str;
    for(i=n-1;i>=0;i--){
        for(char ch=str[i]+1; ch<p+'a'; ch++){
            if(i-1>=0&&str[i-1]==ch) continue;
            if(i-2>=0&&str[i-2]==ch) continue;
            for(j=0;j<i;j++){
                printf("%c", str[j]);
            }
            str[i] = ch;
            printf("%c", str[i]);
            for(j=i+1;j<n;j++){
                for(char c2='a';c2<p+'a';c2++){
                    if(j-1>=0&&str[j-1]==c2) continue;
                    if(j-2>=0&&str[j-2]==c2) continue;
                    printf("%c", c2);
                    str[j] = c2;
                    break;
                }
            }
            return 0;
        }
    }
    printf("NO");
    return 0;
}
