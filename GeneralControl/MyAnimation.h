#ifndef _MY_ANIMATION_H_
#define _MY_ANIMATION_H_

#include "cocos2d.h"
USING_NS_CC;

class MyAnimation
{
public:
	static MyAnimation* getInstance();

	void init();
	void init_desert();
	void init_ArcherTower();
	void init_ArtilleryTower();
	void init_Executioner();

	void init_Wasp_Queen();	
	void init_Wasp_Hornet();
	void init_Scorpion();//Ð«×Ó
	void init_Munra();
	void init_Thug();//±©Í½
	void init_Raider();//ÇÀ½Ù·¸
	
	void init_Wolf();
	void init_reinforce();
	void init_Immortal();
	void init_Tremor();//Õñ¶¯
	void init_Fallen();

	void init_BarracksTower();
	void init_MageTower();
	void init_monster_blood();

	void release_BossEfreeti();
	void init_BossEfreeti();

	Animation* createAnimation(const char* prefixName, int start,int end, float delay);
	Animation* createAnimationR(const char* prefixName, int start,int end, float delay);
	Animation* createAnimation(const char* prefixName, int start,int end, float delay,std::string lastFrame);
	void init_others();
private:
	static MyAnimation * instance;
};

#endif