#include "MyAnimation.h"

MyAnimation* MyAnimation::instance;


MyAnimation* MyAnimation::getInstance()
{
	if (instance == NULL)
		instance = new MyAnimation();
	return instance;
}

void MyAnimation::init_desert()
{
	init_Thug();
	init_Raider();
	init_Wolf();
	init_Immortal();
	init_Fallen();
	init_Munra();
	init_Scorpion();
	init_Wasp_Hornet();
	init_Wasp_Queen();
	init_Executioner();
	init_Tremor();
}

void MyAnimation::init()
{
	init_ArtilleryTower();//Õ¨µ¯Ëþ
	init_ArcherTower();//¹­¼ýËþ
	init_monster_blood();
	init_reinforce();//¼ÓÇ¿
	init_BarracksTower();//¾üÓª
	init_MageTower();//Ä§·¨Ëþ
	init_others();
}

void MyAnimation::init_others()
{
	AnimationCache::getInstance()->addAnimation(createAnimation("freeze_creep_00%02d.png",1,7, 0.05f), "freeze_creep");
	AnimationCache::getInstance()->addAnimation(createAnimation("freeze_creep_00%02d.png",8,23, 0.05f), "refreeze_creep");
	AnimationCache::getInstance()->addAnimation(createAnimation("freeze_creepFlying_00%02d.png",1,7, 0.05f), "freeze_creepFlying");
	AnimationCache::getInstance()->addAnimation(createAnimation("freeze_creepFlying_00%02d.png",10,21, 0.05f), "refreeze_creepFlying");

	AnimationCache::getInstance()->addAnimation(createAnimation("small_freeze_explosion_00%02d.png",1,20, 0.04f), "freeze_explosion");

	AnimationCache::getInstance()->addAnimation(createAnimation("fireball_explosion_00%02d.png",1,15, 0.06f), "fireBall_explosion");
	AnimationCache::getInstance()->addAnimation(createAnimation("fireball_proyectile_00%02d.png",1,5, 0.04f), "fireBall_fire");
	AnimationCache::getInstance()->addAnimation(createAnimation("fireball_particle_00%02d.png",1,4, 0.04f), "fireBall_smoke");

	AnimationCache::getInstance()->addAnimation(createAnimation("effect_sellSmoke_00%02d.png",1,11, 0.04f), "sell_smoke");
	AnimationCache::getInstance()->addAnimation(createAnimation("effect_buildSmoke_00%02d.png",1,10, 0.04f), "build_smoke");

	AnimationCache::getInstance()->addAnimation(createAnimation("mapFlag_star_00%02d.png",1,18, 0.04f), "shine");
	AnimationCache::getInstance()->addAnimation(createAnimation("mapFlag_0%03d.png",23,95, 0.04f), "succeed");
}

void MyAnimation::init_MageTower()
{
	AnimationCache::getInstance()->addAnimation(createAnimation("mage_lvl1_00%02d.png",1,12, 0.04f), "level1_mage_shine");
	AnimationCache::getInstance()->addAnimation(createAnimation("mage_lvl2_00%02d.png",1,12, 0.04f), "level2_mage_shine");
	AnimationCache::getInstance()->addAnimation(createAnimation("mage_lvl3_00%02d.png",1,12, 0.04f), "level3_mage_shine");

	AnimationCache::getInstance()->addAnimation(createAnimation("mage_shooter_00%02d.png",17,29, 0.04f,"mage_shooter_0001.png"), "mage_shoot_up");
	AnimationCache::getInstance()->addAnimation(createAnimation("mage_shooter_00%02d.png",3,16, 0.04f,"mage_shooter_0001.png"), "mage_shoot_down");
}

void MyAnimation::init_Thug()
{
	AnimationCache::getInstance()->addAnimation(createAnimation("desertThug_0%03d.png",89,106, 0.04f), "Thug_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertThug_0%03d.png",23,44, 0.04f), "Thug_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertThug_0%03d.png",45,66, 0.04f), "Thug_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertThug_0%03d.png",1,22, 0.04f), "Thug_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertThug_0%03d.png",1,22, 0.04f), "Thug_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertThug_0%03d.png",67,88, 0.04f), "Thug_attack");
}

