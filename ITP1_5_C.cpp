#include<bits/stdc++.h>
using namespace std;

int main(){
    while(true){
        int H,W;
        cin >> H >> W;
        if(H==0&&W==0) break;
        string s,t;
        for(int i=0; i<W; i++){
            for(int n=0; n<=W/2; n++){
                if(i==2*n){
                    s+="#";
                }
                else if(i==2*n+1){
                    s+=".";
                }
            }
        }
        for(int j=0; j<W; j++){
            for(int m=0; m<=W/2; m++){
                if(j==2*m){
                    t+=".";
                }
                else if(j==2*m+1){
                    t+="#";
                }
            }
        }
        for(int l=0; l<H; l++){
            for(int p=0; p<=H/2; p++){
                if(l==2*p){
                    cout << s << endl;
                }
                else if(l==2*p+1){
                    cout << t << endl;
                }
            }
            
        }
        cout << endl;
    }
}
/*感想：難しい、Bで終わりかと思った？残念だったな！
        今回はチェック柄を表現するのだが、基本的なことは
        A,Bとかわりはない。ただし記述量は増える。
        偶奇で条件分岐しているが範囲設定が煩雑でやっていて
        しんどかったのでもっとシンプルな解法もあるはず。
        それとBで言い忘れていたが、.はchar型、#はstring型
        なので通常はエラーが起きてしまう。なので、ダブルクォーテーション
        で囲って.をstring型にcastする必要があることをお忘れなく！*/