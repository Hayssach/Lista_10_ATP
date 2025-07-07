#include <stdio.h>
#include <stdlib.h>

int c = 0;

int main() {
    printf("Chamada número %d da função main()\n", ++c);

    if (c < 5) {
        main();  
    }
    
    getchar();
    return 0;
}
