#include<iostream>
#include<string>
using namespace std;

//Controle de estoque de uma concessionaria de moto

struct tConcessionaria{
	int codigo; 
	string nome;
	string marca;
	int ano;
	float preco;
	float km;
	string descricao;
};

int main(){
	tConcessionaria m[50];
	int opcao, cont=0, i, buscaCod, opcao2;
	bool existe;
	string busca, confirmar;
	
	cout << "\t\t--------LOJA DE MOTOS--------\n\n"; 
	do{
		cout << "------------------------------";
		cout << "\n1- Cadastrar moto";
		cout << "\n2- Buscar moto";
		cout << "\n3- Alterar informacoes";
		cout << "\n4- Retirar do estoque";
		cout << "\n5- Listar motos do estoque";
		cout << "\n6- Sair do sistema";
		cout << "\n----------------------------";
		
		cout << "\n\nO que deseja? ";
		cin >> opcao;
		system("cls");
		
		switch(opcao){
			case 1: if(cont<50){
					cout << "\t\t---CADASTRO---";
					do{
						existe = false;
						cout << "\n\nCadastre um codigo para a moto: ";
						cin >> m[cont].codigo;
						for(i=0;i<cont;i++){
							if(m[i].codigo==m[cont].codigo){
								existe = true;
								cout << "\n\n\tCODIGO EXISTENTE!";
							}
						}
					}while(existe);
					cout << "\nMarca: ";
					getchar();
					getline(cin, m[cont].marca);
					cout << "\nNome: ";
					getline(cin, m[cont].nome);
					cout << "\nDescricao: ";
					getline(cin, m[cont].descricao);
					cout << "\nAno: ";
					cin >> m[cont].ano;
					cout << "\nQuilometragem: ";
					cin >> m[cont].km;
					cout << "\nPreco de venda: ";
					cin >> m[cont].preco;
					
					cont++;
				}else{
					cout << "\n\tESTOQUE LOTADO!!";
				}
			break;
			
			case 2: if(cont>0){
					cout << "\t\t---PROCURA---";
					cout << "\n\nPelo que deseja buscar? ";
					cout << "\n\n1- Marca";
					cout << "\n2- Nome";
					cout << "\n3- Codigo\n\n";
					cout << ">> ";
					cin >> opcao2;
					system("cls");
					switch(opcao2){
						case 1: 
							cout << "Digite a marca: ";
							getchar();
							getline(cin, busca);
							for(i=0; i<cont; i++){
								if(m[i].marca==busca){
									cout << "\n\nCODIGO: " << m[i].codigo;
									cout << "\nMarca: " << m[i].marca;
									cout << "\nNome: " << m[i].nome;
									cout << "\nDescricao: " << m[i].descricao;
									cout << "\nAno: " << m[i].ano;
									cout << "\nQuilometragem: " << m[i].km;
									cout << "\nPreco de venda: " << m[i].preco;		
								}
							}
						break;
						
						case 2: cout << "Digite o nome: ";
							getchar();
							getline(cin, busca);
							for(i=0; i<cont; i++){
								if(m[i].nome==busca){
									cout << "\n\nCODIGO: " << m[i].codigo;
									cout << "\nMarca: " << m[i].marca;
									cout << "\nNome: " << m[i].nome;
									cout << "\nDescricao: " << m[i].descricao;
									cout << "\nAno: " << m[i].ano;
									cout << "\nQuilometragem: " << m[i].km;
									cout << "\nPreco de venda: " << m[i].preco;		
								}
							}
						break;
						
						case 3: cout << "Digite o codigo da moto: ";
							cin >> buscaCod;
							for(i=0; i<cont; i++){
								if(m[i].codigo==buscaCod){
									cout << "\nMarca: " << m[i].marca;
									cout << "\nNome: " << m[i].nome;
									cout << "\nDescricao: " << m[i].descricao;
									cout << "\nAno: " << m[i].ano;
									cout << "\nQuilometragem: " << m[i].km;
									cout << "\nPreco de venda: " << m[i].preco;		
								}
							}
						break;
						
						default: cout << "\n\tOPCAO DE BUSCA INEXISTENTE";
					}
				}else{
					cout << "\n\tNAO HA NENHUMA MOTO NO ESTOQUE!!";
				}
			break;
			
			case 3: if(cont>0){
					cout << "Digite o codigo da moto que deseja alterar: ";
					cin >> buscaCod;
					for(i=0; i<cont; i++){
						if(buscaCod==m[i].codigo){
							cout << "\t\t---ALTERAR---";
							cout << "\n\nO que deseja alterar? ";
							cout << "\n\n1- Marca " ;
							cout << "\n2- Nome " ;
							cout << "\n3- Descricao";
							cout << "\n4- Ano";
							cout << "\n5- Quilometragem" ;
							cout << "\n6- Preco de venda ";
							cout << "\n\n>> ";
							cin >> opcao2;
							system("cls");
							
							switch(opcao2){
								case 1: cout << "Digite a marca: ";
									getchar();
									getline(cin, m[i].marca);
									cout << "\nDigite o nome: ";
									getline(cin, m[i].nome);
									cout << "\n\nALTERACAO CONCLUIDA!!";
								break;
								
								case 2: cout << "Digite o nome: ";
									getchar();
									getline(cin, m[i].nome);
									cout << "\n\nALTERACAO CONCLUIDA!!";
								break;
								
								case 3: cout << "Digite a nova descricao: ";
									getchar();
									getline(cin, m[i].descricao);
									cout << "\n\nALTERACAO CONCLUIDA!!";
								break;
								
								case 4: cout << "Digite o novo ano: ";
									cin >> m[i].ano;
									cout << "\n\nALTERACAO CONCLUIDA!!";
								break;
								
								case 5: cout << "Digite a nova quilometragem: ";
									cin >> m[i].km;
									cout << "\n\nALTERACAO CONCLUIDA!!";
								break;
								
								case 6: cout << "Digite o novo preco: ";
									cin >> m[i].preco;
									cout << "\n\nALTERACAO CONCLUIDA!!";
								break;
								
								default: cout << "\n\tOPCAO DE BUSCA INEXISTENTE"; 
							}
						}
					}
				}else{
					cout << "\n\tNAO HA NENHUMA MOTO NO ESTOQUE!!";
				}
			break;
			
			case 4: if(cont>0){
					cout <<"\t\t---EXCLUR---";
					cout << "\n\nDigite o Codigo da moto: ";
					cin >> buscaCod;
					for(i=0; i<cont; i++){
						if(buscaCod==m[i].codigo){
							cout << "\n\tTem certeza que deseja excluir? (sim ou nao) ";
							getchar();
							getline(cin, confirmar);
							if(confirmar=="sim" || confirmar=="Sim"){
								m[i].codigo = m[i+1].codigo;
								m[i].marca = m[i+1].marca;
								m[i].nome = m[i+1].nome;
								m[i].descricao = m[i+1].descricao;
								m[i].ano = m[i+1].ano;
								m[i].km = m[i+1].km;
								m[i].preco = m[i+1].preco;
								cout << "\n\n\tMOTO EXCLUIDA DO ESTOQUE!!";
								cont--;
							}else{
								cout << "\n\n\tEXCLUSAO CANCELADA!!";
							}
						}
					}
				}
			break;
			
			case 5: if(cont>0){
					cout << "\t\t---MOTOS DO ESTOQUE---";
					for(i=0;i<cont;i++){
						cout << "\n\nCODIGO: " << m[i].codigo;
						cout << "\nMarca: " << m[i].marca;
						cout << "\nNome: " << m[i].nome;
						cout << "\nDescricao: " << m[i].descricao;
						cout << "\nAno: " << m[i].ano;
						cout << "\nQuilometragem: " << m[i].km;
						cout << "\nPreco de venda: " << m[i].preco;	
					}
				}else{
					cout << "\n\nNAO HA MOTOS NO ESTOQUE!!";
				}
			break;
			
			case 6:
				break;
			default: cout << "\n\tDIGITE UM OPCAO VALIDA!!";
		}
		
		cout << "\n\n\n";
		system("pause");
		system("cls");
	}while(opcao!=6);
}
