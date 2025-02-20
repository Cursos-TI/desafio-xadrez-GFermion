#include <stdio.h>

// No meu codigo decidi que o Usuario deveria escolher a amplitude do movimento de cada peça.
 
void Torre() {

    int movimento, amplitude;

            printf("\nTorre escolhida.\n");
            printf("Qual direção deseja movimentar a torre?\n");
            printf("1 - Cima.\n");
            printf("2 - Baixo.\n");
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
                        printf("Cima.\n");
                    }
                    

                    break;

                case 2: // Movimento de recuo da Torre.

                    for (int i = 1; i <= amplitude; i++)
                    {
                        printf("Baixo.\n");
                    }

                    break;

                case 3: // Movimento da torre para a direita.

                    for (int i = 1; i <= amplitude; i++)
                    {
                        printf("Direita.\n");
                    }

                    break;

                case 4: // Movimento da torre para a esquerda.

                    for (int i = 1; i <= amplitude; i++)
                    {
                        printf("Esquerda.\n");
                    }

                    break;
                
                default: // Mensagem de erro caso a direção escolhida seja invalida.

                    printf("\nOpção invalida.\n");

                    break;
                }
                
            }
}

void Bispo() {

    int movimento, amplitude, count = 1;

            printf("\nBispo escolhida.\n");
            printf("Qual direção deseja movimentar o bispo?\n");
            printf("1 - Diagonal direita cima.\n");
            printf("2 - Diagonal esquerda cima.\n");
            printf("3 - Diagonal direita baixo.\n");
            printf("4 - Diagonal esquerda baixo.\n");
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
                    printf("Cima.\n");
                    for (int i = 1; i < 2; i++)
                    {
                        printf("Direita.\n");
                    }
                    count++;
                }
                    
                    break;

                case 2: // Bispo - avanço na diagonal para a esquerda.

                while (count <= amplitude)
                {
                    printf("Cima.\n");
                    for (int i = 1; i < 2; i++)
                    {
                        printf("Esquerda.\n");
                    }
                    count++;
                }
                    
                    break;

                case 3: // Bispo - recuo na diagonal para a direita.

                while (count <= amplitude)
                {
                    printf("Baixo.\n");
                    for (int i = 1; i < 2; i++)
                    {
                        printf("Direita.\n");
                    }
                    count++;
                }

                    break;

                case 4: // Bispo - recuo na diagonal para a esquerda.

                while (count <= amplitude)
                {
                    printf("Baixo.\n");
                    for (int i = 1; i < 2; i++)
                    {
                        printf("Esquerda.\n");
                    }
                    count++;
                }

                    break;
                
                default: // Mensagem de erro caso a direção escolhida seja invalida.

                    printf("\nOpção invalida.\n");

                    break;
                }
            }
}

