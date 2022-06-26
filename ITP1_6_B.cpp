#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a;
    char l;
    cin >> n;
    vector<int> s(13,0);
    vector<int> h(13,0);
    vector<int> c(13,0);
    vector<int> d(13,0);
    for(int i=0; i<n; i++){
        cin >> l >> a;
        if(l=='S'){
            s[a-1]=a;
        }
        else if(l=='H'){
            h[a-1]=a;
        }
        else if(l=='C'){
            c[a-1]=a;
        }
        else if(l=='D'){
            d[a-1]=a;
        }
    }
    for(int j=0; j<13; j++){
        if(s[j]==0){
            cout << 'S' << " " << j+1 << endl;
        }
    }
    for(int k=0; k<13; k++){
        if(h[k]==0){
            cout << 'H' << " " << k+1 << endl;
        }
    }
    for(int m=0; m<13; m++){
        if(c[m]==0){
            cout << 'C' << " " << m+1 << endl;
        }
    }
    for(int p=0; p<13; p++){
        if(d[p]==0){
            cout << 'D' << " " << p+1 << endl;
        }
    }
}
/*感想：難しい、見てください、このfor文の数を(白目)
        まず初期値0の配列を4こ用意します。存在するカードの柄と数字を
        決定するfor文を用意し、中身はif文で条件分岐しときましょう
        すべて入力し終わったら配列の中で0のままになっているところを
        探し、その部分とカードの番号を対応させて表示させるんだよ！
        これの全体像を把握するのに結構時間かかるかも。*/