void MyAnimation::init_Raider()
{
	AnimationCache::getInstance()->addAnimation(createAnimation("desertRaider_0%03d.png",89,106, 0.04f), "Raider_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertRaider_0%03d.png",23,44, 0.04f), "Raider_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertRaider_0%03d.png",45,66, 0.04f), "Raider_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertRaider_0%03d.png",1,22, 0.04f), "Raider_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertRaider_0%03d.png",1,22, 0.04f), "Raider_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertRaider_0%03d.png",67,88, 0.04f), "Raider_attack");
}

void MyAnimation::init_Wolf()
{
	AnimationCache::getInstance()->addAnimation(createAnimation("desertWolf_0%03d.png",69,86, 0.04f), "Wolf_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertWolf_0%03d.png",11,30, 0.04f), "Wolf_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertWolf_0%03d.png",1,10, 0.04f), "Wolf_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertWolf_0%03d.png",1,10, 0.04f), "Wolf_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertWolf_0%03d.png",1,10, 0.04f), "Wolf_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertWolf_0%03d.png",31,43, 0.04f), "Wolf_attack");
}

void MyAnimation::init_ArcherTower()
{
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_archer_lvl1_shooter_00%02d.png",3,10, 0.04f,"tower_archer_lvl1_shooter_0001.png"), "level1_shoot_down");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_archer_lvl2_shooter_00%02d.png",3,10, 0.04f,"tower_archer_lvl2_shooter_0001.png"), "level2_shoot_down");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_archer_lvl3_shooter_00%02d.png",3,10, 0.04f,"tower_archer_lvl3_shooter_0001.png"), "level3_shoot_down");

	AnimationCache::getInstance()->addAnimation(createAnimation("tower_archer_lvl3_shooter_00%02d.png",11,18, 0.04f,"tower_archer_lvl3_shooter_0002.png"), "level1_shoot_top");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_archer_lvl3_shooter_00%02d.png",11,18, 0.04f,"tower_archer_lvl3_shooter_0002.png"), "level2_shoot_top");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_archer_lvl3_shooter_00%02d.png",11,18, 0.04f,"tower_archer_lvl3_shooter_0002.png"), "level3_shoot_top");

}

