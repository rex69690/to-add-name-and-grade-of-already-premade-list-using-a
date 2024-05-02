#include <stdio.h>
#include <stdlib.h>

int main() {
    char sentence[1000];

    // creating file pointer to work with files
    FILE *fp;

    // opening file in ammend mode
    //the added content will be added in the end of file
    fp = fopen("Name.txt", "a");

    // exiting program
    if (fp == NULL) {
        printf("Error!");

    }
    printf("Enter a sentence:\n");
    fgets(sentence, sizeof(sentence), stdin);
  //to take the user input via keyboard and store it in the variable sentence//
    fprintf(fp, "%s", sentence); 
    fclose(fp);
    printf("Text appended to the file successfullly")
    return 0;
}
