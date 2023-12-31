#include "SimpleArtilleryTowerlvl3.h"
#include "UpdatePanleLayer.h"
#include "GameManager.h"
#include "BaseMap.h"
#include "UpdatePanleLayer2.h"

bool SimpleArtilleryTowerlvl3::init()
{
	if (!Sprite::init())
	{
		return false;
	}
	setTowerType(ARTILLERY_3);
	setLevel(3);
	addTerrain();
	initTower(3);
	setListener();
	setScope(200.0f);
	setUpdateMoney(230);
	setBuildMoney(320);
	isUpdateMenuShown = false;
	schedule(schedule_selector(SimpleArtilleryTowerlvl3::shoot), 3.0f);
	SoundManager::playArtillery3Ready();
	return true;
}


