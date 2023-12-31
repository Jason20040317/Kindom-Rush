#include "SimpleArrowTowerlvl3.h"
#include "UpdatePanleLayer2.h"
#include "BaseMap.h"
#include "GameManager.h"
#include "Arrow.h"

bool SimpleArrowTowerlvl3::init()
{
	if (!Sprite::init())
	{
		return false;
	}
	setTowerType(ARCHER_3);
	setLevel(3);
	addTerrain();
	initTower(3);
	setListener();
	setScope(240.0f);
	setUpdateMoney(230);
	setBuildMoney(320);
	isUpdateMenuShown = false;
	schedule(schedule_selector(SimpleArrowTowerlvl3::shoot), 1.0f);
	SoundManager::playArcher3Ready();
	return true;
}


Bullet* SimpleArrowTowerlvl3::ArrowTowerBullet()
{
	auto bullet = Arrow::create();
	bullet->setRotation(90.0f);
	bullet->setMaxForce(16);
	this->getParent()->addChild(bullet);
    return bullet;
}

