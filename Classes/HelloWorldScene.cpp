#include "HelloWorldScene.h"
#include <functional>
#include "common.h"

USING_NS_CC;

using namespace std;


enum Sprite_ZOrder{
	ZORDER_BG_LAYER
};

Scene* HelloWorld::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = HelloWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

	//auto bging = Sprite::create("background.png");
	//bging->setPosition(visibleSize.width / 2 + origin.x, visibleSize.height / 2 + origin.y);
	//this->addChild(bging, ZORDER_BG_LAYER);

	//auto name_label = Label::createWithTTF(TTFConfig(GAME_FONT_NAME, 32), "2048");
	//name_label->setColor(Color3B(0x5B, 0x5B, 0x5B));
	//name_label->setPosition(Vec2(visibleSize.width*0.22 + origin.x, visibleSize.height*0.86 + origin.y));
	//this->addChild(name_label, ZORDER_BG_LAYER);
 //   
	////Score,best
	//auto score = Sprite::create("item.png");
	//auto scalex = 1.0f;
	//auto scaley = 0.8f;
	//Color3B valcolor = Color3B(0xA5, 0xA5, 0xA5);
	//auto pos = Vec2(visibleSize.width*0.6 + origin.x, visibleSize.height*0.86 + origin.y);
	//score->setPosition(pos);
	//score->setScaleX(scalex);
	//score->setScaleY(scaley);
	//this->addChild(score, ZORDER_BG_LAYER);

	//auto score_label = Label::createWithTTF(TTFConfig(SCORE_FONT_NAME, 24), "score");
	//score_label->setColor(Color3B(240, 180, 120));
	//score_label->setPosition(score->getContentSize().width*scalex / 2, score->getContentSize().height*scaley*0.9);
	//score->addChild(score_label, ZORDER_BG_LAYER);
	//scoreValLabel = Label::createWithTTF(TTFConfig(SCORE_FONT_NAME, 24), "0");
	//scoreValLabel->setColor(valcolor);
	//scoreValLabel->setPosition(score_label->getPositionX(), score_label->getPositionY() - score_label->getContentSize().height);
	//score->addChild(scoreValLabel, ZORDER_BG_LAYER);

	//auto best_bg = Sprite::create("item.png");
	//best_bg->setPosition(pos.x + visibleSize.width*0.25-20, pos.y);
	//best_bg->setScaleX(scalex);
	//best_bg->setScaleY(scaley);
	//this->addChild(best_bg, ZORDER_BG_LAYER);

	//auto best_label = Label::createWithTTF(TTFConfig(SCORE_FONT_NAME, 24), "best");
	//best_label->setColor(Color3B(240, 180, 120));
	//best_label->setPosition(best_bg->getContentSize().width / 2 * scalex / 2+10, best_bg->getContentSize().height*scaley*0.9);
	//best_bg->addChild(best_label, ZORDER_BG_LAYER);
	//bestValLabel = Label::createWithTTF(TTFConfig(SCORE_FONT_NAME, 24), "0");
	//bestValLabel->setColor(valcolor);
	//bestValLabel->setPosition(best_label->getPositionX(), best_label->getPositionY() - best_label->getContentSize().height);
	//best_bg->addChild(bestValLabel, ZORDER_BG_LAYER);


	////new game
	//auto menu = Menu::create();
	//menu->setPosition(Vec2::ZERO);
	//this->addChild(menu, ZORDER_BG_LAYER);
	//auto btsprite = Sprite::create("item.png");
	//auto btsprite2 = Sprite::create("item_on.png");
	//btsprite->setScaleY(0.5);
	//btsprite->setColor(Color3B(0x8B, 0x45, 0x13));
	//btsprite->setContentSize(Size(btsprite->getContentSize().width, btsprite->getContentSize().height*btsprite->getScaleY()));
	//btsprite2->setScaleY(0.5);
	//btsprite2->setColor(Color3B(0x8B, 0x45, 0x13));
	//btsprite2->setContentSize(Size(btsprite->getContentSize().width, btsprite->getContentSize().height*btsprite->getScaleY()));
	//auto newbtn = MenuItemSprite::create(
	//	btsprite,
	//	btsprite2,
	//	CC_CALLBACK_1(HelloWorld::onNewGame, this));
	//newbtn->setPosition(Vec2(visibleSize.width*0.80, visibleSize.height*0.70));
	//auto btnlabel = Label::createWithTTF(TTFConfig(SCORE_FONT_NAME, 10), "New Game");
	//btnlabel->setPosition(newbtn->getContentSize().width / 2, newbtn->getContentSize().height / 2);
	//newbtn->addChild(btnlabel);
	//menu->addChild(newbtn);

	////AI btn
	//auto aibt = Sprite::create("item.png");
	//auto aibt2 = Sprite::create("item_on.png");
	//aibt->setScaleY(0.5);
	//aibt->setColor(Color3B(0x8B, 0x45, 0x13));
	//aibt->setContentSize(Size(aibt->getContentSize().width, aibt->getContentSize().height*aibt->getScaleY()));
	//aibt2->setScaleY(0.5);
	//aibt2->setColor(Color3B(0x8B, 0x45, 0x13));
	//aibt2->setContentSize(Size(aibt->getContentSize().width, aibt->getContentSize().height*aibt->getScaleY()));
	//auto ai = MenuItemSprite::create(
	//	aibt,
	//	aibt2,
	//	CC_CALLBACK_1(HelloWorld::onAI, this));
	//ai->setPosition(Vec2(visibleSize.width*0.50, visibleSize.height*0.70));
	//auto ailabel = Label::createWithTTF(TTFConfig(SCORE_FONT_NAME, 16), "AI");
	//ailabel->setPosition(ai->getContentSize().width / 2, ai->getContentSize().height / 2);
	//ai->addChild(ailabel);
	//menu->addChild(ai);

	////test btn
	//auto testsp = Sprite::create("item.png");
	//auto testsp2 = Sprite::create("item_on.png");
	//testsp->setScaleY(0.5);
	//testsp->setColor(Color3B(0x8B, 0x45, 0x13));
	//testsp->setContentSize(Size(testsp->getContentSize().width, testsp->getContentSize().height*testsp->getScaleY()));
	//testsp2->setScaleY(0.5);
	//testsp2->setColor(Color3B(0x8B, 0x45, 0x13));
	//testsp2->setContentSize(Size(testsp->getContentSize().width, testsp->getContentSize().height*testsp->getScaleY()));
	//auto testItem = MenuItemSprite::create(
	//	testsp,
	//	testsp2,
	//	CC_CALLBACK_1(HelloWorld::onTest, this));
	//testItem->setPosition(Vec2(visibleSize.width*0.20, visibleSize.height*0.70));
	//auto testLabel = Label::createWithTTF(TTFConfig(SCORE_FONT_NAME, 16), "Test");
	//testLabel->setPosition(testItem->getContentSize().width / 2, testItem->getContentSize().height / 2);
	//testItem->addChild(testLabel);
	//menu->addChild(testItem);


	//������Ϸ����
	auto layerColorBG = cocos2d::LayerColor::create(cocos2d::Color4B(180, 170, 160, 255));
	this->addChild(layerColorBG);
	
	auto labelTTFCardNumberName = LabelTTF::create("����","arial", 80);
	labelTTFCardNumberName->setPosition(Point(visibleSize.width / 5, visibleSize.height - 100));
	addChild(labelTTFCardNumberName);

	//��������ʶ����¼�������
	auto touchListener = EventListenerTouchOneByOne::create();
	touchListener->onTouchBegan = CC_CALLBACK_2(HelloWorld::onTouchBegan, this);
	touchListener->onTouchEnded = CC_CALLBACK_2(HelloWorld::onTouchEnded, this);

	//����¼�����
	_eventDispatcher->addEventListenerWithSceneGraphPriority(touchListener, this);

	// �������ɿ�Ƭ�ķ���  
	createCardSprite(visibleSize);

	// �������������  
	autoCreateCardNumber();
	autoCreateCardNumber();


    return true;
}

