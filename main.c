
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int t, n, bi, bf, m;
    setlocale(LC_ALL,"portuguese");
    t=1;
    while (t==1)
    {
        m=0;
        while (m<1||m>11)
        {
            printf("Escolha a op��o para convers�o:\n\n");
            printf("1 - Decimal para bin�ria;\n2 - Decimal para octal;\n3 - Decimal para hexadecimal\n");
            printf("4 - Bin�ria para decimal;\n5 - Bin�ria para octal;\n6 - Bin�ria para hexadecimal;\n");
            printf("7 - Octal para decimal;\n8 - Octal para bin�ria;\n9 - Octal para hexadecimal;\n");
            printf("10 - Hexadecimal para decimal;\n11 - Hexadecimal para bin�ria;\n12 - Hexadecimal para octal;\n");
            printf("\nDigite um n�mero --> ");
            scanf("%d",&m);
            switch (m)
            {
            case 1:
                bi=10;
                bf=2;
                break;
            case 2:
                bi=10;
                bf=8;
                break;
            case 3:
                bi=10;
                bf=16;
                break;
            case 4:
                bi=2;
                bf=10;
                break;
            case 5:
                bi=2;
                bf=8;
                break;
            case 6:
                bi=2;
                bf=16;
                break;
            case 7:
                bi=8;
                bf=10;
                break;
            case 8:
                bi=8;
                bf=2;
                break;
            case 9:
                bi=8;
                bf=16;
                break;
            case 10:
                bi=16;
                bf=10;
                break;
            case 11:
                bi=16;
                bf=2;
                break;
            case 12:
                bi=16;
                bf=8;
                break;
            default:
                printf("\nN�mero inv�lido. Tente de novo\n");
                system("pause");
                system("cls");
                break;
            }
            if (m<1||m>11)
            {
                m=0;
            }
            else
            {
                printf("Foi selecionado o n�mero %d: convers�o de base %d para a base %d\n Est� correto?\n1 - Sim\n2 - N�o\n ---> ",m,bi,bf);
                scanf("%d",&t);
                switch (t)
                {
                case 1:
                    break;
                default:
                    m=0;
                    break;
                }
                system("pause");
                system("cls");
            }
        }
        printf("Insira um n�remo de base %d: ",bi);
        scanf("%d",&n);
        conversao(n, bi, bf);
        system("pause");
        printf("\nDeseja faser mais uma convers�o:\n1 - SIM\n2 - N�o\n ---> ");
        scanf   ("%d",&t);
        if (t==1)
        {
            system("pause");
            system("cls");
        }
    }
}
