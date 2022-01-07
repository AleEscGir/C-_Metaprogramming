
#include <iostream>

using namespace std;

int main() {
    switch (auto val = GetValue(); options(val)) {
    case option1:
        // option1  
        break;
    case option2:
        // option2  
        break;
    case default:
        //default option  
        break;
    }
    return 0;
}
