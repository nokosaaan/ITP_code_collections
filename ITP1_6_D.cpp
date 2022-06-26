#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> a(n,vector<int>(m));
    vector<int> b(m);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a.at(i).at(j);
        }
    }
    for(int l=0; l<m; l++){
        cin >> b.at(l);
    }
    vector<int> c(n);
    for(int p=0; p<n; p++){
        for(int q=0; q<m; q++){
            c.at(p)+=a.at(p).at(q)*b.at(q);
        }
        cout << c.at(p) << endl;
    }
}
/*感想：普通、行列の掛け算を実装している。
        大学で習っていたり、自学自習で
        行列に触れている人からすれば
        なんてことない問題。そのうえ一方の行列が
        m×1の行列なので普通の配列で表現できる。*/