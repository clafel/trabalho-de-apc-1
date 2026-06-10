#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao = 0;

    do
    {
        system("clear");
        printf("----MENU PRINCIPAL----\n");
        printf("1 - Cadastrar Musicas\n");
        printf("2 - Listar Musicas\n");
        printf("3 - Buscar Musicas\n");
        printf("4 - Atualizar Musicas\n");
        printf("5 - Remover Musicas\n");
        printf("6 - Sair\n");
        printf("Escolha Uma Opcao => ");
        scanf("%i", &opcao);
        while (getchar() != '\n')
            ;

        switch (opcao)
        {
        case 1:
            printf("Voce deseja cadastrar que musica?\n");
            break;
        case 2:
            printf("Voce tem --- musicas cadastradas");
            break;
        case 3:
            printf("Digite o numero da musica que deseja buscar: \n");
            break;
        case 4:
            printf("Digite o numero da musica que deseja atualizar: \n");
            break;
        case 5:
            printf("Digite o numero da musica que deseja remover: \n");
            break;
        case 6:
            printf("Agradecemos a preferencia. Ate logo!\n");
            break;
        default:
            printf("Opcao invalida! Tente novamente\n");
        }

        printf("Pressione ENTER para continuar...\n");
        getchar();

    } while (opcao != 6);

    return 0;
}