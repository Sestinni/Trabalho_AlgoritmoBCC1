#include <iostream>
#include <cstdlib>
using namespace std;

const int Max=5;
struct Cosmeticos {
    int id;
    string marca;
    int dt_vencimento;
    int estoque;
    float valor;
};

void InserirI(Cosmeticos lista[Max], int &quantidade, int &fim){
    char confir;
    Cosmeticos val;
    int aux;
    if(fim<Max-1){
        cout<<"Insira o Id.\n";cin>>val.id;
        cout<<"Insira a Marca.\n";cin>>val.marca;
        cout<<"Insira a Data de Vencimento.\n";cin>>val.dt_vencimento;
        cout<<"Insira a Quantidade de Estoque.\n";cin>>val.estoque;
        cout<<"Insira o Valor.\n";cin>>val.valor;
        cout<<"Confirma as informacoes?(S/N)\n";cin>>confir;
        if(confir=='S'){
            if(fim==-1){
                cout<<"Adicionando no inicio da lista vazia...\n";
                fim++;
                lista[fim]=val;
                quantidade++;
                cout<<"Operacao realizada com sucesso!\n";
            }
            else {
                cout<<"Adicionando no inicio da lista e movendo os elementos para a proxima sessao...\n";
                fim++;
                aux=fim;
                while(aux>0){
                    lista[aux]=lista[aux-1];
                    aux=aux-1;
                }
                lista[aux]=val;
                quantidade++;  
                cout<<"Operacao realizada com sucesso!\n"; 
            }
        }
        else {
            cout<<"Dados nao confirmados.\n";
        }
    }
    else {
        cout<<"Lista cheia";
    }
}
void InserirAU(Cosmeticos lista[Max], int &quantidade, int &fim){
    char confir;
    Cosmeticos val;
    int aux;

    if(fim<Max-1){
        cout<<"Insira o Id.\n";cin>>val.id;
        cout<<"Insira a Marca.\n";cin>>val.marca;
        cout<<"Insira a Data de Vencimento.\n";cin>>val.dt_vencimento;
        cout<<"Insira a Quantidade de Estoque.\n";cin>>val.estoque;
        cout<<"Insira o Valor.\n";cin>>val.valor;
        cout<<"Confirma as informacoes?(S/N)\n";cin>>confir;
        if(confir=='S'){
            if(fim==-1){
                cout<<"Lista vazia, adicionando no inicio da lista...\n";
                fim++;
                lista[fim]=val;
                quantidade++;
                cout<<"Operacao realizada com sucesso!\n";
            }
            else {
                cout<<"Inserindo antes do ultimo item cadastrado...\n";
                fim++;
                aux=fim-1;
                lista[fim]=lista[aux];
                lista[aux]=val;
                quantidade++;
                cout<<"Operacao realizada com sucesso!\n";
            }
        }
        else {
            cout<<"Dados nao confirmados.\n";
        }
    }
    else {
        cout<<"Lista cheia, voltando para o menu...\n";
    }
}
void InserirDX(Cosmeticos lista[Max], int &quantidade, int &fim){
    bool find=false;
    char confir;
    Cosmeticos val;
    int aux=0,pos,i;
    float X;

    if(fim==-1){
        cout<<"Lista vazia, impossivel fazer a comparacao.\n";
    }
    else if(fim>=Max-1){
        cout<<"Lista cheia.\n";
    }
    else {
        cout<<"Digite um valor R$: \n";cin>>X;
        while(aux<=fim && !find){
            if(lista[aux].valor<X){
                find=true;
            }
            else {
                aux++;
            }
        }
        if(find){
            pos=aux+1;
            cout<<"Insira o Id.\n";cin>>val.id;
            cout<<"Insira a Marca.\n";cin>>val.marca;
            cout<<"Insira a Data de Vencimento.\n";cin>>val.dt_vencimento;
            cout<<"Insira a Quantidade de Estoque.\n";cin>>val.estoque;
            cout<<"Insira o Valor.\n";cin>>val.valor;
            cout<<"Confirma as informacoes?(S/N)\n";cin>>confir;
            if(confir=='S'){
                cout<<"Inserindo depois do primeiro item com valor menor que R$"<<X<<"...\n";
                    for(i=fim+1;i>pos;i--){
                        lista[i]=lista[i-1];
                    }
                    lista[pos]=val;
                    quantidade++;
                    fim++;
                    cout<<"Operacao realizada com sucesso!\n";
                }
                else {
                    cout<<"Dados nao confirmados.\n";
                }
        }
        else {
            cout<<"Nao ha cosmeticos com valor menor que R$"<<X<<".\n";
        }
    }
}




