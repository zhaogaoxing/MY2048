#ifndef __2048_CARD__
#define __2048_CARD__

#include "cocos2d.h"

class CardSprite :public cocos2d::Sprite
{
public:
	//��ʼ����Ϸ��Ƭ�ķ���
	static CardSprite *createCardSprite(int numbers, int width, int height, float CardSpriteX, float CardSpriteY);
	virtual bool init();
	CREATE_FUNC(CardSprite);

	//��������
	void setNumber(int num);

	//��ȡ����
	int getNumber();

private:
	//��ʾ�ڽ��������
	int number;
	void enemyInit(int numbers, int width, int height, float CardSpriteX, float CardSpriteY);

	//������ʾ���ֵĿؼ�
	cocos2d::LabelTTF *labTTFCardNumber;
	

	//��ʾ����
	cocos2d::LayerColor *layerColorBG;

};

#endif