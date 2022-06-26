#include<bits/stdc++.h>
using namespace std;

int main(){
    while(true){
    bool a=false;
    vector<int> num(10000);
    for(int i=0; i<10000; i++){
        cin >> num[i];
        if(num[i]==0){
            a=true;
            break;
        }
    }
    if(a==true) break;
    for(int j=0; j<10000; j++){
        cout << "Case" << " " << j+1 << ":" << " " << num[j] << endl;
    }
    }
    
}
/*感想：普通、1~10000の数字を配列に格納して
        あとは実際の数と配列の0から始まる特性
        を調整してね！という感じ。whileを抜ける
        条件は問題文見て*/