/*
2.
O professor X tem n turmas, ele não sabe quantos alunos tem por turma.
Cada aluno tem 3 notas, se forem maiores ou iguais a 7 é aprovado.
Mostre ao final de cada turma a média da turma. Ao final mostre o total de aprovados e reprovados.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    setlocale(LC_ALL,"portuguese");
	int qntTurmas, a, nt, voltas = 0, ap, rp;
	float nota, somaNota = 0, media = 0;
	char sair;
	//quantidade de turmas
	cout << "Insira a quantidade de turmas: ";
	cin >> qntTurmas;

	for(int i = 1; i <= qntTurmas; i++){
		cout << endl << "---Turma " << i << "---" << endl;
        a = ap = rp = 0;
		do {
            nt = 1;
			cout << "Aluno " << a + 1 << endl;
			while(voltas < 3){
                cout << "Insira o valor de sua " << nt << "a. nota: ";
			    cin >> nota;
			    while(nota < 0){
			        cout << "Nota inválida! Indira uma outra nota: ";
			        cin >> nota;
			    }
			    somaNota += nota;
			    voltas++;
			    nt++;
			}
			media += somaNota / voltas;
			if(media >= 7){
			    ap++;
			}
			else {
				rp++;
			}
			cout << "Acabaram os alunos da turma? ";
			cin >> sair;
			voltas = somaNota = 0;
			a++;
		} while(sair != 's');
		cout << fixed << setprecision(1);
		cout << "--Turma " << i << "--" << endl;
		cout << "Media da turma: " << media << endl;
		cout << "Total de Aprovados: " << ap << endl;
		cout << "Total de Reprovados: " << rp << endl;
		media = 0;
	}

	return 0;
}
