//program to create a new text file
#include<stdio.h>
#include<stdlib.h>
int main(){
   FILE *fptr;
   char filename[30];
   scanf("%s",filename);
   //opening <filename> for writing content
   fptr=fopen(filename,"w");
   //checking whether the file is created or not
   if(fptr==NULL){
       printf("File creation error!");
       exit(0);
   }
   //file is created
   while(1){
       char ch;
       //getting character
       ch=getc(stdin);
       //checking whether the character is end of file
       if(ch==EOF)break;
       //otherwise write that character into file
       fputc(ch,fptr);
   }
   printf("%s file saved!",filename);
   //closing that file
   fclose(fptr);
   return 0;
}