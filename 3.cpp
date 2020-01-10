// Example program
using namespace std;
#include <iostream>
#include <string>
int main()
{
    int mk =0;
    int num;
    char palavra[100];
    string alfabeto[2]{"abcdefghijklmnopqrstuvwxyz","cdefjkmnopqrsuvwxyzlightab"}; //estabelece o alfabeto e o codificado
    string alfa = alfabeto[0];
    string beto = alfabeto[1];
    cout <<endl<<"Digite 1 se deseja cryptografar uma palavra"<< endl<< "digite 2 se deseja decodificar uma palavra"<<endl;
    cin>> num;
    if(num == 1){
        cout<<"insira a palavra que deseja cryptografar"<<endl;
        cin>>palavra;
        for (mk = 0;palavra[mk] != '\0';mk++) {     //continua até o fim da palavra dada
            size_t found = alfa.find(palavra[mk]);  //encontra a letra "mk" da palavra no alfabeto normal
            string alfa = alfabeto[0];              //mantem o alfabeto (resolve o problema quando existem letras repetidas na palavra)
            string beto = alfabeto[1];              
            if (found != string::npos) {            //verifica se existe uma letra equivalente no alfabeto codificado
                swap(palavra[mk],beto[found]);      //troca a letra "mk" por sua respectiva no alfabeto codificado
            }
        }
     cout<<palavra;
    }else if(num ==2){
        cout<<"insira a palavra que deseja cryptografar"<<endl;
        cin>>palavra;
        for (mk = 0;palavra[mk] != '\0';mk++) {     //continua até o fim da palavra dada
            size_t found = beto.find(palavra[mk]); //encontra a letra "mk" da palavra no alfabeto codificado
            string alfa = alfabeto[0];              //mantem o alfabeto (resolve o problema quando existem letras repetidas na palavra)
            string beto = alfabeto[1];
            if (found != string::npos) {            //verifica se existe uma letra equivalente no alfabeto normal
                swap(palavra[mk],alfa[found]);      //troca a letra "mk" por sua respectiva no alfabeto normal
            }
        }
    cout<<palavra;
    }else{
        cout<<"input invalido";
    }
    return 0;
}