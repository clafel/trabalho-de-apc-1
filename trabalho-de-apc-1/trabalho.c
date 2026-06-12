#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao = 0;
    int quantidade = 0;

    struct Musicas
    {
        int id_da_musica;
        char nome_da_musica[50];
        char nome_do_artista[50];
        float duracao_da_musica;
        char genero_da_musica[20];
    };

    struct Musicas musicas[10];

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
            {
                system("clear");
                if(quantidade >= 10) {
            printf("A quantidade de musicas cadastradas atingiu o limite. Tente remover alguma delas para continuar... \n");
                    break;
                }

            printf("Informe o titulo da musica: \n");
            scanf("%49[^\n]", &musicas[quantidade].nome_da_musica);
            while (getchar() != '\n');

            printf("Informe o nome do artista: \n");
            scanf("%49[^\n]", &musicas[quantidade].nome_do_artista);
            while (getchar() != '\n');

            printf("Informe o ID da musica: \n");
            scanf("%i", &musicas[quantidade].id_da_musica);
            while (getchar() != '\n');

            printf("Informe o genero da musica: \n");
            scanf("%19[^\n]", &musicas[quantidade].genero_da_musica);
            while (getchar() != '\n');

            printf("Informe a duracao da musica: \n");
            scanf("%f", &musicas[quantidade].duracao_da_musica);
            while (getchar() != '\n');

            quantidade++;
            printf("Musica cadastrada com sucesso! \n");
            break;
            }
            
        case 2:
            {
            system("clear");
            printf("Voce tem --- musicas cadastradas");
            break;
            }
        case 3:
            {
            system("clear");
            printf("Digite o numero da musica que deseja buscar: \n");
            break;
            }
        case 4:
            {
            system("clear");
            printf("Digite o numero da musica que deseja atualizar: \n");
            break;
            }
        case 5:
            {
            system("clear");
            printf("Digite o numero da musica que deseja remover: \n");
            break;
            }
        case 6:
            {
            system("clear");
            printf("Agradecemos a preferencia. Ate logo!\n");
            break;
            }
        default:
            printf("Opcao invalida! Tente novamente\n");
        }

        printf("Pressione ENTER para continuar...\n");
        getchar();

    } while (opcao != 6);

    return 0;
}