#include <stdio.h>
int main() {

    char ch;

    scanf("%c", &ch);

    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <='z')) {
        printf("%c is a letter\n", ch);
    }
    else if(ch >= '0' && ch <= '9') {
        printf("%c is a digit\n", ch);
    }
    else {
        printf("%c is a special character\n", ch);
    }

    return 0;
}
