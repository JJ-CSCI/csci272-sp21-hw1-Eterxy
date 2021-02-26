#include "binomial.h"
using namespace std;

int Binomial::GetPower(int index){
  if (index == 1){
    return Powerone;
  }
  if (index == 2){
    return Powertwo;
  }
  else {
    return -1;
  }
}
float Binomial::GetCoefficient(int index){
  if (index == 1){
    return Coefficientone;
  }
  if (index == 2){
    return Coefficienttwo;
  }
  else {
    return -1;
  }
}
int Binomial::SetPower(int index, int newpow){
  if (index == 1){
    if (newpow < 0){
      Powerone = 1;
      return 0;
    }
    else{
      Powerone = newpow;
      return 0;
    }
  }
  if (index == 2){
    if (newpow < 0){
      Powertwo = 1;
      return 0;
    }
    else{
      Powertwo = newpow;
      return 0;
    }
  }
  else{
    return -1;
  }
}
float Binomial::Add(Binomial &B){
  if (Powerone == B.Powerone && Powertwo == B.Powertwo){
    Coefficientone += B.Coefficientone;
    Coefficienttwo += B.Coefficienttwo;
    return 0;
  }
  else{
    return -1;
  }
}
void Binomial::Multiply(float time){
  Coefficientone *= time;
  Coefficienttwo *= time;
}
void Binomial::Multiply(float coeff, int nepo){
  Coefficientone *= coeff;
  Coefficienttwo *= coeff;
  Powerone += nepo;
  Powertwo += nepo;
}