#include <iostream>
#include <fstream>
#include <vector>
#define FILE_NAME "emp.dat"

using namespace std;

//Declaracao da classe Empregado
class Funcionario {
private : 
	int 	funID;
	char 	funNome[100] ;
	char 	funAtrib[100];
	int 	dde,mme,aae;
	int 	ddn,mmn,aan;
public  :
	// Leitura dos Dados do Funcionario
	void readFuncionario(){
		cout<<"DADOS DO FUNCIONARIO"<<endl;
		cout<<"INSIRA A IDENTIDADE DO FUNCIONARIO : " ;
		cin >> funID;
		cin.ignore(1);
		cout<<"NOME DO EMPREGADO : ";
		cin.getline(funNome,100);

		cout<<"INSIRA A ATRIBUICAO : ";
		cin.getline(funAtrib,100);
		
		cout<<"INSIRA A DATA DE ENTRADA :"<<endl;
		cout<<"DIA : "; 
    cin >> dde;
		cout<<"MES : "; 
    cin >>mme;
		cout<<"ANO : "; 
    cin >>aae;
		
		cout<<"INSIRA A DATA DE NASCIMENTO :"<<endl;
		cout<<"DIA : "; 
    cin>>ddn;
		cout<<"MES : "; 
    cin>>mmn;
		cout<<"ANO : "; 
    cin>>aan;
	}
	// FUNCAO PARA IMPRIMIR DADOS DO EMPREGADO
	void printFuncionario() const{
		cout <<"IDENTIDADE DO FUNCIONARIO: "<< funID<<endl
		     <<"NOME DO FUNCIONARIO: "<< funNome <<endl
		     <<"ATRIBUICAO: "<< funAtrib <<endl
		     <<"DATA DE ENTRADA: "<< dde << "/" << mme << "/" << aae           <<endl
		 <<"DATA DE NASCIMENTO: "<< ddn << "/" << mmn << "/"<< aan <<endl;
	}
};

void salvarFuncionarios(const vector<Funcionario>& funcionarios) {
    fstream file;
    file.open(FILE_NAME, ios::out | ios::binary);

    if (!file) {
        cout << "Erro ao criar arquivo..." << endl;
        return;
    }

    for (const Funcionario& func : funcionarios) {
        file.write(reinterpret_cast<const char*>(&func), sizeof(Funcionario));
    }

    file.close();
    cout << "Dados salvos no arquivo." << endl;
}

vector<Funcionario> recuperarFuncionarios() {
    vector<Funcionario> funcionarios;
    fstream file;
    file.open(FILE_NAME, ios::in | ios::binary);

    if (!file) {
        cout << "Erro ao abrir arquivo..." << endl;
        return funcionarios;
    }

    Funcionario func;
    while (file.read(reinterpret_cast<char*>(&func), sizeof(Funcionario))) {
        funcionarios.push_back(func);
    }

    file.close();
    return funcionarios;
}

int main(){
	vector<Funcionario> funcionarios;

    // Leitura dos dados dos funcionarios
    int numFuncionarios;
    cout << "Quantidade de funcionarios: ";
    cin >> numFuncionarios;

    for (int i = 0; i < numFuncionarios; i++) {
        Funcionario func;
        func.readFuncionario();
        funcionarios.push_back(func);
    }

    // Salvar funcionarios no arquivo
    salvarFuncionarios(funcionarios);

    // Recuperar funcionarios do arquivo
    vector<Funcionario> funcionariosRecuperados = recuperarFuncionarios();

    // Imprimir funcionarios recuperados
    for (const Funcionario& func : funcionariosRecuperados) {
        func.printFuncionario();
        cout << endl;
    }

    return 0;
}