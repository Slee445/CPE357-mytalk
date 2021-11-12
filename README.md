#include<stdio.h>
#include <signal.h>
#include <ctype.h>
#include <string.h>
#include <sys/time.h>
#include <unistd.h>
#include <stdlib.h>


int main(int argc, char* argv[]){
   int i;
   char mode;

   if(argc < 2){
      fprintf(stderr, "usage: mytalk [ -v ] [ -a ] [ -N ] [ hostname ] port\n");
      exit(1);
   }
   
   return 0;
}
