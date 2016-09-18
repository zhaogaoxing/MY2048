#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
#include "CardSprite.h"
USING_NS_CC;

class HelloWorld : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
	
	void onNewGame(cocos2d::Ref* pSender);
	void onAI(cocos2d::Ref* pSender);
	void onTest(cocos2d::Ref* pSender);
	
	Label* scoreValLabel;
	Label* bestValLabel;

	virtual bool onTouchBegan(cocos2d::Touch *touch, cocos2d::Event *unused_event);
	virtual void onTouchEnded(cocos2d::Touch *touch, cocos2d::Event *unused_event);

	

	//�������ҵķ���
	bool doLeft();
	bool doRight();
	bool doUp();
	bool doDown();

	
	//�Զ����ɿ�Ƭ
	void autoCreateCardNumber();
private:

	int firstX, firstY;
	int endX, endY;

	//������Ƭ
	void createCardSprite(cocos2d::Size size);

	//����һ����ά����
	CardSprite *cardArr[4][4];
	
	//������ʾ���ݵĿؼ�
	cocos2d::LabelTTF *labelTTFCardNumber;

 // implement the "static create()" method manually
    CREATE_FUNC(HelloWorld);

};

#endif // __HELLOWORLD_SCENE_H__
