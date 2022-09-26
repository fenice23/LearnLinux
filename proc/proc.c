#include "proc.h"

void proc() {
  char bar[NUM] = "";
  const char* lable = "\\|/-";
  memset(bar, '\0', sizeof(bar));
  int i = 0;
  while (i < 100) {
    bar[i++] = '#';
    usleep(40000);
    printf("[%-100s][%3d%%][%c]\r", bar, i, lable[i % 4]);
    fflush(stdout);
  }
  printf("\n");
}
