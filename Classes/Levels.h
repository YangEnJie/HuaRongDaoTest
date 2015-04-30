#ifndef LEVELS_H_
#define LEVELS_H_


#include "tinyxml2/tinyxml2.h"
#include "cocos2d.h"

using namespace tinyxml2;
USING_NS_CC;


struct RowColRole
{
	int row = 0;
	int col = 0;
	int roleId = 0;
	int id = 0;
};





class Levels
{
public:

	static Levels* getInstance();


	

	std::vector<RowColRole> levels;


private:
	bool init();
	~Levels();

};

#endif