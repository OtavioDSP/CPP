# include <iostream>
# include <fstream>


using namespace std;
int main (){
int op = 0, qtdCamisas=0, corCamisa=0;
float preco = 0,total=0;
    do{
        cout << "Bem vindo a tecido bom\n Oque deseja comprar?:\n 1 - camisas PP(extra-pequeno)\n 2 - camisas P (pequeno)\n 3 - camisas M (Medio)\n 4 - camisas G (Grande)\n 5 - camisas GG (Extra-grande)"; 
        cin >> op;
        cout << "Insira a quantidade desejada: ";
        cin >> qtdCamisas;
        cout << "Insira uma cor entre as disponiveis:\n1 - Preto\n2 - Branco";
        cin >> corCamisa;


        do{
            if (op <1 || op > 5){
                cout << "Insira uma tamanho de camisa valido:  ";
                cin >> op;
            }
            
            if (qtdCamisas <=0){
                cout << "Insira uma quantidade valida:  ";
                cin >> qtdCamisas;
            }

            if (corCamisa < 1 || corCamisa > 2){
                cout << "Insira uma cor entre as disponiveis:\n1 - Preto\n2 - Branco";
                cin >> corCamisa;
            }


        } while (op < 1 || op > 5 || qtdCamisas <= 0 || corCamisa < 1 || corCamisa > 2);
        
        
            if (op == 1){
                preco = 10;
                total = qtdCamisas*preco;
                if (qtdCamisas < 20){
                    cout << "O valor total da compra e de: R$"<<total;
                }else if(qtdCamisas >= 20){ 
                    cout <<" camisas PP\nvalor total: " << total * (1 - 5.0 / 100);
                }if(corCamisa==1){
                    cout << "\nCor escolhida: Preto";
                }else if(corCamisa==2){
                    cout << "\nCor escolhida: Branco";
                }          
            }else if (op == 2){
                preco = 13;
                total = qtdCamisas*preco;
                if (qtdCamisas < 20){
                    cout << "O valor total da compra e de: R$"<<total;
                }else if(qtdCamisas >= 20){ 
                    cout <<" camisas P\nvalor total: " << total * (1 - 5.0 / 100);
                }if(corCamisa==1){
                    cout << "\nCor escolhida: Preto";
                }else if(corCamisa==2){
                    cout << "\nCor escolhida: Branco";
                }          
            }else if (op == 3){
                preco = 16;
                total = qtdCamisas*preco;
                if (qtdCamisas < 20){
                    cout << "O valor total da compra e de: R$"<<total;
                }else if(qtdCamisas >= 20){ 
                    cout <<" camisas M\nvalor total: " << total * (1 - 5.0 / 100);
                }if(corCamisa==1){
                    cout << "\nCor escolhida: Preto";
                }else if(corCamisa==2){
                    cout << "\nCor escolhida: Branco";
                }          
            }else if (op == 4){
                preco = 19;
                total = qtdCamisas*preco;
                if (qtdCamisas < 20){
                    cout << "O valor total da compra e de: R$"<<total;
                }else if(qtdCamisas >= 20){ 
                    cout <<" camisas G\nvalor total: " << total * (1 - 5.0 / 100);
                }if(corCamisa==1){
                    cout << "\nCor escolhida: Preto";
                }else if(corCamisa==2){
                    cout << "\nCor escolhida: Branco";
                }          
            }else if (op == 5){
                preco = 21;
                total = qtdCamisas*preco;
                if (qtdCamisas < 20){
                    cout << "O valor total da compra e de: R$"<<total;
                }else if(qtdCamisas >= 20){ 
                    cout <<" camisas GG\nvalor total: " << total * (1 - 5.0 / 100);
                }if(corCamisa==1){
                    cout << "\nCor escolhida: Preto";
                }else if(corCamisa==2){
                    cout << "\nCor escolhida: Branco";
                }          
            }

        cout << "\nDeseja comprar novamente?\n1 - sim\n2 - nao";
        cin >> op;
    }while(op == 1);
return 0;
}
