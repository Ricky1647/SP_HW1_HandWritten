#include<stdio.h>
#include<unistd.h>
#include <sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
int main(int argc,char *argv[])
{

int fd1,fd2;
char c;
fd1 = open("/home/shung/SP_HW1_HandWritten/infile.txt",O_RDONLY,0);
fd2 = open("/home/shung/SP_HW1_HandWritten/outfile.txt",O_WRONLY | O_CREAT,0666);
//execlp("ls","ls","-al","/etc/passwd",(char *)1);
//execlp("cat","cat","/home/shung/infile.txt",(char *)0);
//read(fd1,&c,1);
//printf("c = %c",c);
dup2(fd1,0);
dup2(fd2,1);
execlp("./a.out","./a.out",(char *)0);
return 0;
}
