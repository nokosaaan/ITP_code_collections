#include<bits/stdc++.h>
using namespace std;

int main(){
    while(true){
        int n,x;
        cin >> n >> x;
        if(n==0&&x==0) break;
        vector<int> vec(n);
        for(int i=0; i<n; i++){
            vec[i]=i+1;
        }
        int c=0;
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                for(int l=0; l<n; l++){
                    if(vec[j]+vec[k]+vec[l]==x&&j!=k&&j!=l&&k!=l){
                        c++;
                    }
                }
            }
        }
        c/=6;
        cout << c << endl;
        
    }
}
/*感想：難しい、配列に1~nまでの数を格納し、3重for文+if文で条件分岐
        を行い、変数cで組み合わせの数を管理している。
        3重for文を使う勇気と、数える条件をうまく制限できるかが
        攻略の鍵となる。*/