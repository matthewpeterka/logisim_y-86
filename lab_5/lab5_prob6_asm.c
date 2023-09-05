#include <stdio.h>
int very_fast_function(int i){
    int result;
    asm("movl %1, %%eax\n\t" //moves variable i to eax
        "addl $1, %%eax\n\t" //adds one to i
        "imull $64, %%eax\n\t" //multiplies i by 64
        "cmpl $1024, %%eax\n\t" //compares the number to 1024
        "jg larger\n\t" //if greater, will jump
        "movl $0, %0\n\t" //if the number is less than it will make i = 0 and jump to the end
        "jmp end\n" //jump to the end if the number is less than
        "larger:\n\t" //larger condition
        "movl %1, %0\n" //will move i into the ebx register
        "end:" //end of the code
        : "=r" (result) //result is a memory operand and it holds the return value
        : "r" (i) //i is a register operand
        : "%eax", "cc" //this represents the condition codes that are chnaged in the assembly code
    );
    return result;
}


int main(int argc, char *argv[]) { 
    int i;
    i = 40;
    printf("The function value of i is %d\n", very_fast_function(i) );
    return 0;
}