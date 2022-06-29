#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while(true){
        cin >> s;
        if(s=="0") break;
        int sum=0;
        vector<int> sep(s.size());
        for(int i=0; i<s.size(); i++){
            sep[i]=s[i]-'0';
        }
        for(int j=0; j<s.size(); j++){
            sum+=sep[j];
        }
        cout << sum << endl;
    }
}
/*感想：普通、int型だと各位の要素を抽出しにくいので、
        string型にして、char型の0がint型では48として認識
        されることを利用して組みました。このことは以前の
        問題でも扱っているので覚えていれば問題ないはず。*/