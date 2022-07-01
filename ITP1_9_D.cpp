#include<bits/stdc++.h>
using namespace std;

void print(string s, int &a, int &b){
    for(int i=a; i<=b; i++){
        cout << s[i];
    }
    cout << endl;
}
string replace(string s, int &a, int &b, string t){
    for(int j=a; j<=b; j++){
        s[j]=t[j-a];
    }
    return s;
}
string reverse(string s, int &a, int &b){
    string t=s;
    for(int k=a; k<=b; k++){
        t[k]=s[b-(k-a)];
    }
    return t;
}
int main(){
    string str,c,d;
    cin >> str;
    int q,a,b;
    cin >> q;
    for(int i=0; i<q; i++){
        cin >> c >> a >> b;
        if(c=="print"){
            print(str,a,b);
        }
        else if(c=="replace"){
            cin >> d;
            str=replace(str,a,b,d);
        }
        else if(c=="reverse"){
            str=reverse(str,a,b);
        }
    }
}

/*感想：難しい、int main()の中身はある程度容易に思いつくが、
        各関数の中身の[]の数字を決定していくのが困難、
        これは実験してそれっぽいのを探り当てていくしかない。
        無論最初から思いついていたならそれに越したことはない。*/