/****************************************************************************
                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/



    #include <stdio.h>
    #include <float.h>
    #include <limits.h>


    
int main(void)
{
	printf("double型の最大値:%g\n",DBL_MAX);
	printf("double型の最低値:%g\n",DBL_MIN);
	printf("double型の精度:%d\n",LDBL_DIG);
	printf("int型の最大値:%d\n",INT_MAX);
	printf("int型の最低値:%d\n",INT_MIN);
	
	
	printf("%g\n",INT_MAX);
	printf("charの最大値:%d\n",CHAR_MAX);
	/*
	%gは2e－3などで%dは43234232など
	*/
    return 0;
    
}


