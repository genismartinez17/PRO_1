#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef vector<int> Fila;
typedef vector<Fila> Quadrat;

Quadrat llegir_mat(int n) {
    Quadrat mat(n, Fila (n));
    for (int i = 0;i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> mat[i][j];
        }
    }
    return mat;
}

bool comp_fil (Fila vec){
    sort(vec.begin(), vec.end());
    if(vec[0] != 1) return false;
    int aux = 1;
    for (int i = 1; i < vec.size(); ++i){
        if (vec[i] != aux+1) return false;
        aux = vec[i];
    }
    return true;
}

bool comp_col (Quadrat q){
    for (int i = 0; i < q.size(); ++i){
        Fila aux(q.size(), 0);
        for (int j = 0; j < q.size(); ++j) aux[j] = q[j][i];
        if(not comp_fil(aux)) return false;
    }
    return true;
}

bool es_llati(const Quadrat& q){
    int lon = q.size();
    //Quadrat aux = q;
    for (int i = 0; i < lon; ++i){
        Fila aux = q[i];
        if(not comp_fil(aux)) return false;
    }
    //files comprobades

    for (int i = 0; i < lon; ++i){
        if(not comp_col(q)) return false;
    }
    //columnes comprobades

    return true;
}


int main() {
    int n;
    cin >> n;
    Quadrat q = llegir_mat(n);
    cout << es_llati(q) << endl;
}