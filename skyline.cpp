#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main(){
      int output[10000] = {0};
     int i, startx, endx, height;
     string line;
     int initial_x =0;
     int final_x = 0;
     while(true){

        getline(cin, line);

        if(line.empty()) // to indicate the end of input
                break;

        istringstream iss(line);
        iss >> startx;
        iss >> height;
        iss >> endx;

        if(initial_x == 0) initial_x = startx;

        for(i = startx; i< endx; i++){
                if(output[i] < height){
                        output[i] = height;
                }
        }
        if(endx > final_x){
                final_x = endx;
        }
     }

     for ( i = initial_x; i < final_x+1; i++) {
        if(output[i] != output[i-1])
        {
                if(i!=initial_x) cout << " ";
                cout << i << " " << output[i];
        }
     }
    cout << "\n";
    
}
