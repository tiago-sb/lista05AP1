/*
1.
Fa�a um algoritmo para uma loja, essa loja tem algumas regrinhas especiais:
-   Ela vai atender uma quantidade de clientes que ser� indicada ao abrir a loja.
-   Cada cliente pode entrar com quantos valores (produtos) quiser,
quando ele entrar com valor negativo encerra a compra dele.
(n�o considerar esse valor negativo para calcular m�dia dele.
-   Mostre a cada cliente a m�dia de valor dos produtos dele.
-   Ao fim mostre a m�dia de gastos por clientes.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
    int qntClientes, prod = 0, k = 0;
    float compra, somaCompra = 0, somaCompraTotal = 0, mediaTotal = 0;
    cout << "Insira a quantidade de clientes: ";
    cin >> qntClientes;
    //la�o que calcula o total de gasto por cliente
    for(int i = 1; i <= qntClientes; i++){
    	cout << "--Cliente "<< i << "--" << endl;
    	do {
    		cout << "Insira o valor do seu " << k + 1 << "o. produto: ";
    		cin >> compra;
    		if(compra >= 0){
    			somaCompra += compra;
    			prod++;
			}
			k++;
		} while (compra >= 0);
		//impress�es do gasto individual do cliente
		mediaTotal += (somaCompra / prod);
		cout << endl << "Resultados cliente " << i << ": "<< endl;
		cout << fixed << setprecision(2);
		cout << "Sua m�dia foi dos produtos: R$ " << somaCompra / prod << endl;
		somaCompra = prod = k = 0;
		cout << endl;
	}
	//impress�o da m�dia de gastos totais dos clientes
	cout << "---------------------" << endl;
	cout << "A m�dia de gastos por cliente foi: R$ " << mediaTotal / qntClientes << endl;

    return 0;
}
