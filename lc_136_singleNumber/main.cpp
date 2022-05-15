//
//  main.cpp
//  lc_136_singleNumber
//
//  Created by 孙永杰 on 2022/5/15.
//

#include <iostream>
#include "singleNumber.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    vector<int> a { 2, 2, 1 };
    solution_136 s;
    std::cout << s.singleNumber( a ) << std::endl;
    vector<int> b { 4, 1, 2, 1, 2 };
    std::cout << s.singleNumber( b ) << std::endl;
    vector<int> c { 1, 1, 4, 2, 2 };
    std::cout << s.singleNumber( c ) << std::endl;
    return 0;
}
