#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void conversao(int n, int bi, int bf)
{
    int ba, d, r, NA, N, x, c, m,sn;
    float p;
    setlocale(LC_ALL,"portuguese");
    p=1;
    x=0;
    N=0;
    sn=n;
    if (bi==10||bf==10)
    {
        while (n>0)
        {
            r=n%bf;
            p=pow(bi,x);
            N=N+p*r;
            n=n/bf;
            x=x+1;
        }
    }
    else
    {
        ba=10;
        NA=0;
        p=1;
        x=0;
        while (n>0) /*BI->BA*/
        {
            r=n%ba;
            p=pow(bi,x);
            NA=NA+p*r;
            n=n/ba;
            x=x+1;
        }
        p=1;
        x=0;
        while (NA>0) /*BA->BF*/
        {
            r=NA%bf;
            p=pow(ba,x);
            N=N+p*r;
            NA=NA/bf;
            x=x+1;
        }
    }
    printf("\n%d na base (%d) == %d na base (%d)\n\n",sn,bi,N,bf);
}
