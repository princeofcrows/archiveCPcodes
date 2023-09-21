#include <bits/stdc++.h>
using namespace std;
#define f1 first
#define s2 second

string star[1005];
queue < pair < int, pair <int, int> > > q;
set <int> row[1005];
set <int> col[1005];
set <int>::iterator it;

void proc(int x, int y, int d){
    q.push({d, {x, y}});
    col[y].erase(x);
    row[x].erase(y);
}

int main(){
    //freopen("in.txt", "r", stdin);
    int i, j, n, x1, y1, x2, y2, m, k, x, y, d;
    cin >> n >> m >> k;

    for(i=0;i<n;i++) cin >> star[i];

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            row[i].insert(j);
            col[j].insert(i);
        }
    }

    cin >> x1 >> y1 >> x2 >> y2;

    x1--;
    x2--;
    y1--;
    y2--;

    q.push({0, {x1, y1}});

    while(!q.empty()){
        d = q.front().f1;
        x = q.front().s2.f1;
        y = q.front().s2.s2;
        q.pop();
        if(x==x2&&y==y2){
            cout << d;
            return 0;
        }
        while(1){
            it = col[y].lower_bound(x);
            if(it==col[y].end()||(*it-x)>k||star[*it][y]=='#') break;
            proc(*it, y, d+1);
            //cout << "ok";
        }
        while(1){
            it = col[y].lower_bound(x);
            if(it==col[y].begin()) break;
            it--;
            if((x-*it)>k||star[*it][y]=='#') break;
            proc(*it, y, d+1);
        }
        while(1){
            it = row[x].lower_bound(y);
            if(it==row[x].end()||(*it-y)>k||star[x][*it]=='#') break;
            proc(x, *it, d+1);
        }
        while(1){
            it = row[x].lower_bound(y);
            if(it==row[x].begin()) break;
            it--;
            if((y-*it)>k||star[x][*it]=='#') break;
            proc(x, *it, d+1);
        }
    }
    cout << -1;
    return 0;
}











