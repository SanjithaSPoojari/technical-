//program to read content from a file
#include<stdio.h>
#include<stdlib.h>
int main(){
   FILE *fptr;
   char fileName[30];
   printf("Enter file name:");
   scanf("%s",fileName);
   //opening <filename> for writing content
   fptr=fopen(fileName,"r");
   //checking whether the file is created or not
   if(fptr==NULL){
       printf("%s does not exist!",fileName);
       exit(0);
   }
   //file is created
   while(1){
       char ch=fgetc(fptr);
      if(ch==EOF)break;
      putc(ch,stdout);
   }
   fclose(fptr);
   return 0;
}