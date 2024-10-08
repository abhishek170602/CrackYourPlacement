#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        reverse(begin(matrix), end(matrix));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i<j) swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
};