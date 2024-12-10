#include <stdio.h>
#include "comp/mylib.h"

int main () {
    int result = mylib();
    if(result == 42) {
        printf("OK: 42 returned\n");
        return 0;
    }
    else {
        printf("FAIL: %d returned\n", result);
        return 1;
    }
}
