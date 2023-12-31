#include "SimpleMageTowerlvl3.h"
#include "UpdatePanleLayer2.h"
#include "BaseMap.h"
#include "GameManager.h"
#include "MageBolt.h"

bool SimpleMageTowerlvl3::init()
{
	if (!Sprite::init())
	{
		return false;
	}
	setTowerType(MAGE_3);
	setLevel(3);
	addTerrain();
	initTower(3);
	setListener();
	setScope(250.0f);
	setUpdateMoney(230);
	setBuildMoney(500);
	isUpdateMenuShown = false;
	schedule(schedule_selector(SimpleMageTowerlvl3::shoot), 2.0f);
	SoundManager::playMageTower3Ready();
	return true;
}



Bullet* SimpleMageTowerlvl3::MageTowerBullet()
{
	auto bullet = MageBolt::create();
	bullet->setPosition(Point(10,45));
	bullet->setMaxForce(60);
	this->getParent()->addChild(bullet);
    return bullet;
}

