#include<bits/stdc++.h>
using namespace std;

int main(){
    while(true){
        string s;
        getline(cin,s);
        for(int i=0; i<s.size(); i++){
            if('a'<=s[i]&&s[i]<='z'){
            cout << char(s[i]+'A'-'a');
        }
        else if('A'<=s[i]&&s[i]<='Z'){
            cout << char(s[i]+'a'-'A');
        }
        else if(s[i]==',') cout << ',';
        else if(s[i]==' ') cout << ' ';
        else if(s[i]=='.') cout << '.';
        else cout << s[i];
        }
        cout << endl;
        break;
    }
        
    
}
/*感想：難しい、まず第一の関門に小文字と大文字の相互変換を
        どう実装するかがあり、第二関門に空白行をどうやって文字として
        認識させるかの二つの関所がある。相互変換はchar型が数字と同じように
        扱えることを利用して上のような計算式を用意すればよく、
        空白行はgetline()で文字列として認識される。よってこのコード
        にwhile()構文は特にいらないので、実装する際はこれを除いて考えて
        いただけると助かる。*/