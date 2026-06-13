#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
            printf("Pressione ENTER para tentar novamente...");
            getchar();
            break;
                }

            int i = 0;
            int valido = 0;

        do {

            int repetido = 0;

            system("clear");
            printf("Informe o titulo da musica: \n");
            scanf("%49[^\n]", &musicas[quantidade].nome_da_musica);
            while (getchar() != '\n');

            printf("Informe o nome do artista: \n");
            scanf("%49[^\n]", &musicas[quantidade].nome_do_artista);
            while (getchar() != '\n');

            for (i = 0; i < quantidade; i++) {
                if (
                    strcmp(musicas[i].nome_da_musica,
                    musicas[quantidade].nome_da_musica) == 0
                    &&
                    strcmp(musicas[i].nome_do_artista,
                    musicas[quantidade].nome_do_artista) == 0
                    )
                {  
                    repetido = 1;
                    break;
            }
        }

            if (repetido == 1) {

                printf("Voce ja informou essa musica. Tente mudar o titulo ou o artista. \n\n");
                printf("Pressione ENTER para tentar novamente...");
                getchar();

                valido = 0;
            }
            else
            {
                valido = 1;
            }

        }  while (valido == 0);

        int valido_1 = 0;

        do {

            printf("Informe o ID da musica: \n");
            scanf("%i", &musicas[quantidade].id_da_musica);
            while (getchar() != '\n');

            int repetido_1 = 0;
            int b = 0;

            for (b = 0; b < quantidade; b++) {
                if (musicas[b].id_da_musica == musicas[quantidade].id_da_musica) {
                    repetido_1 = 1;
                    break;
                }
            }

            if (repetido_1 == 1) {

                printf("Ja existe uma musica com esse ID. Tente usar outro. \n");
                getchar();

                valido_1 = 0;
            } else
            {
                valido_1 = 1;
            }

            }    while(valido_1 == 0);
        
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

            if (quantidade == 0)
            {
                printf("Nenhuma musica cadastrada. Tente novamente! \n");
                break;
            }

            printf("Quantidade de musicas cadastradas: %d\n\n", quantidade);

            for (int c = 0; c < quantidade; c++)
            {
                printf("=====================================\n");
                printf("Musica %i\n\n", c + 1);
                printf("=====================================\n");
                printf("Titulo: %s\n", musicas[c].nome_da_musica);
                printf("Artista: %s\n", musicas[c].nome_do_artista);
                printf("Duracao: %.2f\n", musicas[c].duracao_da_musica);
                printf("Genero: %s\n", musicas[c].genero_da_musica);
                printf("ID: %i\n\n", musicas[c].id_da_musica);

            }
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