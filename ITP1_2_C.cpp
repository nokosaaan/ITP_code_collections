#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> num(3);
    for(int i=0; i<3; i++){
        cin >> num[i];
    }
    sort(num.begin(),num.end());
    for(int j=0; j<3; j++){
        cout << num[j];
        if(j!=2){
            cout << " ";
        }
        else{
            cout << endl;
        }
    }
}
/*感想：難しい、sort()を使って
        配列の要素を表示するだけ
        なんだけど、for二回使う
        判断をできるかどうかで
        ちょいと時間かかるかもしれない。
        あと空白の扱いを条件分岐で
        行っているのでこれは慣れが必要。*/
