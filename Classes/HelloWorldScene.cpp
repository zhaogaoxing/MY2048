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

	auto bging = Sprite::create("background.png");
	bging->setPosition(visibleSize.width / 2 + origin.x, visibleSize.height / 2 + origin.y);
	this->addChild(bging, ZORDER_BG_LAYER);

	auto name_label = Label::createWithTTF(TTFConfig(GAME_FONT_NAME, 32), "2048");
	name_label->setColor(Color3B(0x5B, 0x5B, 0x5B));
	name_label->setPosition(Vec2(visibleSize.width*0.22 + origin.x, visibleSize.height*0.86 + origin.y));
	this->addChild(name_label, ZORDER_BG_LAYER);
    
	//Score,best
	auto score = Sprite::create("item.png");
	auto scalex = 1.0f;
	auto scaley = 0.8f;
	Color3B valcolor = Color3B(0xA5, 0xA5, 0xA5);
	auto pos = Vec2(visibleSize.width*0.6 + origin.x, visibleSize.height*0.86 + origin.y);
	score->setPosition(pos);
	score->setScaleX(scalex);
	score->setScaleY(scaley);
	this->addChild(score, ZORDER_BG_LAYER);

	auto score_label = Label::createWithTTF(TTFConfig(SCORE_FONT_NAME, 24), "score");
	score_label->setColor(Color3B(240, 180, 120));
	score_label->setPosition(score->getContentSize().width*scalex / 2, score->getContentSize().height*scaley*0.9);
	score->addChild(score_label, ZORDER_BG_LAYER);
	scoreValLabel = Label::createWithTTF(TTFConfig(SCORE_FONT_NAME, 24), "0");
	scoreValLabel->setColor(valcolor);
	scoreValLabel->setPosition(score_label->getPositionX(), score_label->getPositionY() - score_label->getContentSize().height);
	score->addChild(scoreValLabel, ZORDER_BG_LAYER);

	auto best_bg = Sprite::create("item.png");
	best_bg->setPosition(pos.x + visibleSize.width*0.25-20, pos.y);
	best_bg->setScaleX(scalex);
	best_bg->setScaleY(scaley);
	this->addChild(best_bg, ZORDER_BG_LAYER);

	auto best_label = Label::createWithTTF(TTFConfig(SCORE_FONT_NAME, 24), "best");
	best_label->setColor(Color3B(240, 180, 120));
	best_label->setPosition(best_bg->getContentSize().width / 2 * scalex / 2+10, best_bg->getContentSize().height*scaley*0.9);
	best_bg->addChild(best_label, ZORDER_BG_LAYER);
	bestValLabel = Label::createWithTTF(TTFConfig(SCORE_FONT_NAME, 24), "0");
	bestValLabel->setColor(valcolor);
	bestValLabel->setPosition(best_label->getPositionX(), best_label->getPositionY() - best_label->getContentSize().height);
	best_bg->addChild(bestValLabel, ZORDER_BG_LAYER);


	//new game
	auto menu = Menu::create();
	menu->setPosition(Vec2::ZERO);
	this->addChild(menu, ZORDER_BG_LAYER);
	auto btsprite = Sprite::create("item.png");
	btsprite->setScaleY(0.5);
	btsprite->setColor(Color3B(0x8B, 0x45, 0x13));
	btsprite->setContentSize(Size(btsprite->getContentSize().width, btsprite->getContentSize().height*btsprite->getScaleY()));
	auto newbtn = MenuItemSprite::create(btsprite, btsprite, std::bind(&HelloWorld::onNewGame, this));
	newbtn->setPosition(Vec2(visibleSize.width*0.80, visibleSize.height*0.70));
	auto btnlabel = Label::createWithTTF(TTFConfig(SCORE_FONT_NAME, 10), "New Game");
	btnlabel->setPosition(newbtn->getContentSize().width / 2, newbtn->getContentSize().height / 2);
	newbtn->addChild(btnlabel);
	menu->addChild(newbtn);

	//AI btn
	auto aibt = Sprite::create("item.png");
	aibt->setScaleY(0.5);
	aibt->setColor(Color3B(0x8B, 0x45, 0x13));
	aibt->setContentSize(Size(aibt->getContentSize().width, aibt->getContentSize().height*aibt->getScaleY()));
	auto ai = MenuItemSprite::create(aibt, aibt, std::bind(&HelloWorld::onAI, this));
	ai->setPosition(Vec2(visibleSize.width*0.50, visibleSize.height*0.70));
	auto ailabel = Label::createWithTTF(TTFConfig(SCORE_FONT_NAME, 16), "AI");
	ailabel->setPosition(ai->getContentSize().width / 2, ai->getContentSize().height / 2);
	ai->addChild(ailabel);
	menu->addChild(ai);

	//test btn
	auto testsp = Sprite::create("item.png");
	testsp->setScaleY(0.5);
	testsp->setColor(Color3B(0x8B, 0x45, 0x13));
	testsp->setContentSize(Size(testsp->getContentSize().width, testsp->getContentSize().height*testsp->getScaleY()));
	auto testItem = MenuItemSprite::create(testsp, testsp, std::bind(&HelloWorld::onTest, this));
	testItem->setPosition(Vec2(visibleSize.width*0.20, visibleSize.height*0.70));
	auto testLabel = Label::createWithTTF(TTFConfig(SCORE_FONT_NAME, 16), "Test");
	testLabel->setPosition(testItem->getContentSize().width / 2, testItem->getContentSize().height / 2);
	testItem->addChild(testLabel);
	menu->addChild(testItem);

    return true;
}

void HelloWorld::onNewGame()
{

}

void HelloWorld::onAI()
{

}

void HelloWorld::onTest()
{

}