#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void display(char** output){
    printf("%s\n", *output);
    *output = "This is another test";
}

int main(int argc, char* argv[])
{
    char* str = "This is a test";
    display(&str);
    printf("After the call: %s\n", str);
    return 0;
}