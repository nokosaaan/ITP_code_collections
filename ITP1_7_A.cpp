#include<bits/stdc++.h>
using namespace std;
int main(){
    while(true){
        int m,f,r;
        cin >> m >> f >> r;
        if(m==-1&&f==-1&&r==-1) break;
        
        if(m==-1||f==-1){
            cout << "F" << endl;
        }
        else if(m+f>=80){
            cout << "A" << endl;
        }
        else if(m+f<80&&m+f>=65){
            cout << "B" << endl;
        }
        else if(m+f<65&&m+f>=50){
            cout << "C" << endl;
        }
        else if(m+f<50&&m+f>=30){
            if(r>=50){
                cout << "C" << endl;
            }
            else cout << "D" << endl;
        }
        else if(m+f<30){
            cout << "F" << endl;
        }
        
    }
}
/*感想：普通、条件が多すぎるのでそれらを整理する
        力が求められる。基本的なことしかやっていないので
        いままでの強烈な問題をこなしてきた諸君には
        多少楽に感じるかもしれない*/