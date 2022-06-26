#include<bits/stdc++.h>
using namespace std;

int main(){
    while(true){
        int H,W;
        cin >> H >> W;
        if(H==0&&W==0) break;
        string s;
        for(int i=0; i<W; i++){
            s+="#";
        }
        for(int j=0; j<H; j++){
            cout << s << endl;
        }
        cout << endl;
    }
}
/*感想：普通、長方形または正方形を
        #を使って表現する問題。
        一つ目のfor文の内容が思いつけるかが
        センスの問われるところだろう。
        ちなみにこの問題は次の問題の布石
        でもあるので要チェックだ。*/