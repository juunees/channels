#include <stdio.h>
#include <signal.h>
#include <string.h>
#include <stdlib.h>
#include <signal.h>
#include <fcntl.h> // for open
#include <unistd.h> // for close
#include <fcntl.h>

int main() {	 

/*char *str = "Hello"; 	/* передаваемая строка */
int fd;	/* дескриптор канала */

pipe = "chanel";

char str[32] = "";	
printf("Введите слово ");
        if (scanf ("%s", str) != 1) {
            printf("Что-то пошло не так.");
            return 1;
        }
        

fd = open("chanel",1);	/* открыть канал по записи */
write(fd,str,strlen(str));	/* записать данные в канал */
close(fd);

	/* освободить дескриптор канала */
exit(0);	/* завершить процесс writer */
} /* main writer */	 