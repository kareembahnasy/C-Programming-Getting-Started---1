 #include <stdio.h>


int main(){
  int i;
  int multiplier;
  scanf("%d", &multiplier );

      for (i=0 ; i <= 10; i++){
        int result = multiplier * i;
        printf("%dx%d = %d \n",i ,multiplier , result);
      }
      
    return 0;
 }
