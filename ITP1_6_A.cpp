#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i=0; i<n; i++){
        cin >> vec.at(i);
    }
    reverse(vec.begin(),vec.end());
    for(int j=0; j<n; j++){
        cout << vec.at(j);
        if(j!=n-1){
            cout << " ";
        }
        else if(j==n-1){
            cout << endl;
        }
    }
}
/*感想：簡単、1-5-Dからの落差が激しいが、この問題は
        配列の順序を反転させればよいだけなのでreverse()
        関数を使えば終わり。*/