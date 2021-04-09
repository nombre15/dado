//version 1.0 , todavia estoy intentando hacer que el usuario ponga cuanbtas veces va a tirar el dado

#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <math.h>
#include <time.h>
using namespace std;

void dado1(void);
void dado2(void);
void suma (void);

int sum = 0;
int numero1 = 0;
int numero2 = 0;


int main(){

   thread dado1_thread (dado1);
   this_thread::sleep_for (chrono::seconds(1));
   thread dado2_thread (dado2);
   dado1_thread.join();
   dado2_thread.join();

}

void dado1(){

    srand(time(0));
    for(int i = 0; i <= 10; i++){

    i = 1 + rand() %6;
    numero1 = i;
    cout << "dado 1: " << i << endl;
    this_thread::sleep_for (chrono::seconds(3));
   }
}

void dado2(){

    srand(time(0));
    for(int x = 0; x >= 0; x--){

    x = 1 + rand() %6;
    numero2 = x;
    cout << "dado 2: " << x << endl;
    suma();
    this_thread::sleep_for (chrono::seconds(3));
    }
}

void suma(){

   sum = numero1 + numero2;
   cout << "total ==> " << sum << endl;
}




