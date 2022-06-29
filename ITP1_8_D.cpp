#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    string p;
    cin >> s >> p;
    s+=s;
    bool b=false;
    
    for(int i=0; i<p.size(); i++){
        for(int j=0; j<s.size(); j++){ 
        if(s[j]==p[i]){
            for(int k=0; k<(p.size())-i; k++){
                    if(s[j+k]==p[i+k]){
                        if(k==(p.size())-1) b=true;
                    }
                    else break;
            }
        }
        if(b==true) break;
    }
    if(b==true) break;
    }   
    //i+k=p.size()-1
        
    
    if(b==true) {
            cout << "Yes" << endl;
        }
    else cout << "No" << endl;
}
/*感想：難しい、最初問題の意味を誤解してて結構時間がかかった。
        ヒントに文字列sを加工しましょうって書いてあったので
        sを二つ連結した形にして疑似的にリング状にした。
        そのあともいろいろ難しくて、一致する箇所を探して、
        そのあとも全て一致したらtrueにしてYesを出力する
        みたいな感じでやったんだけど自分でもよくわかってない
        節があるのでアレ()3重もfor文いらなかったかもしれない、
        もうちょっとコードの改善余地はあると思う。*/