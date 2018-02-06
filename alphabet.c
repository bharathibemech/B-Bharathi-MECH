#include <stdio.h>

void main()
{
    char b;    
    if((b<'z'&&b>'a')|(b<'Z'&&b>'A')){
        printf("Alphabet");
    }else {
        printf("No");
    }
}
