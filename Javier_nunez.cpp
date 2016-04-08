//
// Created by Garuk496 on 07-04-2016.
//

#include "Javier Nûñez.hpp"
#include <iostream>
using namespace std;
//problema 1
void agregar(data x){
    insert(x);
}
data sacar(){
    if(isempty()==false){
        delete();
    }
}
bool estavacio(){
    if(isempty()==true){
        return true;
    } else {
        return false;
    }
}
bool pertenece(data x){
    Tda aux = head;
    int c=0;
    if(isempty()== true){
        return false;
    }else if(isempty() == false && aux->data != x){
        while(aux->data != x){
            if(aux->data == x){
                c++;
            }
            aux=aux->next;
        }
        if (c>0){
            return true;
        } else {
            return false;
        }
    }else {
        return  false;
    }
}
//pregunta 2
void agregar(item i){
    if(isempty()){
        head=new nodo(i);
        return;
    }
    nodo *aux= new nodo(i);
    aux->next= nullptr;
    head=aux;
}
int main (){

}
