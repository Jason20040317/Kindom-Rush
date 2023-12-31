#ifndef _BULLET_H_
#define _BULLET_H_

#include "SoundManager.h"
#include "cocos2d.h"
#include "GameManager.h"

USING_NS_CC;

class Bullet : public Sprite
{
public:
	 Bullet();
    ~Bullet();
    virtual bool init();
    CREATE_FUNC(Bullet);

protected:
	CC_SYNTHESIZE(int, maxForce, MaxForce);//���Ĺ�����
	CC_SYNTHESIZE(int, bulletScope, BulletScope);//�����ӵ�������Χ
	CC_SYNTHESIZE(int, bulletType, BulletType);//�ӵ�����
	CC_SYNTHESIZE(Spawn*, bulletAction, BulletAction);//�ӵ����ж���
	Sprite* sprite;//�ӵ�����
	virtual void shoot(){};//����
	virtual void removeBullet(){};//�������Ƴ�
};

#endif