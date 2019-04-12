#ifndef TEST01_H
#define TEST01_H

#include <stdio.h>
#include <stdbool.h>

struct CustomShit{
    int att1;
    bool att2;
    char* att3;
    char att4;
};

int functionVal(struct CustomShit);
int functionRef(struct CustomShit*);
void debugCustomShit(struct CustomShit datum);
void debugCustomShitRef(struct CustomShit *datum);

#endif