#include <stdlib.h>


void createThreads(int pid, int numThreads)
{
  if(numThreads > 0)
  {
    if(pid < 0) {
      printf("Thread was not able to be created");
      exit(1);
      } else {
        if(pid != 0) {
        } else {
        printf("I am thread %d, and my parent is  %d \n", getpid(),getppid());
        pid = fork();
        wait();
        return createThreads(pid, numThreads-1);
      }
    }
  }
}

int main()
{
  int numThreads = 8;
  int pid;
  createThreads(pid, numThreads);
}