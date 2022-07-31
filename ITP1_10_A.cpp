#include<bits/stdc++.h>
using namespace std;

int main(){
    long double x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    long double d2=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
    long double  d1=sqrt(d2);
    cout << fixed << setprecision(10) << d1 << endl;
}
/*
    感想：普通、二点間の距離を求めるプログラム。
            0.0001以下の誤差は許容するので、
            そこまでの小数点は正しい値を算出
            しておくべきだろう。ということで、
            ITP1_4_Aでやった内容を思い出してほしい。
            これが思い出せるかどうかが分け目。
*/