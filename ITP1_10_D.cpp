#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int t1=0;
    int t2=0;
    long long t3=0;
    cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    vector<int> z(n);
    for(int i=0; i<n; i++){
        cin >> x[i];
    }
    for(int j=0; j<n; j++){
        cin >> y[j];
        z[j]=x[j]-y[j];
        if(z[j]<0){
            z[j]=y[j]-x[j];
        }
        t1+=z[j];
        t2+=z[j]*z[j];
        t3+=z[j]*z[j]*z[j];
    }
    sort(z.begin(),z.end());
    cout << t1 << endl;
    cout << fixed << setprecision(10) << sqrt(t2) << endl;
    cout << fixed << setprecision(10) << pow(t3,(double)1/(double)3) << endl;
    cout << z[n-1] << endl;
}
/*
    感想:普通、10章を通じて小数点の扱いには慣れてきたので
            おそらく問題ないだろう。n乗根を求めるときに
            pow()を使うのは有名らしいので覚えておくこと。
            あとデータの都合上3乗のやつが大きくなりすぎた
            ためにここだけlong long型で処理してます。
*/