void MyAnimation::init_Tremor()
{
	AnimationCache::getInstance()->addAnimation(createAnimation("tremor_0%03d.png",1,14, 0.04f), "Tremor_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("tremor_0%03d.png",1,14, 0.04f), "Tremor_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("tremor_0%03d.png",15,28, 0.04f), "Tremor_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("tremor_0%03d.png",29,42, 0.04f), "Tremor_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("tremor_0%03d.png",83,95, 0.04f), "Tremor_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("tremor_0%03d.png",43,61, 0.04f), "Tremor_attack");
	AnimationCache::getInstance()->addAnimation(createAnimation("tremor_0%03d.png",64,75, 0.04f), "Tremor_out");
	AnimationCache::getInstance()->addAnimation(createAnimation("tremor_0%03d.png",75,82, 0.04f), "Tremor_in");
}

Animation* MyAnimation::createAnimation(const char* prefixName, int start,int end, float delay,std::string lastFrame)
{
    Vector<SpriteFrame*> animFrames;
    
	for (int i = start; i <= end; i++)
    {
        auto frame = SpriteFrameCache::getInstance()->getSpriteFrameByName(String::createWithFormat(prefixName,i)->getCString());
		if(frame!=nullptr)
			animFrames.pushBack(frame);
    }
	animFrames.pushBack(SpriteFrameCache::getInstance()->getSpriteFrameByName(lastFrame));
    return Animation::createWithSpriteFrames(animFrames, delay);
}


Animation* MyAnimation::createAnimation(const char* prefixName, int start,int end, float delay)
{
    Vector<SpriteFrame*> animFrames;
    
	for (int i = start; i <= end; i++)
    {
        auto frame = SpriteFrameCache::getInstance()->getSpriteFrameByName(String::createWithFormat(prefixName,i)->getCString());
		if(frame!=nullptr)
			animFrames.pushBack(frame);
    }
    return Animation::createWithSpriteFrames(animFrames, delay);
}

Animation* MyAnimation::createAnimationR(const char* prefixName, int start,int end, float delay)
{
    Vector<SpriteFrame*> animFrames;
    
	for (int i = start; i >= end; i--)
    {
        auto frame = SpriteFrameCache::getInstance()->getSpriteFrameByName(String::createWithFormat(prefixName,i)->getCString());
		if(frame!=nullptr)
			animFrames.pushBack(frame);
    }
    return Animation::createWithSpriteFrames(animFrames, delay);
}

void MyAnimation::init_monster_blood()
{
	AnimationCache::getInstance()->addAnimation(createAnimation("fx_blood_splat_red_00%02d.png",1,9, 0.04f), "blood_red");
}

void MyAnimation::init_ArtilleryTower()
{
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_artillery_lvl1_layer1_00%02d.png",1,35, 0.04f), "level1_Artillery_towerBase");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_artillery_lvl2_layer1_00%02d.png",1,35, 0.04f), "level2_Artillery_towerBase");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_artillery_lvl3_layer1_00%02d.png",1,35, 0.04f), "level3_Artillery_towerBase");

	AnimationCache::getInstance()->addAnimation(createAnimation("tower_artillery_lvl1_layer2_00%02d.png",1,17, 0.04f), "level1_Artillery_leftShooter_hold");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_artillery_lvl2_layer2_00%02d.png",1,17, 0.04f), "level2_Artillery_leftShooter_hold");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_artillery_lvl3_layer2_00%02d.png",1,17, 0.04f), "level3_Artillery_leftShooter_hold");

	AnimationCache::getInstance()->addAnimation(createAnimation("tower_artillery_lvl1_layer3_00%02d.png",1,35, 0.04f,"tower_artillery_lvl1_layer3_0001.png"), "level1_Artillery_rightShooter");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_artillery_lvl2_layer3_00%02d.png",1,35, 0.04f,"tower_artillery_lvl2_layer3_0001.png"), "level2_Artillery_rightShooter");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_artillery_lvl3_layer3_00%02d.png",1,35, 0.04f,"tower_artillery_lvl3_layer3_0001.png"), "level3_Artillery_rightShooter");
	
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_artillery_lvl1_layer4_00%02d.png",1,35, 0.04f), "level1_Artillery_barrel");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_artillery_lvl2_layer4_00%02d.png",1,35, 0.04f), "level2_Artillery_barrel");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_artillery_lvl3_layer4_00%02d.png",1,35, 0.04f), "level3_Artillery_barrel");

	AnimationCache::getInstance()->addAnimation(createAnimation("tower_artillery_lvl1_layer5_00%02d.png",1,35, 0.04f), "level1_Artillery_smoke");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_artillery_lvl2_layer5_00%02d.png",1,35, 0.04f), "level2_Artillery_smoke");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_artillery_lvl3_layer5_00%02d.png",1,35, 0.04f), "level3_Artillery_smoke");

	AnimationCache::getInstance()->addAnimation(createAnimation("tower_artillery_lvl1_layer6_00%02d.png",18,35, 0.04f,"tower_artillery_lvl1_layer6_0001.png"), "level1_Artillery_c4");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_artillery_lvl2_layer6_00%02d.png",18,35, 0.04f,"tower_artillery_lvl2_layer6_0001.png"), "level2_Artillery_c4");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_artillery_lvl3_layer6_00%02d.png",18,35, 0.04f,"tower_artillery_lvl3_layer6_0001.png"), "level3_Artillery_c4");

	AnimationCache::getInstance()->addAnimation(createAnimation("tower_artillery_lvl1_layer2_00%02d.png",18,35, 0.04f,"tower_artillery_lvl1_layer2_0001.png"), "level1_Artillery_leftShooter_throw");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_artillery_lvl2_layer2_00%02d.png",18,35, 0.04f,"tower_artillery_lvl2_layer2_0001.png"), "level2_Artillery_leftShooter_throw");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_artillery_lvl3_layer2_00%02d.png",18,35, 0.04f,"tower_artillery_lvl3_layer2_0001.png"), "level3_Artillery_leftShooter_throw");

	AnimationCache::getInstance()->addAnimation(createAnimation("explosion_air_00%02d.png",1,17, 0.04f), "bomb");
	AnimationCache::getInstance()->addAnimation(createAnimation("states_small_00%02d.png",22,32, 0.04f), "explosion_Artillery");
}

