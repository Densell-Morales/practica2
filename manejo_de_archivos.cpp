#include <iostream>
#include <fstream>
#include "ctype.h"
using namespace  std;


void caso1 () {
    int arr1[] = {1, 2, 3, 4, 5,6,7,8,9,10};
    int suma;
    for (int h = 0; h < 10; h++) {
        suma= suma + arr1[h];
    }
    cout << "El total de la suma de todos los array es = "<<suma << endl;}
void caso2 () {
    int arr2[6] = {15, 2, 45, 24, 9, 1};
    int max = arr2[0];

    for(int i = 1; i < 6; i++) {
        if(arr2[i] > max) {
            max = arr2[i];

        }
        cout << arr2[i]<<endl;
    }   cout << endl;
    cout<< "El numero mayor entre el listado anterior es " << max;}


void caso3 () {
    int arr3[8] = {1, 2, 3, 4, 5, 6, 7, 8,};
    cout << "Array normal:"<< endl;
    for (int j = 0; j < 8; j++){
        cout << arr3[j] <<"," ;}
    cout << endl;
    cout << endl;
    for (int i = 0; i < 4; i++){
        swap(arr3[i], arr3[7 - i]);}
    cout << "Array invertido:"<< endl;
    for(int i = 0; i < 8; i++) {
        std::cout << arr3[i] << "," ;
    }}

void caso4 () {

    int arr4[] = {1, 2, 3, 4, 5,6,7,8,9,10};
    int sum;
    for (int k = 0; k < 10; k++) {

        sum= sum + arr4[k];
    }
    for (int k = 0; k <9; k++){
        cout << arr4[k]<< "+";}
    cout << arr4[9]<< "="<< sum ;}

void caso5 () {
    string frt[9] = {"fresa", "sandia", "melon", "fresa", "naranja", "melon", "mango", "naranja", "fresa"};
    string frt_solas[9];
    int conteo[9] = {0};
    int contador = 0;

    for(int i = 0; i < 9; i++) {
        bool encontrada = false;
        for(int j = 0; j < contador; j++) {
            if(frt[i] == frt_solas[j]) {
                conteo[j]++;
                encontrada = true;
                break;}}
        if(!encontrada) {
            frt_solas[contador] = frt[i];
            conteo[contador] = 1;
            contador++;
        }}
    cout << "Conteo de frt:" << endl;
    for(int i = 0; i < contador; i++) {
        cout << frt_solas[i] << ": " << conteo[i] << endl;}
    return ;}
