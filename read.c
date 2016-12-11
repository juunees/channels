#include <stdio.h>
#include <signal.h>
#include <string.h>
#include <stdlib.h>
#include <signal.h>
#include <fcntl.h> // for open
#include <unistd.h> // for close


int main() {	 
char c;	/* принимаемый символ */
int fd;	/* канальный дескриптор */
 	 
fd = open("chanel",0);	/* открыть канал по чтению */

while(read(fd,&c,1) > 0) 	/* чтение данных из канала */
  {write(1,&c,1);	/* запись данных в канал */
}

printf("%s\n","  " );
close(fd);	/* освободить дескриптор канала */
exit(0);	/* завершить процесс reader */
} /* main reader */