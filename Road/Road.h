#ifndef _ROAD_H_
#define _ROAD_H_
#include "cocos2d.h"

USING_NS_CC;

class Road : public Sprite
{
public:
	Road();
	~Road();
    virtual bool init();
    CREATE_FUNC(Road);//相当于一个宏，作用是创建一个层
	virtual void buildRoadAnimation(int num);
	virtual void setRoadReady();
	Vector<Sprite*> roadVector;
	Vector<Animation*> roadAnimaitonVector;
	void initRoadAnimation();
};

#endif