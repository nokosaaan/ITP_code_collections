#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    string op;
    while(true){
        cin >> a >> op >> b;
    if(op=="+"){
        cout << a+b << endl;
    }
    else if(op=="-"){
        cout << a-b << endl;
    }
    else if(op=="*"){
        cout << a*b << endl;
    }
    else if(op=="/"){
        if(b==0) break;
        else{
            cout << a/b << endl;
        }
    }
    else if(op=="?") break;
    }
    
}
/*感想：普通、簡易的な電卓を作るこの問題は
        AtCoderの例題でも出題されていたので
        かなりポピュラーな部類に入る。
        条件分岐をうまく使いこなすのと、0除算
        の扱いをどうするかという部分が
        鍵になるだろう。*/