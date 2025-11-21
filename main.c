#include <stdio.h>
int main()
{
    int a, b, c;
    printf("unesi neki broj");
    scanf("%d",&a);
    printf("unesi drugi broj");
    scanf("%d",&b);
    if(a == b){
    printf("brojevi su isti \n");
    }
    else{
    printf("brojevi su razliciti \n");}
    c = a+b;
    printf("ako te zanima njihov zbroj onda je to %d",c);

    }
    return 0;
}
