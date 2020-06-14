#ifndef _calc_HPP_
#define _calc_HPP_

#include "i_add.h"
class Calc: public Add 
{
public:
   int add(const int x, const int y) override;   
};
#endif