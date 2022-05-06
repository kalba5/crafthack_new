#include "graphics.hpp"
using namespace genv;
const int XX=800;
const int YY=600;
//modositas

int main()
{
    gout.open(XX,YY);
    gout << font("LiberationSans-Regular.ttf",20);
    gout <<text("hello world")<< refresh;
    event ev;
    while(gin >> ev) {
    }
    return 0;
}