void HelloWorld::onNewGame(cocos2d::Ref* pSender)
{
	MenuItem* btnlabel = (MenuItem*)pSender;
}

void HelloWorld::onAI(cocos2d::Ref* pSender)
{
	MenuItem* btnlabel = (MenuItem*)pSender;
}

void HelloWorld::onTest(cocos2d::Ref* pSender)
{
	MenuItem* testLabel = (MenuItem*)pSender;
}

//��������ʶ����¼�
bool HelloWorld::onTouchBegan(cocos2d::Touch *touch, cocos2d::Event *unused_event)
{
	//������
	Point touchP0 = touch->getLocation();

	firstX = touchP0.x;
	firstY = touchP0.y;

	return true;
}

//������������
void HelloWorld::onTouchEnded(cocos2d::Touch * touch, cocos2d::Event *unused_event)
{
	//��ȡ�������λ��
	Point touchP0 = touch->getLocation();
	//��ȡx���y����ƶ�����
	endX = firstX - touchP0.x;
	endY = firstY - touchP0.y;

	//�ж�x���y����ƶ����룬���x��ľ���ֵ����y��ľ���ֵ���������ƶ���Ȼ���������ƶ�
	if (abs(endX) > abs(endY))
	{
		//����
		if (endX + 5 > 0)
		{
			//���
			if (doLeft())
			{
				autoCreateCardNumber();
			}
		}
		else
		{
			//�ұ�
			if (doRight())
			{
				autoCreateCardNumber();
			}
		}
	}
	else
	{
		//����
		if (endY + 5 > 0)
		{
			//�±�
			if (doDown())
			{
				autoCreateCardNumber();
			}
		}
		else
		{
			//�ϱ�
			if (doUp())
			{
				autoCreateCardNumber();
			}
		}
	}

}

