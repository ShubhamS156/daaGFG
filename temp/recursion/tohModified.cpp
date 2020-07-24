#include <bits/stdc++.h>

using namespace std;




void toh(int N, int from, int to, int aux, long long *moves) {

    if(N==1){
    cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
    *moves=*(moves)+1;
    return;
    }

    toh(N-1,from,aux,to,moves);
    cout<<"move disk "<<N<<" from rod"<<from<<" to rod "<<to<<endl;
    *moves=*(moves)+1;
    toh(N-1,aux,to,from,moves);


}







int main() {

    int T;
    cin >> T;
    while (T--) {
        long long moves = 0;
        int N;
        cin >> N;
        toh(N, 1, 3, 2, &moves);
        cout << moves << endl;
    }
    return 0;
}
