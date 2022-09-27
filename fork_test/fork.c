#include <unistd.h>
#include <stdio.h>

int main() {
  printf("Start!\n");
  pid_t ret = fork();
  if (ret < 0) {
    perror("main fork error!");
  }
  else if (0 == ret) {
    printf("I am child process : ");
    while (1) {
    int i = 0;
    int s = 0;
    while (i <= 10) {
      s+= i;
      i++;
    }
    printf("s = %d\n", s);
    sleep(1);
  }
  }
  else {
    printf("I am father process : ");
    while (1) {
    int i = 1;
    int r = 1;
    while (i <= 10) {
      r *= i;
      i++;
    }
    printf("r = %d\n", r);
    sleep(2);
  }
  }
  sleep(1);
  return 0;
}
