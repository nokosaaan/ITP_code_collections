#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,b,f,r,v;
    cin >> n;
    vector<vector<int>> s1(3,vector<int>(10,0));
    vector<vector<int>> s2(3,vector<int>(10,0));
    vector<vector<int>> s3(3,vector<int>(10,0));
    vector<vector<int>> s4(3,vector<int>(10,0));
    for(int i=0; i<n; i++){
        cin >> b >> f >> r >> v;
        if(b==1){
            s1.at(f-1).at(r-1)+=v;
            if(v<0) v=0;
        }
        else if(b==2){
            s2.at(f-1).at(r-1)+=v;
            if(v<0) v=0;
        }
        else if(b==3){
            s3.at(f-1).at(r-1)+=v;
            if(v<0) v=0;
        }
        else if(b==4){
            s4.at(f-1).at(r-1)+=v;
            if(v<0) v=0;
        }
    }
    for(int j=0; j<4; j++){
        if(j==0){
            for(int k=0; k<3; k++){
                for(int l=0; l<10; l++){
                    cout << " " << s1.at(k).at(l);
                }
                cout << endl;    
            }
        }
        else if(j==1){
            for(int m=0; m<3; m++){
                for(int o=0; o<10; o++){
                    cout << " " << s2.at(m).at(o);
                }
                cout << endl;
            }
        }
        else if(j==2){
            for(int p=0; p<3; p++){
                for(int q=0; q<10; q++){
                    cout << " " << s3.at(p).at(q);
                }
                cout << endl;
            }
        }
        else if(j==3){
            for(int s=0; s<3; s++){
                for(int t=0; t<10; t++){
                    cout << " " << s4.at(s).at(t);
                }
                cout << endl;                
            }
        }
        if(j!=3){
            cout << "####################" << endl;
        }
        
    }

}
/*感想：難しい、二次元配列の問題。要素を取得して足し引きするだけ
        なのだが、いかんせん字面がいかつすぎる。
        あとは二重dor文をうまく運用できるかが鍵となる。*/