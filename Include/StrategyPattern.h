//
// Created by han on 17-9-23.
//

#ifndef DESIGNPATTERN_STRATEGYPATTERN_H
#define DESIGNPATTERN_STRATEGYPATTERN_H

#include <string>
using std::string;

class CashSuper{
  public:
    virtual double acceptCash(double money)=0;
};

class CashNormal : public CashSuper{
  public:
    double acceptCash(double money) override {
      return money;
    }
};

class CashRebate : public CashSuper{
  public:
    CashRebate(double moneyRebate){
      this->moneyRebate = moneyRebate;
    }

    double acceptCash(double money) override {
      return money*moneyRebate;
    }

  private:
    double moneyRebate = 1.0;
};

class CashReturn : CashSuper{
  public:
    CashReturn(double moneyCondition, double moneyReturn){
      this->moneyCondition=moneyCondition;
      this->moneyReturn=moneyReturn;
    }

    double acceptCash(double money) override {
      double result = money;
      if(money >= moneyCondition)
        result = money - (money/moneyCondition)*moneyReturn;
      return result;
    }

  private:
    double moneyCondition = 0.0;
    double moneyReturn = 0.0;
};

class CashContext{
  public:
    CashContext(string type){
      if(type == "normal"){
        cs = new CashNormal();
        return ;
      }

    }

    ~CashContext(){
      delete cs;
    }

    double GetResult(double money){
      return cs->acceptCash(money);
    }
  private:
    CashSuper *cs;

};

void strategyPatternTest();
#endif //DESIGNPATTERN_STRATEGYPATTERN_H
