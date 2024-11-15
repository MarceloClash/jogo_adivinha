#include <iostream> // para motrar mensagens na tela.
#include <cstdlib> // para gerar numeros aleatórios.
#include <ctime>  // para garantir que os numeros aleatorios sejam diferentes.

using namespace std;

int main(){

    cout << "Bem-vindo ao jogo da Adivinhaçao!" << endl;
    cout << "Tente adivinhar o número que estou pensando entre 1 e 100." << endl;

    // Gerar um numero aleatório.
    srand(time(0)); // Faz com que o número seja diferente sempre que rodamos.
    int numero_secreto = rand() % 100 + 1; 

    int palpite; // Aqui guardamos o número que o jogador tenta adivinhar.
    int tentativas = 0; // Conta quantas tentativas o jogador usou.

    //Enquanto o jogador nao adivinhar.
    while (true) {
        cout << "Digite seu palpite: ";
        cin >> palpite; // Lê o palpite do jogador.
        tentativas++; // Conta mais uma tentativa.

        // Compara o palpite com o número secreto.
        if(palpite < numero_secreto) {
            cout << "Muito baixo! Tente novamente." << endl;
        }else if(palpite > numero_secreto) {
            cout << "Muito alto! Tente novamente." << endl;
        }else {
            cout << "Parabéns! Você acertou em " << tentativas << " tentativas!" << endl;
            break; // sai do jogo.
        }
      
    
    }
    cout << "Obrigado por jogar!" << endl;
    return 0;
}

