#include <iostream>
#include <fstream>
#include <list>

using namespace std;
int main() {
    fstream arquivo;
    arquivo.open("arquivo01.txt", ios::out | ios::app);
    while(true){
        cout << "deseja inserir uma musica? [y/n]: ";
        char op;
        cin >> op;
        if(op == 'y' || op == 'Y'){
            string texto;
            cout << "Digite uma musica: ";
            cin.ignore(); 
            getline(cin, texto);
            arquivo << texto << endl; 
        }else{
            arquivo.close(); 
            break;
        }
    }
  
   
    arquivo.open("arquivo01.txt", ios::in);
    string temp;
    list<string> lista;
    while(getline(arquivo, temp)){
        lista.push_back(temp);
    }

    cout << "\nMusicas adicionadas:\n";
    for(auto i : lista){
        cout << i <<"\n";
    }

    cout << "\nDigite para pesquisar uma musica: ";
    string pesquisar;
    cin.ignore(); 
    getline(cin, pesquisar); 
    for(auto i : lista){
        string temp = i;
        if(temp == pesquisar){
            cout << "Musica encontrada\n";
            break;
        }
    }  
}