void MyAnimation::init_BarracksTower()
{
	AnimationCache::getInstance()->addAnimation(createAnimation("soldier_lvl1_00%02d.png",2,6, 0.04f), "level1_barracksSoilder_run");
	AnimationCache::getInstance()->addAnimation(createAnimation("soldier_lvl2_00%02d.png",2,6, 0.04f), "level2_barracksSoilder_run");
	AnimationCache::getInstance()->addAnimation(createAnimation("soldier_lvl3_00%02d.png",2,6, 0.04f), "level3_barracksSoilder_run");
	AnimationCache::getInstance()->addAnimation(createAnimation("Soldier_Assassin_00%02d.png",2,6, 0.04f), "Assassin_run");
	AnimationCache::getInstance()->addAnimation(createAnimation("Templar_00%02d.png",3,7, 0.04f), "Templar_run");

	AnimationCache::getInstance()->addAnimation(createAnimation("soldier_lvl1_00%02d.png",7,17, 0.04f), "level1_barracksSoilder_attack");
	AnimationCache::getInstance()->addAnimation(createAnimation("soldier_lvl2_00%02d.png",7,17, 0.04f), "level2_barracksSoilder_attack");
	AnimationCache::getInstance()->addAnimation(createAnimation("soldier_lvl3_00%02d.png",7,17, 0.04f), "level3_barracksSoilder_attack");
	AnimationCache::getInstance()->addAnimation(createAnimation("Soldier_Assassin_00%02d.png",7,17, 0.04f), "Assassin_attack");
	AnimationCache::getInstance()->addAnimation(createAnimation("Templar_00%02d.png",7,36, 0.04f), "Templar_attack");

	AnimationCache::getInstance()->addAnimation(createAnimation("soldier_lvl1_00%02d.png",18,23, 0.04f), "level1_barracksSoilder_dead");
	AnimationCache::getInstance()->addAnimation(createAnimation("soldier_lvl2_00%02d.png",18,23, 0.04f), "level2_barracksSoilder_dead");
	AnimationCache::getInstance()->addAnimation(createAnimation("soldier_lvl3_00%02d.png",18,23, 0.04f), "level3_barracksSoilder_dead");
	AnimationCache::getInstance()->addAnimation(createAnimation("Soldier_Assassin_00%02d.png",69,76, 0.04f), "Assassin_dead");
	AnimationCache::getInstance()->addAnimation(createAnimation("Templar_00%02d.png",94,103, 0.04f), "Templar_dead");

	AnimationCache::getInstance()->addAnimation(createAnimation("Soldier_Assassin_00%02d.png",19,43, 0.04f), "Assassin_skill1");
	AnimationCache::getInstance()->addAnimation(createAnimation("Soldier_Assassin_00%02d.png",44,69, 0.04f), "Assassin_skill2");
	
	AnimationCache::getInstance()->addAnimation(createAnimation("Templar_00%02d.png",61,94, 0.04f), "Templar_skill1");
	AnimationCache::getInstance()->addAnimation(createAnimation("Templar_00%02d.png",36,60, 0.04f), "Templar_skill2");


	AnimationCache::getInstance()->addAnimation(createAnimation("tower_barracks_lvl1_layer2_00%02d.png",1,25,0.04f),"level1_barracks_opendoor");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_barracks_lvl2_layer2_00%02d.png",1,25,0.04f),"level2_barracks_opendoor");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_barracks_lvl3_layer2_00%02d.png",1,25,0.04f),"level3_barracks_opendoor");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_assasins_layer2_00%02d.png",1,24,0.04f),"level4_barracks_opendoor");
	AnimationCache::getInstance()->addAnimation(createAnimation("tower_templars_layer2_00%02d.png",1,4,0.04f),"level5_barracks_opendoor");

	AnimationCache::getInstance()->addAnimation(createAnimation("TemplarTower_Fire_00%02d.png",1,11,0.04f),"level5_barracks_fire");
}

