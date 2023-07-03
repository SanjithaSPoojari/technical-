//program to read content from FILE
#include<stdio.h>
int main()
{
    FILE *fptr;
    char filename[30];
    printf("Enter file name:");
    scanf("%s",filename);
    //opening the file <filename> for reading
    fptr=fopen(filename,"r");
    //checking if the file does not exist
    if(fptr==NULL){
        printf("%s does not exist",filename);
        return 0;
    }
    //file exist
    while(!feof(fptr)){
        char sentence[80];
        //reading a line from the given file
        fgets(sentence,80,fptr);
        printf("%s",sentence);
    }
    //closing the file
    fclose(fptr);
    return 0;
}