#include<bits/stdc++.h>
using namespace std;

string shuffle(string &a,int &b){
    string t=a;
   for(int k=0; k<a.size()-b; k++){

        t[k]=a[b+k];
    }
    for(int j=a.size()-b; j<a.size(); j++){
        
        t[j]=a[j-a.size()+b];
    }

    return t;
}
int main(){
    string s,u;
    int m,h;
    while(true){
        cin >> s ;
        if(s=="-") break;
        cin >> m;
        u=s;
        for(int i=0; i<m; i++){
            cin >> h;
            u=shuffle(u,h);
            
        }
        s=u;
        cout << s << endl;
    }
    
}
/*感想：難しい、文字入れ替えるのは別の関数に任せるとして
        []の中身を考えるのに時間がかかる。2重for文かfor文
        2つかの選択は試している途中で気付きたいところ*/