void MyAnimation::init_Executioner()
{
	AnimationCache::getInstance()->addAnimation(createAnimation("desertExecutioner_0%003d.png",73,98, 0.04f), "Executioner_attack");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertExecutioner_0%003d.png",99,118, 0.04f), "Executioner_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertExecutioner_0%003d.png",49,72, 0.05f), "Executioner_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertExecutioner_0%003d.png",25,48, 0.05f), "Executioner_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertExecutioner_0%003d.png",1,24, 0.05f), "Executioner_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertExecutioner_0%003d.png",1,24, 0.05f), "Executioner_runright");
}
void MyAnimation::init_Wasp_Queen()
{
	AnimationCache::getInstance()->addAnimation(createAnimation("wasp_queen_0%003d.png",43,53, 0.1f), "WaspQueen_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("wasp_queen_0%003d.png",15,29, 0.04f), "WaspQueen_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("wasp_queen_0%003d.png",30,42, 0.04f), "WaspQueen_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("wasp_queen_0%003d.png",1,14, 0.04f), "WaspQueen_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("wasp_queen_0%003d.png",1,14, 0.04f), "WaspQueen_runright");
}
void MyAnimation::init_Wasp_Hornet()
{
	AnimationCache::getInstance()->addAnimation(createAnimation("wasp_hornet_0%003d.png",43,52, 0.1f), "WaspHornet_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("wasp_hornet_0%003d.png",15,29, 0.04f), "WaspHornet_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("wasp_hornet_0%003d.png",30,42, 0.04f), "WaspHornet_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("wasp_hornet_0%003d.png",1,14, 0.04f), "WaspHornet_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("wasp_hornet_0%003d.png",1,14, 0.04f), "WaspHornet_runright");
}
void MyAnimation::init_Scorpion()
{
	AnimationCache::getInstance()->addAnimation(createAnimation("scorpion_0%003d.png",27,69, 0.04f), "Scorpion_attack");
	AnimationCache::getInstance()->addAnimation(createAnimation("scorpion_0%003d.png",70,99, 0.04f), "Scorpion_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("scorpion_0%003d.png",10,18, 0.04f), "Scorpion_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("scorpion_0%003d.png",19,27, 0.04f), "Scorpion_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("scorpion_0%003d.png",1,9, 0.04f), "Scorpion_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("scorpion_0%003d.png",1,9, 0.04f), "Scorpion_runright");
}
void MyAnimation::init_Munra()
{
	AnimationCache::getInstance()->addAnimation(createAnimation("desertMunra_0%03d.png",122,163, 0.04f), "Munra_skill");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertMunra_0%03d.png",73,120, 0.04f), "Munra_attack");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertMunra_0%03d.png",165,200, 0.04f), "Munra_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertMunra_0%03d.png",25,47, 0.04f), "Munra_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertMunra_0%03d.png",49,71, 0.04f), "Munra_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertMunra_0%03d.png",1,23, 0.04f), "Munra_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertMunra_0%03d.png",1,23, 0.04f), "Munra_runright");
}

