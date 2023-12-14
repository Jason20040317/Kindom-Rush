#ifndef _WASPHORNET_H_
#define _WASPHORNET_H_

#include "BaseMonster.h"
#include "cocos2d.h"
USING_NS_CC;

class WaspHornet : public BaseMonster//小黄蜂与蜂后技能类型、函数均一致，初始属性和图片资源不同
{
public:
	virtual bool init() override;    
	static WaspHornet* createMonster(std::vector<Point> points, int hp ,int value);
	static WaspHornet* createMonster(std::vector<Point> points);
	void frozen();
	void refrozen(float dt);
};

#endif