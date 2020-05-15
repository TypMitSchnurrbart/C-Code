#include <stdlib.h>
#include <stdio.h>
#include <getopt.h>
#include <string>
#include <iostream>
#include <Windows.h>
#include <typeinfo>
using namespace std;

int hex_liste(int count_value, string mode_flag) {
    /*
    Making and printing the Hex-List
    param: count_val {int} - Length of the List Rows
    param: mode_flag {string} - Operation Mode (hex; okt)
    */
    FILE *reader = fopen("Input.txt", "r");

    int i;
    char ascii;
    char chr;
    char text[15];

    if (reader == NULL)
    {
    printf("No File found! Error 21\n");
    }
    else
    {
        while((chr = fgetc(reader)) != EOF)             //Sobald chr zu EndOfFile wird
        {
            printf("%p - ", &ascii);

            for (i = 0; i < count_value; i++)
            {
                fread(&ascii, sizeof(char), 1, reader);

                if (mode_flag == "hex") {               //Print in HEX
                    printf("%x ", ascii);
                }
                else if (mode_flag == "okt") {
                    printf("%o", ascii);                //Print in Oktal
                }
                text[i] = ascii;
            }
            printf("- [%s]", text);                     //Print in ASCII 
            printf("\n");
        }
    }
    fclose(reader);
}


int help() {
    /*
    Printing the Help - Page
    */
    printf("Setting up the Help Page of the HexViewer... \n\t-h : Opening the Help Window\n\t-v : Output of the Version\n\t-c : Configure the Line Width, default=16\n\t-o : Output in OKTAL\n");
}

int version() {
    /*
    Printing out Version and Author
    */
    printf("Version: 1.2\nCopyright Alexander Mueller TIT19\n");
}

int main(int argc, char* argv[]) {
    /*
    Main Function
    param: argc {int} - number of parameters
    param: argv {array} - parameters with arguments
    */
    int count_value = 16;
    char c;
    string mode_flag = "hex";

    //Parameter parsing
    while((c = getopt(argc, argv, "hvc:o")) >= 0) switch(c)
    {
    case 'h' : help();
                exit(1);
    case 'v' : version();
                exit(2);
    case 'c' : count_value = atoi(optarg);
                break;
    case 'o' : mode_flag = "okt";
                break;
    default:
        exit(3);
    }

    hex_liste(count_value, mode_flag);
}