//������Ƭ��sizeΪ��Ļ��С
void HelloWorld::createCardSprite(cocos2d::Size size)
{
	//�����Ԫ��Ŀ�Ⱥ͸߶ȣ�28���Ҿ���
	int lon = (size.width - 28) / 4;

	//4*4�ĵ�Ԫ��
	for (int j = 0; j < 4; j++)
	{
		for (int i = 0; i < 4; i++)
		{
			//����0�������ͬΪlon,lon+j+20Ϊ��ƬX��λ�ã���lon+0+20Ϊ��һ����Ƭ��λ�ã�20��ÿ�ſ�Ƭ�ļ�϶��lon+i+20+size.height/6�������˼����Ļ��С������������ݣ���������ֻ��4��λ��  
			CardSprite *card = CardSprite::createCardSprite(0, lon, lon, lon*j + 10, lon * i + 10 + size.height / 6);
			addChild(card);

			//��ӿ�Ƭ����ά������
			cardArr[j][i] = card;
		}
	}
}

//��
bool HelloWorld::doLeft()
{
	log("doLeft");

	bool isdo = false;
	//�����ѭ��Ϊ4*4����
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			//��һ��ѭ���жϿ�Ƭ�Ǻϲ��������
			for (int x1 = x + 1; x1 < 4; x1++)
			{
				if (cardArr[x1][y]->getNumber()>0)
				{
					//������
					if (cardArr[x][y]->getNumber() <= 0)
					{
						//Ϊ��
						//����Ϊ�ұ߿�Ƭ����ֵ
						cardArr[x][y]->setNumber(cardArr[x1][y]->getNumber());
						cardArr[x1][y]->setNumber(0);

						x--;
						isdo = true;
					}
					else if (cardArr[x][y]->getNumber() == cardArr[x1][y]->getNumber())
					{
						//��ǰ��Ƭ��ֵ����ȽϿ�Ƭ��ֵ��ȣ�����Ϊ���2��
						cardArr[x][y]->setNumber(cardArr[x][y]->getNumber() * 2);
						cardArr[x1][y]->setNumber(0);

						//���÷���

						isdo = true;
					}
					break;//����
				}
			}
		}
	}
	return isdo;
}

