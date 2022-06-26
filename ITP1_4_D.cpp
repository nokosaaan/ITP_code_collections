#include<bits/stdc++.h>
using namespace std;

int main(){
    long long N;
    cin >> N;
    vector<long long> vec(N);
    for(long long i=0; i<N; i++){
        cin >> vec.at(i);
    }
    sort(vec.begin(),vec.end());
    long long sum=0;
    for(long long j=0; j<N; j++){
        sum+=vec[j];
    }
    cout << vec[0] << " " << vec[N-1] << " "  << sum << endl;
}
/*感想：普通、配列のsort()関数を使うだけ、
        sumはfor文回して、どうぞ
        今回扱うデータの数が大きいので、
        int型でなくlong long型になっている。*/