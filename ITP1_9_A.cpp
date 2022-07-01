#include<bits/stdc++.h>
using namespace std;

int main(){
    string W,T;
    cin >> W;
    int count=0;
    while(true){
        cin >> T;
        if(T=="END_OF_TEXT") break;
        for(int l=0; l<T.size(); l++){
            if('A'<=T[l]&&T[l]<='Z'){
                T[l]=T[l]+'a'-'A';
        }
        }
        
        if(W[0]==T[0]){
            for(int k=0; k<W.size(); k++){
                if(W[0+k]==T[0+k]){
                    if(k==W.size()-1&&k==T.size()-1){
                        count++;
                    }
                }
                else break;
            }
        } 
        
    }
    cout << count << endl;
}
/*感想：難しい、問題読み違えてたので時間かかった。
        Wの文字列と完全一致するものを探せばいいので
        わかれば簡単、if文で条件分岐、countで一致数を
        管理してけ！大文字は小文字に変換するけど
        以前の問題を確認すれば大丈夫*/