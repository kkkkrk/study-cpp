#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0;i < n;i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    do{
        for (int i = 0;i < n;i++){
            cout << v[i] << " ";
        }
        cout << "\n";
    }while(next_permutation(v.begin(), v.end()));
    return 0;
}