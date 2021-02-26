using namespace std;

#ifndef Binomial_h
#define Binomial_h

class Binomial{

  float Coefficientone{1.0};
  float Coefficienttwo{1.0};
  int Powerone{1};
  int Powertwo{1};

public:
  Binomial():Binomial(Coefficientone = 1.0, Powerone = 1, Coefficienttwo = 1.0, Powertwo = 1){}
  
  Binomial(float coef1):Binomial(Coefficientone = coef1, Powerone = 1, Coefficienttwo = 1.0, Powertwo = 1) {}

  Binomial(float coef1, int pow1):Binomial(Coefficientone = coef1, Powerone = pow1, Coefficienttwo = 1.0, Powertwo = 1){}
  
  Binomial(float coef1, int pow1, float coef2):Binomial(Coefficientone = coef1, Powerone = pow1 , Coefficienttwo = coef2, Powertwo = 1){}

  Binomial(float coef1, int pow1, float coef2, int pow2){
    Coefficientone = coef1;
    Coefficienttwo = coef2;
    Powerone = pow1;
    Powertwo = pow2;
    if (coef1 < 1){
      Coefficientone = 1.0;
    }
    if (coef2 < 1){
      Coefficienttwo = 1.0;
    }
    if (pow1 < 1){
      Powerone = 1;
    }
    if (pow2 < 1){
      Powertwo = 1;
    }
  }

  int GetPower(int index);
  float GetCoefficient(int index);
  int SetPower(int index, int newpow);
  float Add(Binomial &B);
  void Multiply(float time);
  void Multiply(float coeff, int nepo);
};

#endif