#include "Arrow.h"

bool Arrow::init()
{
	if (!Sprite::init())
	{
		return false;
	}
	sprite = Sprite::createWithSpriteFrameName("arrow.png");
	addChild(sprite);		
	return true;
}

void Arrow::shoot()
{
	SoundManager::playArrowRelease();
	runAction(Sequence::create(bulletAction,
              CallFuncN::create(CC_CALLBACK_0(Arrow::removeBullet, this)),
               NULL));
}

void Arrow::removeBullet()
{
	bool isMissed = true;//Ĭ��δ����
    auto instance = GameManager::getInstance();
   //�����ʾ������������ԭ���ǽ��ӵ�����ڷ�������λ�������������λ����ӣ��ټ��Ͽ�߹�ͬ�ж�
	auto bulletRect = Rect(this->getPositionX() +this->getParent()->getPositionX() - this->getContentSize().width /2,
                                this->getPositionY() +this->getParent()->getPositionY() - this->getContentSize().height/2,
								this->sprite->getContentSize().width,
                                this->sprite->getContentSize().height );
	
	auto monsterVector = instance->monsterVector;//��ʼ��������
	for (int j = 0; j < monsterVector.size(); j++)
	{
		auto monster = monsterVector.at(j);
		auto monsterRect = monster->baseSprite->getBoundingBox();
		if (monsterRect.intersectsRect(bulletRect) && monster->getAttackBySoldier())//�ж��Ƿ��ص������Ƿ���Ա�����
		{
			auto currHp = monster->getCurrHp();
			currHp =  currHp - this->getMaxForce() + monster->getArmor();//ִ�п�Ѫ��������������ֵ+����-������ֵ
			if(currHp <= 0){//ûѪ��
				currHp = 0;
			}
			monster->setCurrHp( currHp );
			monster->getHpBar()->setPercentage((currHp/monster->getMaxHp())*100);//����Ѫ��
			monster->getHurt();
            isMissed = false;//��Ϊ����
			if(currHp == 0){
				monster->death();
			}
			break;
		}
	}
	if(isMissed){//���û�л���
		sprite->setSpriteFrame(SpriteFrameCache::getInstance()->getSpriteFrameByName("decal_arrow.png"));
		sprite->runAction(Sequence::create(FadeOut::create(1.0f)//������ڵ��ϲ�ͣ��1��
										,CallFuncN::create(CC_CALLBACK_0(Bullet::removeFromParent, this))
                                       , NULL));
	}else{
		this->removeFromParent();
	}
}