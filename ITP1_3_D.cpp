#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int count=0;
    for(int i=a; i<=b; i++){
        if(c%i==0) count++;
    }
    cout << count << endl;
}
/*感想：普通、aからbまでの整数の中に
        cの約数がいくつあるかという問題。
        個人的にはこういう問題大好き
        何個あるかというのをcountで
        別個に管理している。
        ifの条件文をよく覚えておいてね、
        今後も出てくるので。*/