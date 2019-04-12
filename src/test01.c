#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdint.h>

#include "test01.h"

#include "log.h"
#include "util.h"


int functionVal(struct CustomShit datum){
    datum.att1 = 87;
    datum.att2 = true;
    datum.att3 = "Drogaaaa\0";
    datum.att4 = 'f';  

    debugCustomShit(datum);

    return 0;
}

int functionRef(struct CustomShit* datum){
    if(!datum)
        datum = (struct CustomShit*) malloc(sizeof(struct CustomShit));

    if(!datum){
        errorLog("Error during Allocating memory for %s", "struct CustomShit* datum");
        return -1;
    }

    datum->att1 = 23;
    datum->att2 = true;
    datum->att3 = "Mammamiaaaa\0";
    datum->att4 = 'K';

    debugCustomShit(*datum);

    return 0;
}

void debugCustomShit(struct CustomShit datum){
    debugLog("att1 = %d", datum.att1);  
    debugLog("att2 = %d", datum.att2);  
    debugLog("att3 = %s", datum.att3);  
    debugLog("att4 = %c", datum.att4);  
}