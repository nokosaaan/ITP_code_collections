#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
    while(true){
        int n;
        int ave=0;
        int ave2=0;
        cin >> n;
        if(n==0) break;
        vector<int> score(n);
        for(int i=0; i<n; i++){
            cin >> score[i];
            ave+=score[i];
            ave2+=(score[i]*score[i]);
        }
        /*
        i)
            ave=Σ(i=0~n-1)score[i];
            d={Σ(i=0~n-1)(score[i]-ave/n)*(score[i]-ave/n)}/n
             ={Σ(i=0~n-1)(n*score[i]-ave)*(n*score[i]-ave)}/n^3

        ii)
            ave2=Σ(i=0~n-1)(score[i])^2;
            d=(ave2/n)-(ave/n)^2
             ={(n*ave2)-(ave)^2}/n^2
        */
        int d=0;
        /*
        i)
        for(int j=0; j<n; j++){
            d+=(n*score[j]-ave)*(n*score[j]-ave);
        }
        cout << fixed << setprecision(8) << sqrt(d/(n*n*n)) << endl; 
        */
        
        //ii)
        d=(n*ave2)-(ave)*(ave);
        cout << fixed << setprecision(10) << sqrt(d)/n << endl; 
        
    }
    
}

/*
    感想：難しい、分散を求めてから標準偏差を求める作業は
            高校の数IAでさんざんやるので懐かしい気持ちに
            なった方もいらっしゃるのではないでしょうか。
            履修済みの方はご存知かと思いますが、
            分散の求め方は2通りありました。
            i)(偏差)^2の合計の平均で求める。
            ii)(二乗平均)-(平均の二乗)で求める。
            試してみたところ、i)はnで割る回数が多いために
            値のずれが大きかったので断念しました。
            ii)でやっていく途中で、nで割る回数をできる
            だけ最小にしていきたいのですが、ここで工夫
            が必要です。わざとnで割る作業を遅らせ、
            最後sqrtを使うときにii)だとn^2でわるので、外に出して、
            sqrt(d)/nで標準偏差を求めていることになります。
            ここは発想の有無が勝敗をわけそうですね。
*/