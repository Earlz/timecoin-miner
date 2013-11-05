#include <stdlib.h>
#include <stdio.h>
#include "sha256.h"

int main(int argc, char** argv){
    if(argc == 0){
        printf("usages: timecoinm lastfile\n");
        printf("timecoinm seed targettime filepattern\n");
        printf("lastfile format: \n");
        printf("count: X\n");
        printf("hash: X(in hex)\n");
        printf("seconds: X\n");
        printf("end.\n");
        printf("Will save progress to filepattern.1 and filepattern.0 alternatively to avoid lost progress\n");
    }
    return 0;

}
