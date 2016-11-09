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
   m_scores[competitor - 1][period - 1] = score;
}

int Scoreboard::getScore(int competitor, int period)
{

}

int Scoreboard::getTotalScore(int competitor)
{

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