void Rainha(){
    
    int movimento, amplitude, count = 1;

            printf("\nRainha escolhida.\n");
            printf("Qual direção deseja movimentar a rainha?\n");
            printf("1 - Cima.\n");
            printf("2 - Baixo.\n");
            printf("3 - Direita.\n");
            printf("4 - Esquerda.\n");
            printf("5 - Diagonal direita cima.\n");
            printf("6 - Diagonal esquerda cima.\n");
            printf("7 - Diagonal direita baixo.\n");
            printf("8 - Diagonal esquerda baixo.\n");
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
                        printf("Cima.\n");
                        count++;
                    } while (count <= amplitude);
                    
                    break;

                case 2: // Rainha - recuo.

                    do
                    {
                        printf("Baixo.\n");
                        count++;
                    } while (count <= amplitude);
                    
                    break;

                case 3: // Rainha - movimento para a direita.

                    do
                    {
                        printf("Direita.\n");
                        count++;
                    } while (count <= amplitude);
                    
                    break;

                case 4: // Rainha - movimento para a esquerda.

                    do
                    {
                        printf("Esquerda.\n");
                        count++;
                    } while (count <= amplitude);
                    
                    break;
                
                    case 5: // Rainha - avanço na diagonal para a direita.

                    while (count <= amplitude)
                    {
                        printf("Cima.\n");
                        for (int i = 1; i < 2; i++)
                        {
                            printf("Direita.\n");
                        }
                        count++;
                    }
                        
                        break;
    
                    case 6: // Rainha - avanço na diagonal para a esquerda.
    
                    while (count <= amplitude)
                    {
                        printf("Cima.\n");
                        for (int i = 1; i < 2; i++)
                        {
                            printf("Esquerda.\n");
                        }
                        count++;
                    }
                        
                        break;
    
                    case 7: // Rainha - recuo na diagonal para a direita.
    
                    while (count <= amplitude)
                    {
                        printf("Baixo.\n");
                        for (int i = 1; i < 2; i++)
                        {
                            printf("Direita.\n");
                        }
                        count++;
                    }
    
                        break;
    
                    case 8: // Rainha - recuo na diagonal para a esquerda.
    
                    while (count <= amplitude)
                    {
                        printf("Baixo.\n");
                        for (int i = 1; i < 2; i++)
                        {
                            printf("Esquerda.\n");
                        }
                        count++;
                    }
    
                        break;
                    
                
                default: // Mensagem de erro caso a direção escolhida seja invalida.

                    printf("\nOpção invalida.\n");

                    break;
                }
                
            }

}

void Cavalo(){
    
    int movimento, count = 1;

    printf("\nCavalo escolhida.\n");
    printf("Qual direção deseja movimentar o cavalo?\n");
    printf("1 - Cima e Direita.\n");
    printf("2 - Cima e Esquerda.\n");
    printf("3 - Direita e Cima.\n");
    printf("4 - Direita e Baixo.\n");
    printf("5 - Esquerda e Cima.\n");
    printf("6 - Esquerda e Baixo.\n");
    printf("7 - Baixo e Direita.\n");
    printf("8 - Baixo e Esquerda.\n");
    printf("Escolha uma direção: ");
    scanf(" %i", &movimento);

    switch (movimento)
        {

        case 1: // Cavalo - Frente e direita.

            while (count < 2)
            {
                for (int i = 1; i < 3; i++)
                {
                    printf("Cima.\n");
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
                    printf("Cima.\n");
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
                printf("Cima.\n");
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
                printf("Baixo.\n");
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
                printf("Cima.\n");
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
                printf("Baixo.\n");
                count++;
            }
            
            break;

        case 7: // Cavalo - Trás e direita.

            while (count < 2)
            {
                for (int i = 1; i < 3; i++)
                {
                    printf("Baixo.\n");
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
                    printf("Baixo.\n");
                }
                printf("Esquerda.\n");
                count++;
            }
            
            break;
            
        
        default: // Mensagem de erro caso a direção escolhida seja invalida.

            printf("\nOpção invalida.\n");

            break;
        }
}

int main() {
    
    int peca;

    do
    {

    // Menu principal para o usuario escolher a peça que deseja movimentar.
    printf("\nEscolha uma peça para movimentar:\n");
    printf("1 - Torre.\n");
    printf("2 - Bispo.\n");
    printf("3 - Rainha.\n");
    printf("4 - Cavalo.\n");
    printf("5 - Sair.\n");
    printf("Escolha uma peça: ");
    scanf(" %i", &peca);

    switch (peca) // Switch para chamar o bloco de codigos a ser executado.
    {
    case 1:

        Torre();

        break;
    
    case 2:

        Bispo();

        break;
    
    case 3:

        Rainha();

        break;

    case 4:

        Cavalo();

        break;

    case 5:

        printf("\nSaindo...\n");

        break;

    default:
        
        printf("\nPeça invalida.\n");    

        break;
    }

    } while (peca != 5);

    return 0;
}
