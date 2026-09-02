#include<stdio.h>
/*
file hnadling: to permanent store data
open

|
write/read
|
close
*/
int main() {
    FILE*fp;
    // to create and open a file
    fp=fopen("student.txt","a");
    //to write into file
    fprintf(fp,"\nSurat");
    fclose(fp);
    return 0;
}