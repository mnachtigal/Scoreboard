#ifndef SCOREBOARD_H
#define SCOREBOARD_H

#include <iostream>
#include "IScoreboard.h"
using namespace std;


class Scoreboard : public IScoreboard {
   public:
      Scoreboard(int competitor, int period, int score);
   private:
      int m_competitor;
      int m_period;
      int m_score;
};
#endif
