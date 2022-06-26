#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    if(a>b){
        cout << a << " " << ">" << " " << b << endl;
    }
    else if(a==b){
        cout << a << " " << "==" << " " << b << endl;
    }
    else if(a<b){
        cout << a << " " << "<" << " " << b << endl;
    }
}
/*感想：普通、条件分岐の基本問題。
        今までの知識で全ていけるので
        あまり困らないはず。*/