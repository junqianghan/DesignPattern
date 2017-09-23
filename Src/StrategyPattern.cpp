//
// Created by han on 17-9-23.
//

#include "StrategyPattern.h"
#include <iostream>
using std::cout;
using std::endl;
void strategyPatternTest(){
  CashContext cc("normal");
  cout<<cc.GetResult(100.0)<<endl;

}