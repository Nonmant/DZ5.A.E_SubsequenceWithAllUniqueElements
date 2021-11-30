//https://contest.yandex.ru/contest/27794/problems/E/

#include "funcs.h"
#include <bits/stdc++.h>

void parseFile(std::istream & input, std::ostream & output){

    int n, k;
    input >> n >> k;

    std::vector<int> a(n+1);
    std::copy_n(std::istream_iterator<int>(input),n,a.begin()+1);

    std::vector<int> treesColors(k+1);

    int colors = 0;
    int minLen = -1;
    int iLeft, iRight;

    for(int i=1; i<a.size(); ++i){
        if(treesColors[a[i]] == 0)
            ++colors;
        treesColors[a[i]] = i;
        if(colors == k){

            int iL = *std::min_element(treesColors.begin()+1, treesColors.end());
            int len = i - iL + 1;
            if(len < minLen || minLen == -1){
                minLen = len;
                iLeft = iL;
                iRight = i;
                if(minLen == k)
                    break;
            }
        }
    }

    output << iLeft << ' ' << iRight;
}
