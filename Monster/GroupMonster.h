#ifndef _GROUP_MONSTER_H_
#define _GROUP_MONSTER_H_

#include "cocos2d.h"

USING_NS_CC;

class GroupMonster: public Node
{
public:     
    static GroupMonster* initGroupEnemy(int type, int road, int path);
    CREATE_FUNC(GroupMonster);  
	CC_SYNTHESIZE(int, type, Type);	//保存怪物类型
	CC_SYNTHESIZE(int, road, Road);	//保存怪物出口
	CC_SYNTHESIZE(int, path, Path);	//保存怪物路线
};

#endif