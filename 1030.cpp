/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mateus Santos Lucas 
Linguagem   : C++
Problema    : https://judge.beecrowd.com/pt/problems/view/1030
Data        : 09/06/2026
Objetivo    : 
Aprendizado : <<<Descrever o que foi aprendido com este exercício>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <iostream>
using namespace std;

int josepheus(int n, int k) {
    int sobrevivente = 0;
    
    for (int i=2; i<=n; i++) {
        sobrevivente = (sobrevivente + k) % i;
    }
    return sobrevivente + 1;
}
    
    int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int nc;
        if (cin>>nc) {
            for(int case_num = 1; case_num <=nc; ++case_num) {
                int n, k;
                cin >> n >> k;
                cout <<"Case " << case_num << ": " << josepheus(n,k) <<"\n";
            }
                
        }
    return 0;
}
