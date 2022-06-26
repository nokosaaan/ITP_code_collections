#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a<b&&b<c){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
/*感想：普通、条件分岐に論理記号を
        組み合わせたやつ。if以外の
        条件が緩いので特に何も
        考えずにelseで括っちゃって
        大丈夫。*/