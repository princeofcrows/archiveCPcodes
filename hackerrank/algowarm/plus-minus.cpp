#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    double a, b, c, n;
    cin >> n;
    vector<int> arr(n);
    a = b = c = 0;
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
       if(arr[arr_i]>0) a++;
       if(arr[arr_i]<0) b++;
       if(arr[arr_i]==0) c++;
    }
    printf("%lf\n%lf\n%lf", a/n, b/n, c/n);
    return 0;
}
