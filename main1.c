#include <stdio.h>
#include <omp.h>
int main(void){
	static int cnt=0;
    #pragma omp parallel 
    {
        printf("Hello World! from Shivam Chougule 2018BTECS00112 :%d\n",cnt++);
    }
    #pragma omp parallel 
    {
        printf("Walchand College of Engineering, Sangli:%d \n",cnt++);
    }
    #pragma omp parallel 
    {
        printf("Hello World!:%d\n",omp_get_thread_num());
    }

    return 0;
}
