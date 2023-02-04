#include<bits/stdc++.h>
using namespace std;

bool ispossible(int r,int c){
    return (r>=0 && r<8 && c>=0 && r<8);
}
int main(){
int t;
cin>>t;
while(t-->0){
char arr[8][8];
int count;
int x,y;
for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
     cin>>arr[i][j];
    }
}
for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
        if(arr[i][j]=='#'){
            if(ispossible(i-1,j-1) && arr[i-1][j-1]=='#')
                if(ispossible(i-1,j+1) && arr[i-1][j+1]=='#')
             if(ispossible(i+1,j-1) && arr[i+1][j-1]=='#')
              if(ispossible(i+1,j+1) && arr[i+1][j+1]=='#'){
                   cout<<i+1<<" "<<j+1<<endl;
              }
        }
    }
}

}
    return 0;
}

//Input--
// 3

// .....#..
// #...#...
// .#.#....
// ..#.....
// .#.#....
// #...#...
// .....#..
// ......#.

// #.#.....
// .#......
// #.#.....
// ...#....
// ....#...
// .....#..
// ......#.
// .......#

// .#.....#
// ..#...#.
// ...#.#..
// ....#...
// ...#.#..
// ..#...#.
// .#.....#
// #.......
// Output--
// 4 3
// 2 2
// 4 5
