#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> taro(n);
    vector<string> hanako(n);
    for(int i=0; i<n; i++){
        cin >> taro[i] >> hanako[i];
    }
    int count_taro=0;
    int count_hanako=0;
    for(int j=0; j<n; j++){
        if(taro[j]<hanako[j]){
            count_hanako+=3;
        }
        else if(taro[j]>hanako[j]){
            count_taro+=3;
        }
        else if(taro[j]==hanako[j]){
            count_taro++;
            count_hanako++;
        }
    }
    cout << count_taro << " " << count_hanako <<endl;
}
/*感想：簡単、ここにきて楽な問題が来たわね、
        文字列は比較演算子で較べられるので
        if文で条件分岐してね*/