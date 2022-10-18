// NAMA		: MAULANA ANDRA WIRATAMA
// NRP		: 2042221075
// Jurusan	: TEKNIK INSTRUMENTASI 

#include <iostream>
#include <cmath>

#define GRAVITASI 10 //10 m/s^2
#define START_PENGUKURAN 1 //pengukuran dimulai dari 1 meter
#define SUDUT 45 //sudut elevasi tembakan

using namespace std;

int mencari_V0(int x){
    float v0;
	if ((x>= 1) && (x<=10)){
     v0 = x - 1;
    } else if ((x>=11) && (x<=20)){
     v0 = x - 3;
    } else if ((x>=21) && (x<=30)){
     v0 = x - 5;
    }  
    
    return v0;
}

float speed_dgn_loss(int y){
   float vt;
	if ((y>= 1) && (y<=10)){
        vt = y + 1;
    } else if ((y>=11) && (y<=20)){
        vt = y + 3;
    } else if ((y>=21) && (y<=25)){
        vt = y + 5;
    }  
    
    return vt;
}

int main() {
    int jarak;
    float v0;
    float vtangensial;
    
    v0 = mencari_V0(30);
    jarak =pow(v0,2)*1/GRAVITASI;
    vtangensial = speed_dgn_loss(24.8998);
    //vtangensial = speed_dgn_loss(mencari_V0(30));
    std::cout << jarak << " " << "29.8998" << std::endl;
    
    return 0;
}