#include <stdio.h>
#include <time.h>

#include "log.h"
#include "util.h"

#include "test01.h"

int main(int argc, char* argv[]){
    struct timeval st, et;
    setbuf(stdout, NULL);
    setbuf(stderr, NULL);

    getTick(&st);
    infoLog("Starting");
  
    struct CustomShit uno;
    struct CustomShit *due;
    struct CustomShit tre;
    struct CustomShit *quattro;

    //debugLog("By Value - %s", "uno");
    //functionVal(uno);
    //debugCustomShit(uno);

    //debugLog("By Value - %s", "due");
    //functionVal(*due);
    //debugCustomShit(*due);

    debugLog("By Ref - %s", "tre");
    functionRef(&tre);
    debugCustomShit(tre);

    //debugLog("By Ref - %s", "quattro");
    //functionRef(quattro);
    //debugLog("quattro->att1 = %d", quattro->att1);

    getTick(&et);
    infoLog("Completed. ETA %s", getETA(st, et));

    return 0;
}