#include <stdio.h>

int main()
{
    int tabuada = 1;
    while (tabuada<=10){
        for(int x = 1; x<=10; ++x){
            printf("%ix%i = %i\n", tabuada, x, x * tabuada);
        }
        tabuada=tabuada+1;
        printf("\n");
    }

    return 0;
}
