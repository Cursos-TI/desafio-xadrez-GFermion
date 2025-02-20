#include <stdio.h>
#include <string.h>

// Desafio 2, Movimentos peças de xadrez.
/*
Desafio 2 - Nivel Iniciante.
Peças: Peão, Torre, Bispo e Rainha.
Vou dar a liberdade do usuario escolher a peça que vai movimentar e a amplitude do movimento.
Desafio 2 - Nivel Aventureiro.
Adicionar a peça Cavalo e usar loops aninhados.
*/
int main(){

    int menuinicial, menupeca, movimento, amplitude, count = 1;

    // inicio de um loop apenas por questão de pratica e teste.
do
{

    // Menu inicial para o usuario decidir oq deseja fazer
    printf("\n------- Menu inicial -------\n");
    printf("1. Iniciar Jogo.\n");
    printf("2. Regras:\n");
    printf("3. Sair.\n");
    printf("Escolha uma opção: ");
    scanf(" %i", &menuinicial);

    switch (menuinicial) // Switch para as opções do menu inicial.
    {
    case 1 :

    // Menu de escolha de peças.
    printf("\nJogo iniciado.\n");
    printf("\nEscolha a peça que deseja movimentar:\n");
    printf("1 - Peão.\n");
    printf("2 - Torre.\n");
    printf("3 - Bispo.\n");
    printf("4 - Rainha.\n");
    printf("5 - Cavalo.\n");
    printf("Escolha uma peça: ");
    scanf(" %i", &menupeca);

    switch (menupeca)
    {

        case 1:

            // O peão foi adicionado apenas para não ficar de fora, mas o movimento dele não exige um loop.
            printf("\nPeão escolhido.\n");
            printf("Avançou\n");

            break;

        case 2:

            // O usuario escolherá a direção e a amplitude do movimento de cada peça.
            // Torre - Usando For para o movimento.
            printf("\nTorre escolhida.\n");
            printf("Qual direção deseja movimentar a torre?\n");
            printf("1 - Avançar.\n");
            printf("2 - Recuar.\n");
            printf("3 - Direita.\n");
            printf("4 - Esquerda.\n");
            printf("Escolha uma direção: ");
            scanf(" %i", &movimento);
            printf("Quantas casas deseja mover (maximo de 8 casas)?");
            scanf(" %i", &amplitude);

            if (amplitude > 8) // caso a amplitude do movimento seja maior que o tamanho de um tabuleiro padrão,o movimento é invalido.
            {
                printf("\nMovimento invalido.\n");
            }else
            {
                switch (movimento) // Após a escolha da direção e da amplitude do movimento, caso ambas sejam validas o movimento sera executado de acordo.
                {

                case 1: // Movimento de avanço da Torre.

                    for (int i = 1; i <= amplitude; i++)
                    {
                        printf("Avançou.\n", i);
                    }
                    

                    break;

                case 2: // Movimento de recuo da Torre.

                    for (int i = 1; i <= amplitude; i++)
                    {
                        printf("Recuou\n", i);
                    }

                    break;

                case 3: // Movimento da torre para a direita.

                    for (int i = 1; i <= amplitude; i++)
                    {
                        printf("Moveu-se para a direita.\n");
                    }

                    break;

                case 4: // Movimento da torre para a esquerda.

                    for (int i = 1; i <= amplitude; i++)
                    {
                        printf("Moveu-se para a esquerda.\n", i);
                    }

                    break;
                
                default: // Mensagem de erro caso a direção escolhida seja invalida.

                    printf("\nOpção invalida.\n");

                    break;
                }
                
            }
            

            break;

        case 3:

            // Bispo - usando While para o movimento.
            printf("\nBispo escolhido.\n");
            printf("Qual direção deseja movimentar o bispo?\n");
            printf("1 - Avançar para a direita.\n");
            printf("2 - Avançar para a esquerda.\n");
            printf("3 - Recuar para a direita.\n");
            printf("4 - Recuar para a esquerda.\n");
            printf("Escolha uma direção: ");
            scanf(" %i", &movimento);
            printf("Quantas casas deseja mover (maximo de 8 casas)?");
            scanf(" %i", &amplitude);

            if (amplitude > 8) // Mensagem de erro em caso de amplitude invalida.
            {
                printf("\nMovimento invalido.\n"); 
            }else
            {
                switch (movimento)
                {

                case 1: // Bispo - avanço na diagonal para a direita.

                    while (count <= amplitude)
                    {
                        printf("Avançou para a direita.\n");
                        count++;
                    }
                    
                    
                    break;

                case 2: // Bispo - avanço na diagonal para a esquerda.

                    while (count <= amplitude)
                    {
                        printf("Avançou para a esquerda.\n");
                        count++;
                    }
                    
                    
                    break;

                case 3: // Bispo - recuo na diagonal para a direita.

                    while (count <= amplitude)
                    {
                        printf("Recuou para a direita.\n");
                        count++;
                    }
                    ;
                    

                    break;

                case 4: // Bispo - recuo na diagonal para a esquerda.

                    while (count <= amplitude)
                    {
                        printf("Recuou para a esquerda.\n");
                        count++;
                    }
                    ;
                    

                    break;
                
                default: // Mensagem de erro caso a direção escolhida seja invalida.

                    printf("\nOpção invalida.\n");

                    break;
                }
                
            }

            break;

        case 4:

            // Rainha - Usando Do While para o movimento.
            printf("\nRainha escolhida.\n");
            printf("Qual direção deseja movimentar a rainha?\n");
            printf("1 - Avançar.\n");
            printf("2 - Recuar.\n");
            printf("3 - Direita.\n");
            printf("4 - Esquerda.\n");
            printf("5 - Avançar para a direita.\n");
            printf("6 - Avançar para a esquerda.\n");
            printf("7 - Recuar para a direita.\n");
            printf("8 - Recuar para a esquerda.\n");
            printf("Escolha uma direção: ");
            scanf(" %i", &movimento);
            printf("Quantas casas deseja mover (maximo de 8 casas)?");
            scanf(" %i", &amplitude);

            if (amplitude > 8) // Mensagem de erro em caso de amplitude invalida.
            {
                printf("\nMovimento invalido.\n");
            }else
            {
                switch (movimento)
                {

                case 1: // Rainha - avanço.

                    do
                    {
                        printf("Avançou.\n");
                        count++;
                    } while (count <= amplitude);
                    
                    break;

                case 2: // Rainha - recuo.

                    do
                    {
                        printf("Recuou.\n");
                        count++;
                    } while (count <= amplitude);
                    
                    break;

                case 3: // Rainha - movimento para a direita.

                    do
                    {
                        printf("Moveu-se para a direita.\n");
                        count++;
                    } while (count <= amplitude);
                    
                    break;

                case 4: // Rainha - movimento para a esquerda.

                    do
                    {
                        printf("Moveu-se para a esquerda.\n");
                        count++;
                    } while (count <= amplitude);
                    
                    break;
                
                case 5: // Rainha - avanço na diagonal para a direita.

                    do
                    {
                        printf("Avançou para a direita.\n");
                        count++;
                    } while (count <= amplitude);
                    
                    break;
                
                case 6: // Rainha - avanço na diagonal para a esquerda.
                
                    do
                    {
                        printf("Avançou para a esquerda.\n");
                        count++;
                    } while (count <= amplitude);
                    
                    break;

                case 7: // Rainha - recuo na diagonal para a direita.

                    do
                    {
                        printf("Recuou para a direita.\n");
                        count++;
                    } while (count <= amplitude);
                    
                    break;
                
                case 8: // Rainha - recuo na diagonal para a esquerda.

                    do
                    {
                        printf("Recuou para a esquerda.\n");
                        count++;
                    } while (count <= amplitude);
                    
                    break;
                    
                
                default: // Mensagem de erro caso a direção escolhida seja invalida.

                    printf("\nOpção invalida.\n");

                    break;
                }
                
            }

            break;
        
        case 5: // Cavalo - Usando loops aninhados para o movimento.

            // O cavalo é a peça mais complexa do xadrez, por isso o movimento dele é feito com loops aninhados.
            printf("\nCavalo escolhida.\n");
            printf("Qual direção deseja movimentar o cavalo?\n");
            printf("1 - Frente e direita.\n");
            printf("2 - Frente e esquerda.\n");
            printf("3 - Direita e frente.\n");
            printf("4 - Direita e trás.\n");
            printf("5 - Esquerda e frente.\n");
            printf("6 - Esquerda e trás.\n");
            printf("7 - Trás e direita.\n");
            printf("8 - Trás e esquerda.\n");
            printf("Escolha uma direção: ");
            scanf(" %i", &movimento);

            switch (movimento)
                {

                case 1: // Cavalo - Frente e direita.

                    while (count < 2)
                    {
                        for (int i = 1; i < 3; i++)
                        {
                            printf("Frente.\n");
                        }
                        printf("Direita.\n");
                        count++;
                    }
                
                    break;

                case 2: // Cavalo - Frente e esquerda.

                    while (count < 2)
                    {
                        for (int i = 1; i < 3; i++)
                        {
                            printf("Frente.\n");
                        }
                        printf("Esquerda.\n");
                        count++;
                    }
                    
                    break;

                case 3: // Cavalo - Direita e frente.

                    while (count < 2)
                    {
                        for (int i = 1; i < 3; i++)
                        {
                            printf("Direita.\n");
                        }
                        printf("Frente.\n");
                        count++;
                    }
                    
                    break;

                case 4: // Cavalo - Direita e trás.

                    while (count < 2)
                    {
                        for (int i = 1; i < 3; i++)
                        {
                            printf("Direita.\n");
                        }
                        printf("Trás.\n");
                        count++;
                    }
                    
                    break;
                
                case 5: // Cavalo - Esquerda e frente.

                    while (count < 2)
                    {
                        for (int i = 1; i < 3; i++)
                        {
                            printf("Esquerda.\n");
                        }
                        printf("Frente.\n");
                        count++;
                    }
                    
                    break;
                
                case 6: // Cavalo - Esquerda e trás.
                
                    while (count < 2)
                    {
                        for (int i = 1; i < 3; i++)
                        {
                            printf("Esquerda.\n");
                        }
                        printf("Trás.\n");
                        count++;
                    }
                    
                    break;

                case 7: // Cavalo - Trás e direita.

                    while (count < 2)
                    {
                        for (int i = 1; i < 3; i++)
                        {
                            printf("Trás.\n");
                        }
                        printf("Direita.\n");
                        count++;
                    }
                    
                    break;
                
                case 8: // Cavalo - Trás e esquerda.

                    while (count < 2)
                    {
                        for (int i = 1; i < 3; i++)
                        {
                            printf("Trás.\n");
                        }
                        printf("Esquerda.\n");
                        count++;
                    }
                    
                    break;
                    
                
                default: // Mensagem de erro caso a direção escolhida seja invalida.

                    printf("\nOpção invalida.\n");

                    break;
                }
                

            break;

        default: // Mensagem de erro caso a peça escolhida seja invalida.

            printf("\nOpção invalida.\n");

            break;

    }

        break;
        
        case 2:

        // Regras explicando os movimentos gerais das peças de xadrez.
        printf("\nRegras:\n");
        printf("Peão: Movimenta uma casa para frente.\n");
        printf("Torre: Movimenta em linha reta na horizontal ou vertical.\n");
        printf("Bispo: Movimenta em linha reta na diagonal.\n");
        printf("Rainha: Movimenta em linha reta na horizontal, vertical e diagonal.\n");
        printf("Cavalo: Movimenta em L (Exemplo: Duas casas para a frente e uma para a direita).\n");
        printf("O movimento é limitado a 8 casas.\n");

        break;

        case 3:

        printf("\nSaindo do jogo.\n");

        break;
    
    default:

        printf("\nOpção Invalida.\n");

        break;

    }

} while (menuinicial != 3);

    return 0;
}
