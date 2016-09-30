#include "types.h"
#include "user.h"
#include "syscall.h" 
 
 
void f1(void);

int main (int argh,char *argv[]){
int p[argh];
int j;

for(j=0;j<argh;j++){
	 p[j]=atoi(argv[j]);
	 if(fork(p[j])==0){
	      f1();
	      exit(); 
     }
}

for(j=0;j<10000;j++) {
wait();
}
exit();

}
void f1(void){

int i=0;	
	
//while(i<19999999909){
	i++;
//}
i=0;
while(i<19999990999){
	i++;
}
}

