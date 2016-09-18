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


	//加入游戏背景
	auto layerColorBG = cocos2d::LayerColor::create(cocos2d::Color4B(180, 170, 160, 255));
	this->addChild(layerColorBG);
	
	auto labelTTFCardNumberName = LabelTTF::create("分数","arial", 80);
	labelTTFCardNumberName->setPosition(Point(visibleSize.width / 5, visibleSize.height - 100));
	addChild(labelTTFCardNumberName);

	//创建手势识别的事件监听器
	auto touchListener = EventListenerTouchOneByOne::create();
	touchListener->onTouchBegan = CC_CALLBACK_2(HelloWorld::onTouchBegan, this);
	touchListener->onTouchEnded = CC_CALLBACK_2(HelloWorld::onTouchEnded, this);

	//添加事件监听
	_eventDispatcher->addEventListenerWithSceneGraphPriority(touchListener, this);

	// 调用生成卡片的方法  
	createCardSprite(visibleSize);

	// 调用生成随机数  
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

//加入手势识别的事件
bool HelloWorld::onTouchBegan(cocos2d::Touch *touch, cocos2d::Event *unused_event)
{
	//触摸点
	Point touchP0 = touch->getLocation();

	firstX = touchP0.x;
	firstY = touchP0.y;

	return true;
}

//触摸结束触发
void HelloWorld::onTouchEnded(cocos2d::Touch * touch, cocos2d::Event *unused_event)
{
	//获取触摸点的位置
	Point touchP0 = touch->getLocation();
	//获取x轴和y轴的移动距离
	endX = firstX - touchP0.x;
	endY = firstY - touchP0.y;

	//判断x轴和y轴的移动距离，如果x轴的绝对值大于y轴的绝对值就是左右移动不然就是上下移动
	if (abs(endX) > abs(endY))
	{
		//左右
		if (endX + 5 > 0)
		{
			//左边
			if (doLeft())
			{
				autoCreateCardNumber();
			}
		}
		else
		{
			//右边
			if (doRight())
			{
				autoCreateCardNumber();
			}
		}
	}
	else
	{
		//上下
		if (endY + 5 > 0)
		{
			//下边
			if (doDown())
			{
				autoCreateCardNumber();
			}
		}
		else
		{
			//上边
			if (doUp())
			{
				autoCreateCardNumber();
			}
		}
	}

}

//创建卡片，size为屏幕大小
void HelloWorld::createCardSprite(cocos2d::Size size)
{
	//求出单元格的宽度和高度，28左右距离
	int lon = (size.width - 28) / 4;

	//4*4的单元格
	for (int j = 0; j < 4; j++)
	{
		for (int i = 0; i < 4; i++)
		{
			//数字0，宽高相同为lon,lon+j+20为卡片X轴位置，如lon+0+20为第一个卡片的位置，20是每张卡片的间隙，lon+i+20+size.height/6代表的意思是屏幕大小竖方向分了六份，我们这里只放4个位置  
			CardSprite *card = CardSprite::createCardSprite(0, lon, lon, lon*j + 10, lon * i + 10 + size.height / 6);
			addChild(card);

			//添加卡片到二维数组中
			cardArr[j][i] = card;
		}
	}
}

//左
bool HelloWorld::doLeft()
{
	log("doLeft");

	bool isdo = false;
	//最外层循环为4*4迭代
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			//这一层循环判断卡片是合并还是清空
			for (int x1 = x + 1; x1 < 4; x1++)
			{
				if (cardArr[x1][y]->getNumber()>0)
				{
					//有数字
					if (cardArr[x][y]->getNumber() <= 0)
					{
						//为空
						//设置为右边卡片的数值
						cardArr[x][y]->setNumber(cardArr[x1][y]->getNumber());
						cardArr[x1][y]->setNumber(0);

						x--;
						isdo = true;
					}
					else if (cardArr[x][y]->getNumber() == cardArr[x1][y]->getNumber())
					{
						//当前卡片的值与其比较卡片的值相等，设置为其的2倍
						cardArr[x][y]->setNumber(cardArr[x][y]->getNumber() * 2);
						cardArr[x1][y]->setNumber(0);

						//设置分数

						isdo = true;
					}
					break;//跳出
				}
			}
		}
	}
	return isdo;
}

