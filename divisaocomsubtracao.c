
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    int v1, v2, result, sub;
    printf("Informe dividendo e divisor: ");
    scanf("%d %d", &v1, &v2);
    if(v1<0 && v2<0){
        v1=v1*-1;
        v2=v2*-1;
        sub=v1;
        while(sub>0){
            sub=sub-v2;
            if(sub>=0) result++;
        }
        printf("O resultado e %d", result);
    }
    else if(v1<0 && v2>0){
        v1=v1*-1;
        sub=v1;
         while(sub>0){
            sub=sub-v2;
            if(sub>=0) result++;
        }
        result=result*-1;
        printf("O resultado e %d", result);
    }
    else if(v1>0 && v2<0){
        v2=v2*-1;
        sub=v1;
         while(sub>0){
            sub=sub-v2;
            if(sub>=0) result++;
        }
        result=result*-1;
        printf("O resultado e %d", result);
    }
    else{
        sub=v1;
        while(sub>0){
            sub=sub-v2;
            if(sub>=0) result++;
        }
        printf("O resultado e %d", result);
    }
}
