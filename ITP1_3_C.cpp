#include<bits/stdc++.h>
using namespace std;

int main(){
    while(true){
        int x,y;
    bool a=false;
    for(int i=0; i<3000; i++){
        cin >> x >> y;
        if(x==0&&y==0) {
            a=true;
            break;
        }
        if(x>=y){
            cout <<y << " " << x << endl;
        }
        else if(x<y){
            cout << x << " " << y << endl;
        }
    }
    if(a==true) break;
}
}
/*感想：簡単、今までの条件分岐問題となんら
        変わりない。while抜ける基準をbool値
        で管理してます。*/