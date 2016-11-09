#ifndef SCOREBOARD_H
#define SCOREBOARD_H

#include <iostream>
#include "IScoreboard.h"
using namespace std;


class Scoreboard : public IScoreboard {
   public:
      Scoreboard(int competitors, int period, int score);
	   void setScore(int competitor, int period, int score);
	   int getScore(int competitor, int period);
	   int getTotalScore(int competitor);
	   void clearScoreboard();
   private:
      // each index coincides with competitor/score
      vector<int> m_competitors;
      int m_period;
      vector<vector<int>> m_scores;
};
#endif
