#include <stdio.h>
#include <stdlib.h>

int count = 0;

int main() {
    printf("Chamada número %d da função main()\n", ++count);

    if (count < 5) {
        main();  // Chamada recursiva
    }
    
    getchar();
    return 0;
}
