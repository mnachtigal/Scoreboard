#include <iostream>
#include "scoreboard.h"

using namespace std;

Scoreboard::Scoreboard(int competitors, int period) {
   m_competitors.resize(competitors);
   m_scores.resize(competitors);
   for (int i = 0; i < m_scores.size(); ++i) {
      m_scores[i].resize(period);
   }
   m_period = period;
}

void Scoreboard::setScore(int competitor, int period, int score)
{
   if (competitor > 0 && competitor <= m_scores.size() && period > 0 && period <= m_scores[0].size()) {
      m_scores[competitor - 1][period - 1] = score;
   }
}

int Scoreboard::getScore(int competitor, int period)
{
   if (competitor > 0 && competitor <= m_scores.size() && period > 0 && period <= m_scores[0].size()) {
      return m_scores[competitor-1][period-1];
   } else {
      return INT_MIN;
   }
}

int Scoreboard::getTotalScore(int competitor)
{
	int score = 0;
	for(int i = 0; i < m_scores.size(); i++)
	{
		score = score + m_scores[competitor][i];
	}

	return score;
}

void Scoreboard::clearScoreboard()
{
	for(int i = 0; i < m_scores.size();i++)
	{
		for(int j = 0; j < m_scores[i].size();j++)
		{
			m_scores[i][j] = 0;
		}
	}
}
