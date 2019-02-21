#include <iostream>
#include <string>
using namespace std;

int main(){
    int deg, dis;
    str dir;
    cin >> deg >> dis;

    if(deg < 113)
        dir = "N ";
    else if(deg < 338)
        dir = "NNE ";
    else if(deg < 563)
        dir = "NE ";
    else if(deg < 788)
        dir = "ENE ";
    else if(deg < 1013)
        dir = "E ";
    else if(deg < 1238)
        dir = "ESE ";
    else if(deg < 1463)
        dir = "SE ";
    else if(deg < 1688)
        dir = "SSE ";
    else if(deg < 1913)
        dir = "S ";
    else if(deg < 2138)
        dir = "SSW ";
    else if(deg < 2363)
        dir = "SW ";
    else if(deg < 2588)
        dir = "WSW ";
    else if(deg < 2813)
        dir = "W ";
    else if(deg < 3038)
        dir = "WNW ";
    else if(deg < 3263)
        dir = "NW ";
    else if(deg < 3488)
        dir = "NNW ";
    else
        dir = "N ";

    
}
