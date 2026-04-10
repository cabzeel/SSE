#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
    int state, nl, nc, nw, c;
    
    state = OUT;
    nl = nc = nw = 0;
    while((c = getchar()) != EOF) {
        ++nc;
        if(c == '\n')
            ++nl;
        if(c == '\n' || c == ' '|| c == '\t')
            state = OUT;

        else if(state == OUT) {
            state = IN;
            ++nw;
        }
   }

    printf("%d %d %d \n", nw, nl, nc);
}
