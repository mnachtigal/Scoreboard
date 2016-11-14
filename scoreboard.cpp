#include <iostream>
#include "scoreboard.h"

using namespace std;

Scoreboard::Scoreboard(int competitors, int period) {
   m_competitors.resize(competitors);
   m_scores.resize(competitors);
   for (unsigned int i = 0; i < m_scores.size(); ++i) {
      m_scores[i].resize(period);
   }
   m_period = period;
}

void Scoreboard::setScore(int competitor, int period, int score)
{
   int num_competitors = m_scores.size();
   int num_periods = m_scores[0].size();
   if (competitor > 0 && competitor <= num_competitors
         && period > 0 && period <= num_periods) {
      m_scores[competitor - 1][period - 1] = score;
   }
}

int Scoreboard::getScore(int competitor, int period)
{
   int num_competitors = m_scores.size();
   int num_periods = m_scores[0].size();
   if (competitor > 0 && competitor <= num_competitors 
         && period > 0 && period <= num_periods) {
      return m_scores[competitor-1][period-1];
   } else {
      return INT_MIN;
   }
}

int Scoreboard::getTotalScore(int competitor)
{
	int score = 0;
	for(unsigned int i = 0; i < m_scores.size(); i++)
	{
		score = score + m_scores[competitor][i];
	}

	return score;
}

void Scoreboard::clearScoreboard()
{
	for(unsigned int i = 0; i < m_scores.size();i++)
	{
		for(unsigned int j = 0; j < m_scores[i].size();j++)
		{
			m_scores[i][j] = 0;
		}
	}
}
