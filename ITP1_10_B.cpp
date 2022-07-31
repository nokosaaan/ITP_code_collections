#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
    int a,b,c;
    double S,L,h,x;
    cin >> a >> b >> c ;
    S=a*b*sin(c*(M_PI/180))/2.00000;
    //a*h/2=S
    h=2.0000*S/a;
    /*
        a,b以外の辺の長さをxとすると、余弦定理より、
        cos(c*M_PI/180)=a*a+b*b-x*x/2*a*b;
        x*x=a*a+b*b-2*a*b*cos(c*M_PI/180);
        x=sqrt(a*a+b*b-2*a*b*cos(c*M_PI/180));
        で求められる。
    */
    x=sqrt(a*a+b*b-2*a*b*cos(c*M_PI/180));
    L=a+b+x;
    cout << fixed << setprecision(8) << S << endl;
    cout << fixed << setprecision(8) << L << endl;
    cout << fixed << setprecision(8) << h << endl;
}

/*感想:難しい、三角関数がラジアンで表現してあげないと
        うまく機能しないことをわかっていれば、Sとhは
        すんなりでてくる。問題はLで、どういう風に表現
        するのか悩むかもしれない。ヘロンの公式を考えると、
        xの四次方程式を解かなければいけないので現実的
        でない。三平方の定理から導こうとすると、sqrtを
        複数回使うことになり、値のずれが大きくなる。
        最終的に余弦定理を使うことによってうまくいったが、
        他にも方法があるかもしれないので、ぜひ試してほしい。
        さいごに、問題文には、0.0001以下の誤差は許容する
        とあるので、その小数点までは一致している必要がある。
        そこで1_4_Aでやったfixed << setprecision(n)で
        小数点第n位まで表示してくれる方法があったことを
        思い出せば、この問題は晴れてACをとることができる。
        今までに習った内容を駆使して解く問題は良問だって
        はっきりわかんだね。


*/
