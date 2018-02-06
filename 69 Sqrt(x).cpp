//
//  69 Sqrt(x).cpp
//  leetcode
//
//  Created by william wei on 06/02/2018.
//  Copyright © 2018 william wei. All rights reserved.
//

#include <stdio.h>

class Solution {
public:
    int mySqrt(int x) {
        if(!x) return 0;
        int low = 1, high = x;
        while (true) {
            int mid = (low + high) / 2;
            if (x / mid < mid) {
                high = mid;
            } else if (x / mid == mid) {
                return mid;
            } else if(x / (mid + 1) < mid + 1) {
                return mid;
            } else {
                low = mid;
            }
            
        }
    }
};
