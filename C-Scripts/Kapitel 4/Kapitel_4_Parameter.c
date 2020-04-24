#include <stdio.h>
#include <getopt.h>   //TODO Should work but getopt not found 

char c;

int main(int argc, char* argv[]) {         //Number of Parameters in argc

    printf("Anzahl der Paramter: %i\n", argc);

//Now with getopt
    while((c = getopt(argc, argv, "hvo:")) >=0) switch(c) {     //declaring the parameters; o: says there has to be a Arguments behind o

        case 'h':   printf("Es wurde Hilfe angefordert!\n");
                    break;

        case 'v':   printf("Version? Version. Version!\n");
                    break;

        case 'o':   printf("Es wurde o gegeben mit '%s'!\n", optarg);  //OptArg conatins the argument from o
                    break;

        case '?':   if (optopt == 'o') {
                        printf("Zum Parameter 'o' muss ein Argument angegeben werden!\n");
                    }
                    else
                    {
                        printf("Fehlerhafte Eingabe! Mögliche Parameter: 'hvo:'!\n");
                    }
                    break;
        default: printf("Fehler du Noob.\n");                                           //Geht nicht in den Default, keine Ahnung
    }
}
