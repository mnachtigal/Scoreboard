#include <iostream>
#include "scoreboard.h"

using namespace std;

Scoreboard::Scoreboard(int competitors, int period) {
   m_competitors.resize(competitors);
   m_score.resize(competitors);
   for (int i = 0; i < m_score.size(); ++i) {
      m_score[i].resize(period);
   }
   m_period = period;
}

void setScore(int competitor, int period, int score)
{

}
int Scoreboard::getScore(int competitor, int period)
{

}
int Scoreboard::getTotalScore(int competitor)
{
	int score = 0;
	for(int i = 0; i < m_score.size(); i++)
	{
		score = score + m_score[competitor][i];
	}

	return score;
}
void Scoreboard::clearScoreboard()
{
	for(int i = 0;i < m_score.size();i++)
	{
		for(int j = 0; < m_score[i].size();j++)
		{
			m_score[i][j] = 0;
		}
	}
}
