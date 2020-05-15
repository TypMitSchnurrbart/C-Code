#include <string>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{
    char inhalt[80] = " ";

    FILE *reader = fopen("Input.txt", "a+");

    fscanf(reader, "%s", inhalt);       //gets whole words in order
    cout << inhalt << "\n";

    while (feof(reader) == 0)           //gets single characters, number given
    {
        fgets(inhalt, 32, reader);
        cout << inhalt << "\n";
    }

    fclose(reader);
}

