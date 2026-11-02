#include <iostream>
#include <cstdlib>
#include <clocale>
using namespace std;

const int Max=5;
struct Cosmeticos {
    int id;
    string marca;
    int dt_vencimento;
    int estoque;
    float valor;
};

void cabecalho(){
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
}

void LimparTela(){
            system("cls");}


void Clique(){
            system("pause"); }


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
        if(confir=='S' || confir=='s'){
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



void MenorEstoque(Cosmeticos Lista[Max], int &quantidade, int &fim){ //Exclus�o menor estoque - NATALIA
    char conf;
    int j=0; //menor estoque;
    int quant=0;
    Cosmeticos vet[Max];
    int pos[Max];
    int ID=0;

    if(fim!=-1){
        int menor=Lista[0].estoque;

                //calcular o estoque
                for(int i=0;i<=fim;i++){
                    if(Lista[i].estoque<menor){
                    menor=Lista[i].estoque;
                    j=i;
                }
            } for ( int n=0;n<=fim;n++){
                    if (Lista[n].estoque==Lista[j].estoque){ //caso haja um valor a mais
                          vet[quant]=Lista[n];
                          pos[quant]=n;
                          quant++;}
            }

        if(quant==1){
                j=pos[0];

        }else  {
                for(int i=0;i<quant;i++){

                    cout<<"PRODUTO\n"<<"ID:"<< vet[i].id<<endl;
                    cout<<"MARCA:"<< vet[i].marca<<endl;
                    cout<<"DATA DE VENCIMENTO:"<< vet[i].dt_vencimento<<endl;
                    cout<<"ESTOQUE:"<< vet[i].estoque<<endl;
                    cout<<"VALOR: R$"<< vet[i].valor<<endl;
                    cout<<"----------------------------------------------------"<<endl;}

                    cout<<"\nQUAL PRODUTO DESSEJA EXCLUIR?\n";
                    cout<<"Digite o ID: "; cin>>ID;


                    for(int i=0;i<quant;i++){
                    if(vet[i].id==ID){
                        j=pos[i];

                                    } else cout<<"\nID N�O ENCONTRADO.\n";

                    }
            } cout<<"\nDESEJA EXCLUIR?\n";
              cout<<"MARCA:"<< Lista[j].marca<<endl;
              cout<<"DATA DE VENCIMENTO:"<< Lista[j].dt_vencimento<<endl;
              cout<<"ESTOQUE:"<< Lista[j].estoque<<endl;
              cout<<"VALOR: R$"<< Lista[j].valor<<endl;
              cout<<"DESEJA EXCLUIR ESTE PRODUTO? (S/N):";
              cin>>conf;

              if(conf=='S' || 's'){
                    while(j<fim){
                            Lista[j]=Lista[j+1];
                            j++;

                        }quantidade--; //testar depois
                         fim--;
                        cout<<"COSM�TICO EXCLU�DO";

                  }else cout<<"\nPRODUTO N�O EXCLUIDO."<<endl;

        } else cout<<"\LISTA VAZIA.";
}


void ExcluirId(Cosmeticos lista[Max], int &quantidade, int &fim){   //Exclus�o id posterior - NATALIA
    bool sinal=false;
    int post=0;
    int valor=0;
    char conf;
    int pos=0;


    if(fim!=(-1)){

        cout<<"\nSELECIONE O ID: "; cin>>valor;

        while (pos <= fim){
                if(lista[pos].id == valor){
                    post=pos;
                    sinal=true;
                    break;
                    }pos++;


        } if(sinal==true){
            if(post==fim){
                cout<<"\nN�O TEM PRODUTO POSTERIOR";
                    } else {post++;
                            cout<<"\nPRODUTO:\n";
                            cout<<"ID: "<<lista[post].id<<endl;
                            cout<<"MARCA: "<<lista[post].marca<<endl;
                            cout<<"DATA DE VENCIMENTO: "<<lista[post].dt_vencimento<<endl;
                            cout<<"ESTOQUE: "<<lista[post].estoque<<endl;
                            cout<<"VALOR: R$ "<<lista[post].valor<<endl;
                            cout<<"DESEJA EXCLUIR ESTE COSMETICO? (S/N): "; cin >> conf;

                            if(conf=='S' || conf=='s'){
                                for( ;post < fim;post++){
                                    lista[post]=lista[post+1];
                                }fim--;
                                 quantidade--;
                                 cout<<"\nPRODUTO EXCLUIDO COM SUCESSO!\n";

                            } else cout<<"\nPRODUTO N�O EXCLUIDO.\n";
                        }
            } else cout<<"\nPRODUTO N�O CADASTRADO.\n";
    }else cout<<"\nLISTA VAZIA.\n";
}
void MaiorValor(Cosmeticos lista[Max], int &fim){ //Consultar maior valor - Natalia
    int maior=0;

    if(fim!=-1){
        for (int i=1;i <= fim;i++){
            if(lista[i].valor > lista[maior].valor){
                maior=i;
            }
        }cout<<"O PRODUTO DE MAIOR VALOR �:\n";
        cout<<"ID: "<<lista[maior].id<<endl;
        cout<<"MARCA: "<<lista[maior].marca<<endl;
        cout<<"DATA DE VENCIMENTO: "<<lista[maior].dt_vencimento<<endl;
        cout<<"ESTOQUE: "<<lista[maior].estoque<<endl;
        cout<<"VALOR :"<<lista[maior].valor<<endl;

    }else cout<<"LISTA VAZIA";

}

void Alterar (Cosmeticos lista[Max], int &fim){ //alterar estoque - Natalia
    int ID =0;
    int aux=0;
    int est=0;
    bool sinal=false;
    char conf;

    if(fim!=-1){
            cout<<"INFORME O ID DO PRODUTO: \n";
            cin>>ID;

            //buscar o Id
            for(int i=0;i<=fim;i++){
                if(lista[i].id==ID){
                    aux=i;
                    sinal = true;
                    break;
                }
            }if (sinal == true){
                cout<<"PRODUTO ENCONTRADO: \n";
                cout<<"ID: "<<lista[aux].id<<endl;
                cout<<"MARCA: "<<lista[aux].marca<<endl;
                cout<<"DATA DE VALIDADE: "<<lista[aux].dt_vencimento<<endl;
                cout<<"ESTOQUE: "<<lista[aux].estoque<<endl;
                cout<<"VALOR: R$"<<lista[aux].valor<<endl;
                cout<<"\nDESEJA ALTERAR O ESTOQUE? (S/N) ";cin>>conf;

                if ( conf =='s' || conf == 'S'){
                        cout<<"NOVO VALOR DO ESTOQUE: ";cin>>est;
                        lista[aux].estoque=est;
                        cout<<"------------------------------------------\n";
                        cout<<"Estoque atualizado com sucesso!\n";

                }else {
                    cout<<"ESTOQUE N�O ALTERADO.\n";
                        }

            } else {
                cout<<"PRODUTO N�O ENCONTRADO.\n";
                }

    } else {cout<<"LISTA VAZIA";};
}



int main(){
    setlocale(LC_ALL, "Portuguese");
    Cosmeticos lista[Max];
    Cosmeticos val;
    int quantidade,fim,aux,acess;
    char confir;
    bool sinal;
    quantidade=0;
    fim=-1;

    do {
        cabecalho(); // Nat�lia

        cout<<"digite o numero correspondente para acessar uma opcao.\n";
        cin>>acess;

        LimparTela(); //nati

        switch(acess){
            case 1:
                cout <<"\nOpcao 1 selecionada.\n";
                InserirI(lista, quantidade, fim);
                Clique();
                LimparTela();
                break;
            case 2:
                cout <<"\nOpcao 2 selecionada.\n";
                InserirAU(lista, quantidade, fim);
                Clique();
                LimparTela();
                break;
            case 3:
                cout <<"\nOpcao 3 selecionada.\n";
                InserirDX(lista, quantidade, fim);
                Clique();
                LimparTela();
                break;
            case 4:
                cout <<"\nOpcao 4 selecionada.\n";
                Clique();
                LimparTela();
                break;
            case 5:
                cout <<"\nOpcao 5 selecionada.\n";
                MenorEstoque(lista,quantidade,fim);
                Clique();
                LimparTela();
                break;
            case 6:
                cout <<"\nOpcao 6 selecionada.\n";
                ExcluirId(lista,quantidade,fim);
                Clique();
                LimparTela();
                break;
            case 7:
                cout <<"\nOpcao 7 selecionada.\n";
                MaiorValor(lista,fim);
                Clique();
                LimparTela();
                break;
            case 8:
                cout <<"\nOpcao 8 selecionada.\n";
                Alterar(lista,fim);
                Clique();
                LimparTela();
                break;
            case 9:
                cout <<"\nOpcao 9 selecionada.\n";
                Clique();
                LimparTela();
                break;
            case 10:
                cout <<"\nOpcao 10 selecionada.\n";
                Clique();
                LimparTela();
                break;
            case 11:
                cout <<"\nOpcao 11 selecionada.\n";
                Clique();
                LimparTela();
                break;
            case 12:
                cout <<"\nOpcao 12 selecionada.\n";
                Clique();
                LimparTela();
                break;
            case 13:
                cout <<"\nOpcao 13 selecionada.\n";
                Clique();
                LimparTela();
                break;
            case 14:
                cout <<"\nOpcao 14 selecionada\n";
                Listar(lista,quantidade,fim);
                Clique();
                LimparTela();
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
