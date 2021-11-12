#include <stdio.h>
#include <signal.h>
#include <ctype.h>
#include <string.h>
#include <sys/time.h>
#include <unistd.h>
#include <stdlib.h>
#include <arpa/inet.h>

#define IPMAXLENGTH 46
int main(int argc, char *argv[])
{
    int i;
    char mode;
    char ip[IPMAXLENGTH];
    char hostname[]
    if (argc < 2)
    {
        fprintf(stderr,
                "usage: mytalk [ -v ] [ -a ] [ -N ] [ hostname ] port\n");
        exit(1);
    }
    if (argc == 2)
    {
        /*We are in server mode*/
    }
    if (argc == 3)
    {
    }
    if (argc == 4)
    {
    }
    if (argc == 5)
    {
    }
    if (argc == 6)
    {
        /*We are for sure in client mode*/
    }

    return 0;
}