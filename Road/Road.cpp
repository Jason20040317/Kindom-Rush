#include "Road.h"
#include "GameManager.h"

Road::~Road(){}

Road::Road(){}

bool Road::init()//总地图上不同关卡之间的路径显示，6个关卡需要5条路径动画
{
	if (!Sprite::init())
	{
		return false;
	}
	auto road_0 = Sprite::createWithSpriteFrameName("mapRoad_1to1_5_0009.png");//通过一个精灵帧对象创建另一个对象
	auto road_1 = Sprite::createWithSpriteFrameName("mapRoad_1_5_to2_0013.png");
	auto road_2 = Sprite::createWithSpriteFrameName("mapRoad_2to3_0012.png");
	auto road_3 = Sprite::createWithSpriteFrameName("mapRoad_3to4_0021.png");
	auto road_4 = Sprite::createWithSpriteFrameName("mapRoad_4to5_0141.png");
	
	roadVector.pushBack(road_0);
	roadVector.pushBack(road_1);
	roadVector.pushBack(road_2);
	roadVector.pushBack(road_3);
	roadVector.pushBack(road_4);

	road_0->setVisible(false);
	road_1->setVisible(false);
	road_2->setVisible(false);
	road_3->setVisible(false);
	road_4->setVisible(false);

	addChild(road_0);
	addChild(road_1);
	addChild(road_2);
	addChild(road_3);
	addChild(road_4);

	setRoadReady();
	initRoadAnimation();
	return true;
}

void Road::setRoadReady()
{
	int hasDone = UserDefault::getInstance()->getIntegerForKey(GameManager::getInstance()->SLOTX_DOWNCOUNT,0);//表示已经通关数
	if(hasDone!=0){
		for(int i=0;i<=hasDone-1;i++)
		{
			roadVector.at(i)->setVisible(true);//at是访问数组元素，比[]更安全
		}
	}
}

void Road::buildRoadAnimation(int num)
{
	roadVector.at(num)->setVisible(true);
	roadVector.at(num)->runAction(Animate::create(roadAnimaitonVector.at(num)));
}

void Road::initRoadAnimation()//路径显示动画
{
	SpriteFrame* frame0 = NULL;
	Vector<SpriteFrame*> aFrames0;
	for (int len = 1;len <= 7; len++)
	{
		frame0 = SpriteFrameCache::getInstance()->getSpriteFrameByName(String::createWithFormat("mapRoad_1to1_5_00%02d.png",len)->getCString());
		if(frame0!=nullptr)
			aFrames0.pushBack(frame0);
	}
	roadAnimaitonVector.pushBack(Animation::createWithSpriteFrames(aFrames0,0.1f));

	SpriteFrame* frame1 = NULL;
	Vector<SpriteFrame*> aFrames1;
	for (int len = 1;len <= 13; len++)
	{
		frame1 = SpriteFrameCache::getInstance()->getSpriteFrameByName(String::createWithFormat("mapRoad_1_5_to2_00%02d.png",len)->getCString());
		if(frame1!=nullptr)
			aFrames1.pushBack(frame1);
	}
	roadAnimaitonVector.pushBack(Animation::createWithSpriteFrames(aFrames1,0.1f));

	SpriteFrame* frame2 = NULL;
	Vector<SpriteFrame*> aFrames2;
	for (int len = 1;len <= 12; len++)
	{
		frame2 = SpriteFrameCache::getInstance()->getSpriteFrameByName(String::createWithFormat("mapRoad_2to3_00%02d.png",len)->getCString());
		if(frame2!=nullptr)
			aFrames2.pushBack(frame2);
	}
	roadAnimaitonVector.pushBack(Animation::createWithSpriteFrames(aFrames2,0.1f));

	SpriteFrame* frame3 = NULL;
	Vector<SpriteFrame*> aFrames3;
	for (int len = 1;len <= 21; len++)
	{
		frame3 = SpriteFrameCache::getInstance()->getSpriteFrameByName(String::createWithFormat("mapRoad_3to4_00%02d.png",len)->getCString());
		if(frame3!=nullptr)
			aFrames3.pushBack(frame3);
	}
	roadAnimaitonVector.pushBack(Animation::createWithSpriteFrames(aFrames3,0.07f));

	SpriteFrame* frame4 = NULL;
	Vector<SpriteFrame*> aFrames4;
	for (int len = 1;len <= 141; len++)
	{
		frame4 = SpriteFrameCache::getInstance()->getSpriteFrameByName(String::createWithFormat("mapRoad_4to5_0%03d.png",len)->getCString());
		if(frame4!=nullptr)
			aFrames4.pushBack(frame4);
	}
	roadAnimaitonVector.pushBack(Animation::createWithSpriteFrames(aFrames4,0.01f));

}