#include"header.h"
#include"declaration.h"

void* exitF(void *arg){
	
	if(strncmp(arg , "Success", 7) == 0){
		exit(EXIT_SUCCESS);
	}
	else if(strncmp(arg , "Failure", 7) == 0){
		exit(EXIT_FAILURE);
	}
	




}
