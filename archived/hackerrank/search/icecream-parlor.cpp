#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class IceCream {
    
    public: 
        int flavor; 
        int index;

        IceCream(int f, int i) {
            flavor = f;
            index = i;
       }
};

bool compare(IceCream i, IceCream j){
	return(i.flavor<j.flavor);
}
    
int binarySearch(int first, int last, vector<IceCream> arr, int search) {
	int mid = (first+last)/2;
	int index = -1;
	while(last>=first){
		if(search==arr[mid].flavor){
			index = arr[mid].index;
			break;
		}
		else if(search<arr[mid].flavor){
			last = mid-1;
		}
		else if(search>arr[mid].flavor){
			first = mid+1;
		}
		mid = (first+last)/2;
	}
	return index;
}

int main() {
    int t;
    int n, m;
    cin >> t;
    for(int test = 0; test < t; test++) {       
        cin >> m >> n;
        vector<IceCream> arr;
        arr.reserve(n); 

        for (int i = 0; i < n; i++) {
            int cost;
            cin >> cost;
            arr.push_back(IceCream(cost, i + 1));
        }

        sort(arr.begin(), arr.end(), compare);
        int firstIndex = 100000, secondIndex = 100000;
        for(int i = 0; i < n - 1 ; i++) {
            int search = m - arr[i].flavor;
            if(search >= arr[i].flavor) {
                int index = binarySearch( i + 1, n - 1, arr, search);
                if( index != -1 ) {
                    cout << min(arr[i].index, index) << " " << max(arr[i].index, index) << endl;
                    break;

                }
            }
        }
    }
    return 0;
}


