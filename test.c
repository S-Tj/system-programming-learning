#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*
* evaluates a numeric comparison between two values using the given operator
* returns 0 if the comparison evaluates to true,
* returns 1 otherwise
*/
int test(int a,const char* operator, int b){
    if(strcmp(operator,"-eq") == 0){ 
        return (a == b) ? 0 : 1;
    }
    else if(strcmp(operator,"-ge") == 0){ 
        return (a >= b) ? 0 : 1;
    }
    else if(strcmp(operator,"-gt") == 0){ 
        return (a > b)  ? 0 : 1;
    }
    else if(strcmp(operator,"-le") == 0){ 
        return (a <= b) ? 0 : 1;
    }
    else if(strcmp(operator,"-lt") == 0){ 
        return (a < b) ? 0 : 1;
    }
    else if(strcmp(operator,"-ne") == 0){ 
        return (a != b) ? 0 : 1;
    }

    return 1;
}

int main(int argc, char* argv[]){

    if(argc != 4){
        return 1 ;
    } 
    const char* argument = argv[2] ;
    int a = atoi(argv[1]);
    int b = atoi(argv[3]);
    return test(a, argument, b);

}