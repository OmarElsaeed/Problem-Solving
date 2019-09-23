#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ans = 0;
    bool evilRow , evilCol;
    int r,c,cleanRow = 0;
    cin>>r>>c;
    char arr[r][c];
    for(int i = 0; i<r; i++){
            evilRow = false;
        for(int j = 0; j < c; j++){
            cin>>arr[i][j];
            if(arr[i][j] == 'S'){evilRow = true;} //check if the row has S so it will be evil and didn't count that row
        }
        if (evilRow != true) {ans += c; cleanRow += 1; }
    }
   for(int i = 0; i<c; i++){
            evilCol = false;
        for(int j = 0; j < r; j++){
            if(arr[j][i] == 'S'){evilCol = true;}//traversing the array column by column 
        }
        if (evilCol  != true) {ans += (r - cleanRow);}//here i subtracted the from not evil column the number of not evil row cause i already counted that cake..
    }
    cout<<ans<<endl;
    return 0;
}