//右
bool HelloWorld::doRight()
{
	log("doRight");

	bool isdo = false;
	//最外层循环为4*4迭代
	for (int y = 0; y < 4; y++)
	{
		for (int x = 3; x >= 0; x--)
		{
			//这一层循环判断左边卡片往右是合并还是清空
			for (int x1 = x - 1; x1 >= 0; x1--)
			{
				if (cardArr[x1][y]->getNumber()>0)
				{
					//有数字
					if (cardArr[x][y]->getNumber() <= 0)
					{
						//为空
						//设置为右边卡片的数值
						cardArr[x][y]->setNumber(cardArr[x1][y]->getNumber());
					

						x++;
						isdo = true;
					}
					else if (cardArr[x][y]->getNumber() == cardArr[x1][y]->getNumber())
					{
						//当前卡片的值与其比较卡片的值相等，设置为其的2倍
						cardArr[x][y]->setNumber(cardArr[x][y]->getNumber() * 2);
						cardArr[x1][y]->setNumber(0);

						//设置分数

						isdo = true;
					}
					break;//跳出
				}
			}
		}
	}
	return isdo;
}

//向上
bool HelloWorld::doUp()
{
	log("doUp");

	bool isdo = false;
	//最外层循环为4*4迭代
	for (int x = 0; x < 4; x++)
	{
		for (int y = 3; y >= 0; y--)
		{
			//这一层循环判断卡片是合并还是清空
			for (int y1 = y - 1; y1 >= 0; y1--)
			{
				if (cardArr[x][y1]->getNumber()>0)
				{
					//有数字
					if (cardArr[x][y]->getNumber() <= 0)
					{
						//为空
						//设置为右边卡片的数值
						cardArr[x][y]->setNumber(cardArr[x][y1]->getNumber());
						cardArr[x][y1]->setNumber(0);

						y++;
						isdo = true;
					}
					else if (cardArr[x][y]->getNumber() == cardArr[x][y1]->getNumber())
					{
						//当前卡片的值与其比较卡片的值相等，设置为其的2倍
						cardArr[x][y]->setNumber(cardArr[x][y]->getNumber() * 2);
						cardArr[x][y1]->setNumber(0);

						//设置分数

						isdo = true;
					}
					break;//跳出
				}
			}
		}
	}
	return isdo;
}

//下
bool HelloWorld::doDown()
{
	log("doDown");
	bool isdo = false;
	//最外层循环为4*4迭代
	for (int x = 0; x < 4; x++)
	{
		for (int y = 0; y < 4; y++)
		{
			//这一层循环判断卡片是合并还是清空
			for (int y1 = y + 1; y1 <4; y1++)
			{
				if (cardArr[x][y1]->getNumber()>0)
				{
					//有数字
					if (cardArr[x][y]->getNumber() <= 0)
					{
						//为空
						//设置为右边卡片的数值
						cardArr[x][y]->setNumber(cardArr[x][y1]->getNumber());
						cardArr[x][y1]->setNumber(0);

						y--;
						isdo = true;
					}
					else if (cardArr[x][y]->getNumber() == cardArr[x][y1]->getNumber())
					{
						//当前卡片的值与其比较卡片的值相等，设置为其的2倍
						cardArr[x][y]->setNumber(cardArr[x][y]->getNumber() * 2);
						cardArr[x][y1]->setNumber(0);

						//设置分数

						isdo = true;
					}
					break;//跳出
				}
			}
		}
	}
	return isdo;
}

//自动生成卡片
void HelloWorld::autoCreateCardNumber()
{
	int i = CCRANDOM_0_1() * 4;
	int j = CCRANDOM_0_1() * 4;

	//判断是否已经存在的位置
	if (cardArr[i][j]->getNumber() > 0)
	{
		//已经存在，递归创建
		autoCreateCardNumber();
	}
	else
	{
		//生成2和4的比例是1:9的概率
		cardArr[i][j]->setNumber(CCRANDOM_0_1() * 10 < 1 ? 4 : 2);
	}

}