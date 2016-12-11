#include <sys/types.h>
#include <fcntl.h>
#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
void term_handler(int i) {
  printf ("Terminating\n");
  exit(EXIT_SUCCESS);
}

int main(int argc, char ** argv) {

  struct sigaction sa;              // содержит данные об операции, выполняемой над обработчиком
  sigset_t newset;
  int sig;

   sa.sa_handler = term_handler;
   sigaction(SIGTERM, &sa, 0);      // установка и удаление обрботчиков

  printf("My pid is %i\n", getpid());
  printf("Waiting...\n");

  sigemptyset(&newset);
  sigaddset(&newset, SIGHUP);
  sigprocmask(SIG_BLOCK, &newset, 0);

  while(!sigwait(&newset, &sig))

  printf("SIGHUP recieved\n");


}