void MyAnimation::init_Fallen()
{
	AnimationCache::getInstance()->addAnimation(createAnimation("fallen_0%03d.png",48,69, 0.04f), "Fallen_attack");
	AnimationCache::getInstance()->addAnimation(createAnimation("fallen_0%03d.png",70,110, 0.04f), "Fallen_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("fallen_0%03d.png",17,32, 0.04f), "Fallen_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("fallen_0%03d.png",32,47, 0.04f), "Fallen_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("fallen_0%03d.png",1,16, 0.04f), "Fallen_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("fallen_0%03d.png",1,16, 0.04f), "Fallen_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("fallen_0%03d.png",114,146, 0.04f), "Fallen_birth");
}
void MyAnimation::init_Immortal()
{
	AnimationCache::getInstance()->addAnimation(createAnimation("desertImmortal_0%03d.png",67,88, 0.04f), "Immortal_attack");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertImmortal_0%03d.png",89,124, 0.04f), "Immortal_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertImmortal_0%03d.png",23,44, 0.04f), "Immortal_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertImmortal_0%03d.png",45,66, 0.04f), "Immortal_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertImmortal_0%03d.png",1,22, 0.04f), "Immortal_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertImmortal_0%03d.png",1,22, 0.04f), "Immortal_runright");
}

void MyAnimation::init_reinforce()
{
	AnimationCache::getInstance()->addAnimation(createAnimation("reinforce_C0_0%03d.png",1,6, 0.04f), "reinforce1_run");
	AnimationCache::getInstance()->addAnimation(createAnimation("reinforce_C0_0%03d.png",7,17, 0.04f), "reinforce1_attack");

	AnimationCache::getInstance()->addAnimation(createAnimation("reinforce_B0_0%03d.png",1,6, 0.04f,"reinforce_B0_0001.png"), "reinforce2_run");
	AnimationCache::getInstance()->addAnimation(createAnimation("reinforce_B0_0%03d.png",7,14, 0.04f,"reinforce_B0_0001.png"), "reinforce2_attack");
}

void MyAnimation::init_BossEfreeti()
{
	AnimationCache::getInstance()->addAnimation(createAnimation("Boss_Efreeti_0%03d.png",1,25, 0.04f), "Boss_Efreeti_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("Boss_Efreeti_0%03d.png",1,25, 0.04f), "Boss_Efreeti_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("Boss_Efreeti_0%03d.png",1,25, 0.04f), "Boss_Efreeti_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("Boss_Efreeti_0%03d.png",26,50, 0.04f), "Boss_Efreeti_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("Boss_Efreeti_0%03d.png",53,89, 0.04f), "Boss_Efreeti_attack");
	AnimationCache::getInstance()->addAnimation(createAnimation("Boss_Efreeti_0%03d.png",91,127, 0.1f), "Boss_Efreeti_skill");
	AnimationCache::getInstance()->addAnimation(createAnimation("Boss_Efreeti_0%03d.png",130,211, 0.04f), "Boss_Efreeti_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("Boss_Efreeti_Cloud_0%03d.png",1,11, 0.04f), "Boss_Efreeti_cloud");

	AnimationCache::getInstance()->addAnimation(createAnimation("desertEfreeti_0%03d.png",1,11, 0.04f), "Efreeti_runleft");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertEfreeti_0%03d.png",13,23, 0.04f), "Efreeti_rundown");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertEfreeti_0%03d.png",1,11, 0.04f), "Efreeti_runup");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertEfreeti_0%03d.png",1,11, 0.04f), "Efreeti_runright");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertEfreeti_0%03d.png",47,61, 0.04f), "Efreeti_death");
	AnimationCache::getInstance()->addAnimation(createAnimation("desertEfreeti_0%03d.png",25,46, 0.04f), "Efreeti_attack");
}

void MyAnimation::release_BossEfreeti()
{
	AnimationCache::getInstance()->removeAnimation("Boss_Efreeti_runleft");
	AnimationCache::getInstance()->removeAnimation("Boss_Efreeti_runright");
	AnimationCache::getInstance()->removeAnimation("Boss_Efreeti_runup");
	AnimationCache::getInstance()->removeAnimation("Boss_Efreeti_rundown");
	AnimationCache::getInstance()->removeAnimation("Boss_Efreeti_attack");
	AnimationCache::getInstance()->removeAnimation("Boss_Efreeti_skill");
	AnimationCache::getInstance()->removeAnimation("Boss_Efreeti_death");
	AnimationCache::getInstance()->removeAnimation("Boss_Efreeti_cloud");

	AnimationCache::getInstance()->removeAnimation("Efreeti_runleft");
	AnimationCache::getInstance()->removeAnimation("Efreeti_rundown");
	AnimationCache::getInstance()->removeAnimation("Efreeti_runup");
	AnimationCache::getInstance()->removeAnimation("Efreeti_runright");
	AnimationCache::getInstance()->removeAnimation("Efreeti_death");
	AnimationCache::getInstance()->removeAnimation("Efreeti_attack");
}

