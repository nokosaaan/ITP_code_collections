#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int s =a/b;
    int t =a%b;
    cout << s << " " << t << " " << fixed << setprecision(8) << (double)a/(double)b << endl;
}
/*感想：普通、小数第8位くらいまで表示しなきゃ
        ACもらえないらしいので、それに対応したコマンド
        をググって引っ張ってきました。(型名)型名 変数名
        で(型名)の型名にcastできることは覚えておこう！*/