#include "types.h"
#include "user.h"
#include "syscall.h" 
 
 
void f1(void);

int main (int argh,char *argv[]){

int j;

for(j=0;j<1;j++){
	 if(fork(10)==0){
	      f1();
              printf(1,"teste\n");
	      exit(); 
     }
}

for(j=0;j<2;j++) wait();
exit();
}

void f1(void){

int i=0;	
	
while(i<1000000000){
	//printf(1,"\n%d",getpid());
	i++;
}
}
