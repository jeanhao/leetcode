#ifndef TBITMANIPULATION_H_
#define TBITMANIPULATION_H_

#include <iostream>
using namespace std;

template<class T>
T my_max(T val1, T val2){
    return val1 > val2 ? val1 : val2;
}
class Solution {
public:
    int hammingDistance(int x, int y) {
        int num = 0;
        while(x || y){
            if((x & 1) != (y & 1)){
                num ++;
            }
            x >>= 1;
            y >>= 1;
        }
        return num;
    }
};

#endif /* TBITMANIPULATION_H_ */
