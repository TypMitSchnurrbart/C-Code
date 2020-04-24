#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <Windows.h>

void SignalCallback(const int signal)
{
    puts("Jausa da passiert was!"); 
    exit(1);
}


main()
{
    while (1 < 2)
    {
        printf("Hallo, dies ist Test!\n");
        usleep(500);
        signal(SIGINT, SignalCallback); //if SIGINT signal comes in, call function
    }
    
}
