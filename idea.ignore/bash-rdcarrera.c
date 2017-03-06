#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main( int argc, char *argv[] )  {
    //char letters[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h','i', 'j', 'k', 'l', 'm', 'n', 'o', 'p','r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char letters[62] = {'c', 'o', 'a', 'g', 'O', 'l', 'U', 'X', 'C', '9', 'z', '8', 'E', 'r', '6', 'f', 'G', 'T', 'M', 'p', 'n', '1', 'S', 'P', 'D', 'v', 's', 'b', 'q', '5', 'V', 'A', '7', 'W', '0', 'I', 'B', 'i', 'd', 'K', '2', 'Y', '3', 'm', 'R', 'u', 'w', '4', 't', 'H', 'N', 'Q', 'F', 'x', 'j', 'k', 'Z', 'J', 'h', 'y', 'e', 'L'};
    char buf[BUFSIZ];
    FILE *fp;
    char path[1035];
    if( argc > 1 ) {
        if( access( argv[1], F_OK ) != -1 ) {
            if( argc > 2 ){
                //snprintf(buf, sizeof(buf), "cat-sed %s| gpg --yes --batch --passphrase=%s%s%s%s 2> /dev/null |bash -s -- %s",argv[1],P1,P3,P2,P4,argv[2]);
                snprintf(buf, sizeof(buf), "%c%c%c %s |%c%c%c '/#\\!\\//d'| %c%c%c --%c%c%c --%c%c%c%c%c --%c%c%c%c%c%c%c%c%c%c=%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c 2> /%c%c%c/%c%c%c%c |%c%c%c%c -%c -- %s",letters[0],letters[2],letters[48],argv[1],letters[26],letters[60],letters[38],letters[3],letters[19],letters[3],letters[59],letters[60],letters[26],letters[27],letters[2],letters[48],letters[0],letters[58],letters[19],letters[2],letters[26],letters[26],letters[19],letters[58],letters[13],letters[2],letters[26],letters[60],letters[20],letters[5],letters[2],letters[46],letters[2],letters[49],letters[61],letters[40],letters[29],letters[38],letters[40],letters[20],letters[27],letters[21],letters[36],letters[43],letters[19],letters[51],letters[42],letters[12],letters[38],letters[60],letters[25],letters[20],letters[45],letters[5],letters[5],letters[27],letters[2],letters[26],letters[58],letters[26],argv[2]);
            }else{
                //snprintf(buf, sizeof(buf), "cat-sed %s| gpg --yes --batch --passphrase=%s%s%s%s 2> /dev/null |bash",argv[1],P1,P3,P2,P4);
                snprintf(buf, sizeof(buf), "%c%c%c %s|%c%c%c '/#\\!\\//d'| %c%c%c --%c%c%c --%c%c%c%c%c --%c%c%c%c%c%c%c%c%c%c=%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c 2> /%c%c%c/%c%c%c%c |%c%c%c%c",letters[0],letters[2],letters[48],argv[1],letters[26],letters[60],letters[38],letters[3],letters[19],letters[3],letters[59],letters[60],letters[26],letters[27],letters[2],letters[48],letters[0],letters[58],letters[19],letters[2],letters[26],letters[26],letters[19],letters[58],letters[13],letters[2],letters[26],letters[60],letters[20],letters[5],letters[2],letters[46],letters[2],letters[49],letters[61],letters[40],letters[29],letters[38],letters[40],letters[20],letters[27],letters[21],letters[36],letters[43],letters[19],letters[51],letters[42],letters[12],letters[38],letters[60],letters[25],letters[20],letters[45],letters[5],letters[5],letters[27],letters[2],letters[26],letters[58],letters[26],argv[2]);
            }

            fp = popen(buf, "r");
            if (fp == NULL) {
                printf("Failed to run command\n" );
                exit(1);
            }

            while (fgets(path, sizeof(path)-1, fp) != NULL) {
                printf("%s", path);
            }

            pclose(fp);
            }
            else {
                printf("The file supplied doesn't exist %s\n", argv[1]);
            }
    }
    else {
        printf("One argument expected.\n");
    }
    return 0;
}
