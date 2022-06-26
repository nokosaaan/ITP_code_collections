#include<bits/stdc++.h>
using namespace std;

int main(){
    while(true){
        int H,W;
        cin >> H >> W;
        if(H==0&&W==0) break;
        string s,m;
        for(int i=0; i<W; i++){
            s+="#";
        }
        for(int n=0; n<W; n++){
            if(n==0||n==W-1){
                m+="#";
            }
            else{
                m+=".";
            }
        }

        for(int j=0; j<H; j++){
            if(j==0||j==H-1){
                cout << s << endl;
            }
            else{
               cout << m << endl;
            }
            }
        cout << endl;
    }
}
/*感想：難しい、A問題の応用である。
        一番上と一番下はAと同様にできるのだが、
        その間は端が#で中身は.の空洞状態になっている。
        これを条件分岐で表現できるかどうかが応用力を
        試されているといってもよいだろう。今回は
        表示する文字列を二つに分けてそれぞれ条件付きで
        coutしている。個人的にはかなり好きな問題。*/