#include <iostream>
#include <csignal>
#include <signal.h>

using namespace std;

int main(){

    raise(SIGALRM);

    return 0;
}