#include<sys/types.h>
#include<fcntl.h>
#include<stdio.h>
#include<string.h>
#include<unistd.h>


#define FIFO_FILE "MYFIFO"

int main()
{
 int fd;
 char readbuf[80];
 int to_end;
 int read_bytes;
 
 /*create the fifo*/
  mknod(FIFO_FILE,S_IFIFO|0640,0);
  strcpy(end,"end")
  
  while(1)
  {
     fd=open(FIFO_FILE,O_RDONLY);
     read_bytes=read(fd,readbuf,sizeof(readbuf));
     readbuf[read_bytes]='\0';
     printf("Receving string: \"%s\" and length is %d\n",readbuf,(int)strlen(readbuf));
     to_end=strcmp(eadbuf,end);
     if(to_end==0)
     {
      close(fd);
      break;
     }

}
return 0;
}
