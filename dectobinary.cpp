#include <iostream>
using namespace std;

int ans = 0, pow = 1; 

int decToBinary(int decNum) {
        while(decNum > 0) {
        int rem = decNum % 2;
        decNum /= 2;

        ans += (rem * pow);
        
        pow *= 10;
    }
    return ans;
}

int main() {
    int decNum;

    cout<<"Enter the decimal integer number : ";
    cin>>decNum;

    if(decNum < 0) {
        cout<<"Enter a number >= 0";
        cout<<"Enter the decimal integer number : ";
        cin>>decNum;
    }
    else if(decNum == 0) {
        cout<<"The binary equivalent of the decimal number : "<<decNum<<" is : '0' "<<endl;    
    }
    else {
        int binaryNum = decToBinary(decNum);

        cout<<"The binary equivalent of the decimal number : "<<decNum<<" is : "<<binaryNum<<" "<<endl;
    }

    return 0;
}