//OPCAO APENAS PARA VER SE ESTA FUNCIONANDO A INSERCAO. APOS A RESOLUCAO DE TODOS OS EXERCICIOS FAZER A EXCLUSAO DELE.
void Listar(Cosmeticos lista[Max], int &quantidade, int &fim){
    int aux = 0;

    if(fim!=-1){
        while(aux <= fim){
            cout << "Posicao:"<<aux;
            cout << "\nID: " << lista[aux].id << endl;
            cout << "Marca: " << lista[aux].marca << endl;
            cout << "Data de vencimento: " << lista[aux].dt_vencimento << endl;
            cout << "Estoque: " << lista[aux].estoque << endl;
            cout << "Valor: R$ " << lista[aux].valor << endl;
            cout << "-------------------------\n";
            aux++;
        }
    }
    else {
        cout<<"A lista esta vazia. T_T\n";
    }
}

int main(){
    Cosmeticos lista[Max];
    Cosmeticos val;
    int quantidade,fim,aux,acess;
    char confir;
    bool sinal;
    quantidade=0;
    fim=-1;
    
    do {
        cout<<"\n===== GERENCIAMENTO DE ITENS COSMETICOS LTDA. =====\n";
        cout<<"1  - Inserir cosmetico no inicio da lista\n";
        cout<<"2  - Inserir antes do ultimo cadastrado\n";
        cout<<"3  - Inserir depois do primeiro cosmetico com valor menor que X\n";
        cout<<"4  - Consultar anterior ao cosmetico da marca Y\n";
        cout<<"5  - Remover cosmetico com menor estoque\n";
        cout<<"6  - Remover posterior ao cosmetico com ID X\n";
        cout<<"7  - Consultar cosmetico com maior valor\n";
        cout<<"8  - Alterar estoque do cosmetico com ID Y\n";
        cout<<"9  - Imprimir cosmeticos com ID par\n";
        cout<<"10 - Imprimir cosmeticos com vencimento menor que X\n";
        cout<<"11 - Classificar por vencimento crescente\n";
        cout<<"12 - Classificar e imprimir por estoque decrescente\n";
        cout<<"13 - Imprimir cosmeticos da marca X\n";
        cout<<"14 - Imprimir cosmeticos\n";
        cout<<"0  - Sair\n";
        cout<<"====================================================\n";

        cout<<"digite o numero correspondente para acessar uma opcao.\n";
        cin>>acess;
        switch(acess){
            case 1:
                cout <<"\nOpcao 1 selecionada.\n";
                InserirI(lista, quantidade, fim);
                break;
            case 2:
                cout <<"\nOpcao 2 selecionada.\n";
                InserirAU(lista, quantidade, fim);
                break;
            case 3:
                cout <<"\nOpcao 3 selecionada.\n";
                InserirDX(lista, quantidade, fim);
                break;
            case 4:
                cout <<"\nOpcao 4 selecionada.\n";
                break;
            case 5:
                cout <<"\nOpcao 5 selecionada.\n";
                break;
            case 6:
                cout <<"\nOpcao 6 selecionada.\n";
                break;
            case 7:
                cout <<"\nOpcao 7 selecionada.\n";
                break;
            case 8:
                cout <<"\nOpcao 8 selecionada.\n";
                break;
            case 9:
                cout <<"\nOpcao 9 selecionada.\n";
                break;
            case 10:
                cout <<"\nOpcao 10 selecionada.\n";
                break;
            case 11:
                cout <<"\nOpcao 11 selecionada.\n";
                break;
            case 12:
                cout <<"\nOpcao 12 selecionada.\n";
                break;
            case 13:
                cout <<"\nOpcao 13 selecionada.\n";
                break;
            case 14:
                cout <<"\nOpcao 14 selecionada\n";
                Listar(lista, quantidade, fim);
                break;
            case 0:
                cout<<"Encerrando o programa...\n";
                break;
            default:
            cout<<"Opcao invalida! Tente novamente.\n";
        }
    } while(acess!=0);
    
    return 0;
}