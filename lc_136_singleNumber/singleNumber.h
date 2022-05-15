//
//  singleNumber.h
//  lc_136_singleNumber
//
//  Created by 孙永杰 on 2022/5/15.
//

#ifndef singleNumber_h
#define singleNumber_h

#include <vector>
#include <unordered_set>
using std::vector;
using std::unordered_set;

class solution_136 {
public:
    int singleNumber( vector< int >& nums ) {
        vector<int>::const_iterator it_v = nums.begin();
        unordered_set<int> set;
        for ( ; it_v != nums.end( ); ++it_v ) {
            unordered_set<int>::iterator it = set.find( *it_v );
            if ( it == set.end( ) ) {
                set.insert( *it_v );
            } else {
                set.erase( it );
            }
        }
        return *(set.begin());
    }
    
};

#endif /* singleNumber_h */