//��
bool HelloWorld::doRight()
{
	log("doRight");

	bool isdo = false;
	//�����ѭ��Ϊ4*4����
	for (int y = 0; y < 4; y++)
	{
		for (int x = 3; x >= 0; x--)
		{
			//��һ��ѭ���ж���߿�Ƭ�����Ǻϲ��������
			for (int x1 = x - 1; x1 >= 0; x1--)
			{
				if (cardArr[x1][y]->getNumber()>0)
				{
					//������
					if (cardArr[x][y]->getNumber() <= 0)
					{
						//Ϊ��
						//����Ϊ�ұ߿�Ƭ����ֵ
						cardArr[x][y]->setNumber(cardArr[x1][y]->getNumber());
					

						x++;
						isdo = true;
					}
					else if (cardArr[x][y]->getNumber() == cardArr[x1][y]->getNumber())
					{
						//��ǰ��Ƭ��ֵ����ȽϿ�Ƭ��ֵ��ȣ�����Ϊ���2��
						cardArr[x][y]->setNumber(cardArr[x][y]->getNumber() * 2);
						cardArr[x1][y]->setNumber(0);

						//���÷���

						isdo = true;
					}
					break;//����
				}
			}
		}
	}
	return isdo;
}

//����
bool HelloWorld::doUp()
{
	log("doUp");

	bool isdo = false;
	//�����ѭ��Ϊ4*4����
	for (int x = 0; x < 4; x++)
	{
		for (int y = 3; y >= 0; y--)
		{
			//��һ��ѭ���жϿ�Ƭ�Ǻϲ��������
			for (int y1 = y - 1; y1 >= 0; y1--)
			{
				if (cardArr[x][y1]->getNumber()>0)
				{
					//������
					if (cardArr[x][y]->getNumber() <= 0)
					{
						//Ϊ��
						//����Ϊ�ұ߿�Ƭ����ֵ
						cardArr[x][y]->setNumber(cardArr[x][y1]->getNumber());
						cardArr[x][y1]->setNumber(0);

						y++;
						isdo = true;
					}
					else if (cardArr[x][y]->getNumber() == cardArr[x][y1]->getNumber())
					{
						//��ǰ��Ƭ��ֵ����ȽϿ�Ƭ��ֵ��ȣ�����Ϊ���2��
						cardArr[x][y]->setNumber(cardArr[x][y]->getNumber() * 2);
						cardArr[x][y1]->setNumber(0);

						//���÷���

						isdo = true;
					}
					break;//����
				}
			}
		}
	}
	return isdo;
}

//��
bool HelloWorld::doDown()
{
	log("doDown");
	bool isdo = false;
	//�����ѭ��Ϊ4*4����
	for (int x = 0; x < 4; x++)
	{
		for (int y = 0; y < 4; y++)
		{
			//��һ��ѭ���жϿ�Ƭ�Ǻϲ��������
			for (int y1 = y + 1; y1 <4; y1++)
			{
				if (cardArr[x][y1]->getNumber()>0)
				{
					//������
					if (cardArr[x][y]->getNumber() <= 0)
					{
						//Ϊ��
						//����Ϊ�ұ߿�Ƭ����ֵ
						cardArr[x][y]->setNumber(cardArr[x][y1]->getNumber());
						cardArr[x][y1]->setNumber(0);

						y--;
						isdo = true;
					}
					else if (cardArr[x][y]->getNumber() == cardArr[x][y1]->getNumber())
					{
						//��ǰ��Ƭ��ֵ����ȽϿ�Ƭ��ֵ��ȣ�����Ϊ���2��
						cardArr[x][y]->setNumber(cardArr[x][y]->getNumber() * 2);
						cardArr[x][y1]->setNumber(0);

						//���÷���

						isdo = true;
					}
					break;//����
				}
			}
		}
	}
	return isdo;
}

//�Զ����ɿ�Ƭ
void HelloWorld::autoCreateCardNumber()
{
	int i = CCRANDOM_0_1() * 4;
	int j = CCRANDOM_0_1() * 4;

	//�ж��Ƿ��Ѿ����ڵ�λ��
	if (cardArr[i][j]->getNumber() > 0)
	{
		//�Ѿ����ڣ��ݹ鴴��
		autoCreateCardNumber();
	}
	else
	{
		//����2��4�ı�����1:9�ĸ���
		cardArr[i][j]->setNumber(CCRANDOM_0_1() * 10 < 1 ? 4 : 2);
	}

}