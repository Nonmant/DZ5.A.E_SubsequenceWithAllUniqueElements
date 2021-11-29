//https://contest.yandex.ru/contest/27794/problems/E/

#include "funcs.h"
#include <bits/stdc++.h>

void parseFile(std::istream & input, std::ostream & output){

    int n, k;
    input >> n >> k;

    std::vector<int> a(n);
    std::copy_n(std::istream_iterator<int>(input),n,a.begin());

    std::vector<unsigned long long int> treesColors(k+1);

    for(auto i : a){
        ++treesColors[i];
    }

    int iLeft = 0, iRight = a.size()-1;
    while (true){
        if(treesColors[a[iLeft]]>1){
            --treesColors[a[iLeft]];
        } else {
            break;
        }
        ++iLeft;
    }
    while (true) {
        if(treesColors[a[iRight]]>1){
            --treesColors[a[iRight]];
        } else {
            break;
        }
        --iRight;
    }

    output << iLeft+1 << ' ' << iRight+1;
}
