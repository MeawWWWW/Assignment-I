#include <stdio.h>
#include <stdlib.h>

int prime(int num);

int c = 0;

int main(int argc, char **argv){
  
  int *a ,i ;
  int  n, num, min = 2147483647, max = 0 ;

  n = argc-1;
  a = (int*)malloc(sizeof(int)*n);

  for(i=1;i<argc;i++){
    
    a[i-1] = atoi(argv[i]);

    num = prime(a[i-1]);

    if(num <= min && num != 0 && num > 0) min = num;
    if(num >= max ) max = num;
 
  }

  if(c != 0){
    printf("The smallest prime is %d \n",min);
    printf("The biggest prime is %d \n",max);
  }
  else printf("There's not a prime number\n");
  
  free(a);
  return 0;
}

int prime(int num){

  int i , flag = 0 ;

  for (i = 2; i <= num / 2; i++) {

    if (num % i == 0) {
      flag = 1; // not a prime number
      break;
    }
  }

  if (flag == 0 && num != 1 && num != 0){
    //printf("return %d \n",num);
    c++;
    return num;
  }

}