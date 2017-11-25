#pragma once
#define _BULLET_H
#include "cocos2d.h"

USING_NS_CC;
class Bullet :
	public CCNode
{
public:
	Bullet(void);
	virtual ~Bullet(void);
	
	CREATE_FUNC(Bullet);
	bool init();

	void end();
	void flyTo(CCPoint targetInWorldSpace,int type=0);

protected:
	float getSpeed(int type);
	CCSprite *_bulletSprite;
};


