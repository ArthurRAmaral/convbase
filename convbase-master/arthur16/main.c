#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    conv16(1);
}

conv16(int p)
{
    int i,num,r,snum;
    char n[10],sn;
    if (p==1)
    {
        printf("Insira um número na base 10: ");
        scanf("%c",&num);
        snum=num;
        i=0;
        while (num>0)
        {
                num=num/16;
                r=num%16;
                if (r>=10)
                {
                    r=r+55;
                }
                else
                {
                    r=r+48;
                }
                n[i]=r;
                i=i+1;
        }
        for (i=0;i=10;i++)
        {
            printf("%c",n[i]);
        }
        //printf("O resultado da converção: %d(10) para %s(16).\n",sn,n[i-1]);
    }
    if (p==2)
    {
        printf("Insira um número na base 16: ");
        gets(n);
        sn=n;
        for (i=0; i<strlen(n); i++)
        {
            if (n[i]=='A'||n[i]=='B'||n[i]=='C'||n[i]=='D'||n[i]=='E'||n[i]=='F')
            {
                n[i]=n[i]-55;
            }
            if (n[i]=='a'||n[i]=='b'||n[i]=='c'||n[i]=='d'||n[i]=='e'||n[i]=='f')
            {
                n[i]=n[i]-87;
            }
        }
    }
    return 0;
}
