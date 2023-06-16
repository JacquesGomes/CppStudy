#include <bits/stdc++.h>
#include <unistd.h>

using namespace std;

class Tarefa
{
private:
    string atribuidaPor;
    string responsavel;
    string titulo;
    string assunto;
    string descricao;
    string notas;
    string status;
    string prioridade;
    string dataInicio;
    string dataFim;

public:
    Tarefa() {}
    Tarefa(string atribuidaPor, string responsavel, string titulo, string assunto, string descricao, string notas, string status, string prioridade, string dataInicio, string dataFim) : atribuidaPor(atribuidaPor), responsavel(responsavel), titulo(titulo), assunto(assunto), descricao(descricao), notas(notas), status(status), prioridade(prioridade), dataInicio(dataInicio), dataFim(dataFim) {}

    // Getters e Setters
    string getAtribuidaPor() const
    {
        return atribuidaPor;
    }

    void setAtribuidaPor(const string &atribuidaPor)
    {
        this->atribuidaPor = atribuidaPor;
    }

    string getResponsavel() const
    {
        return responsavel;
    }

    void setResponsavel(string responsavel)
    {
        this->responsavel = responsavel;
    }

    string getTitulo() const
    {
        return titulo;
    }

    void setTitulo(const string &titulo)
    {
        this->titulo = titulo;
    }

    string getAssunto() const
    {
        return assunto;
    }

    void setAssunto(const string &assunto)
    {
        this->assunto = assunto;
    }

    string getDescricao() const
    {
        return descricao;
    }

    void setDescricao(const string &descricao)
    {
        this->descricao = descricao;
    }

    string getNotas() const
    {
        return notas;
    }

    void setNotas(const string &notas)
    {
        this->notas = notas;
    }

    string getStatus() const
    {
        return status;
    }

    void setStatus(const string &status)
    {
        this->status = status;
    }

    string getPrioridade() const
    {
        return prioridade;
    }

    void setPrioridade(const string &prioridade)
    {
        this->prioridade = prioridade;
    }

    string getDataInicio() const
    {
        return dataInicio;
    }

    void setDataInicio(const string &dataInicio)
    {
        this->dataInicio = dataInicio;
    }

    string getDataFim() const
    {
        return dataFim;
    }

    void setDataFim(const string &dataFim)
    {
        this->dataFim = dataFim;
    }

    void getTarefaInput();

    void printTarefa(string fileName);
};

void Tarefa::getTarefaInput()
{

    string temp;

    cout << "Atribuída por: ";
    getline(cin, temp);
    this->setAtribuidaPor(temp);

    cout << "Responsável: ";
    getline(cin, temp);
    this->setResponsavel(temp);

    cout << "Título: ";
    getline(cin, temp);
    this->setTitulo(temp);

    cout << "Assunto: ";
    getline(cin, temp);
    this->setAssunto(temp);

    cout << "Descrição: ";
    getline(cin, temp);
    this->setDescricao(temp);

    cout << "Notas: ";
    getline(cin, temp);
    this->setNotas(temp);

    cout << "Status: ";
    getline(cin, temp);
    this->setStatus(temp);

    cout << "Prioridade: ";
    getline(cin, temp);
    this->setPrioridade(temp);

    cout << "Data de início: ";
    getline(cin, temp);
    this->setDataInicio(temp);

    cout << "Data de entrega: ";
    getline(cin, temp);
    this->setDataFim(temp);
}

void Tarefa::printTarefa(string fileName)
{

    char currentDir[FILENAME_MAX];

    getcwd(currentDir, sizeof(currentDir));

    cout << currentDir << "\n";

    string caminho = "/Tarefas/output.txt";

    string tempFilename = currentDir + caminho;

    cout << tempFilename << endl;

    ofstream arquivo_saida(tempFilename);

    arquivo_saida << "Atribuída por: " << this->atribuidaPor << '\n';

    arquivo_saida << "Responsável: " << this->responsavel << '\n';

    arquivo_saida << "Título: " << this->titulo << '\n';

    arquivo_saida << "Assunto: " << this->assunto << '\n';

    arquivo_saida << "Descrição: " << this->descricao << '\n';

    arquivo_saida << "Notas: " << this->notas << '\n';

    arquivo_saida << "Status: " << this->status << '\n';

    arquivo_saida << "Prioridade: " << this->prioridade << '\n';

    arquivo_saida << "Data de início: " << this->dataInicio << '\n';

    arquivo_saida << "Data de entrega: " << this->dataFim << '\n';

    arquivo_saida.close();

    cout << "Tarefa impressa com sucesso no arquivo " << fileName << '\n';
}

int main()
{

    Tarefa tarefinha;

    tarefinha.getTarefaInput();

    string fileName = "output.txt";
    tarefinha.printTarefa(fileName);

    return 0;
}