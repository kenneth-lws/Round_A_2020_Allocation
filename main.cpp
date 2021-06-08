#include <iostream>
#include <string>
#include <stdlib.h>
#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

int t, b, n, a;
int answer;


int solve(){
    int ans = 0;
    vector<int> an;
    cin >> n >> b;
    for (int j = 0; j < n; j++){
        cin >> a;
        an.push_back(a);
    }
    sort(an.begin(), an.end());

    for (int i = 0; i < n; i++){
        if (b >= an.at(i)){
            b -=an.at(i);
            ans++;
        }else{
            break;
        }
    }
    return ans;
}


int main(){
    cin >> t;
    for (int i = 0; i < t; i++){
        answer = solve();
        cout << "Case #" << i+1 <<": " << answer << endl;
    }
    return 0;
}
