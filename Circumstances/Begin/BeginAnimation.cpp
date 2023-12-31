#include "BeginAnimation.h"
#include "BaseMap.h"

USING_NS_CC;

Scene* BeginAnimation::createScene()
{
	auto scene = Scene::create();
	auto layer = BeginAnimation::create();
	scene->addChild(layer);
	return scene;
}

bool BeginAnimation::init()
{

	if (!Layer::init())
	{
		return false;
	}
	Size visibleSize = Director::getInstance()->getVisibleSize();
	auto color = LayerColor::create(Color4B::BLACK, visibleSize.width, visibleSize.height);
	addChild(color);
	auto listener = EventListenerTouchOneByOne::create();
	listener->onTouchBegan = [&](Touch* touch, Event* event){
		return true;
	};
	listener->setSwallowTouches(true);
	_eventDispatcher->addEventListenerWithSceneGraphPriority(listener, color);
	startAnimation1();
	return true;
}


//��Ϸ��ʼǰ�Ľ���1
void BeginAnimation::startAnimation1()
{

	Size size = Director::getInstance()->getVisibleSize(); //��ȡ��Ļ��С 

	startAnimation2();


}

////��Ϸ��ʼǰ�Ľ���1����תҳ��
void BeginAnimation::startAnimation2()
{
	
	Size size = Director::getInstance()->getVisibleSize(); //��ȡ��Ļ��С 

	auto sp1 = Sprite::createWithSpriteFrameName("ComicPromo.png");
	sp1->setPosition(Point(size.width*0.50, size.height*0.50));
	this->addChild(sp1, 2);//xiagai

	auto sp4 = Sprite::createWithSpriteFrameName("comicContinue.png");
	sp4->setPosition(Point(size.width*0.80, -300));
	this->addChild(sp4, 2);

	sp4->runAction(Sequence::create(
		DelayTime::create(0),
		JumpTo::create(0.000f, Point(size.width*0.80, size.height*0.15), 1, 1), NULL));

	auto listener = EventListenerTouchOneByOne::create();
	listener->onTouchBegan = [&](Touch* touch, Event* event){

		auto target = static_cast<Sprite*>(event->getCurrentTarget());

		Point locationInNode = target->convertTouchToNodeSpace(touch);

		Size size = target->getContentSize();
		Rect rect = Rect(0, 0, size.width, size.height);
		if (rect.containsPoint(locationInNode))
		{
			backToGame();
			return true;
		}
		return false;
	};
	listener->onTouchEnded = [&](Touch* touch, Event* event){
		_eventDispatcher->removeEventListener(listener);
	};
	_eventDispatcher->addEventListenerWithSceneGraphPriority(listener, sp4);
	
}

void BeginAnimation::backToGame()
{
	game->startAfterStory();
	this->removeFromParent();
}