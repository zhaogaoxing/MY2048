#include "CardSprite.h"

USING_NS_CC;

//��ʼ����Ϸ��Ƭ�ķ���
CardSprite* CardSprite::createCardSprite(int numbers, int width, int height, float CardSpriteX, float CardSpriteY)
{
	//newһ����Ƭ����
	CardSprite *enemy = new CardSprite();
	if (enemy &&enemy->init())
	{
		enemy->autorelease();
		enemy->enemyInit(numbers, width, height, CardSpriteX, CardSpriteY);
		return enemy;
	}
	CC_SAFE_DELETE(enemy);
	return NULL;
}

// ��Ƭ��ʼ������  
bool CardSprite::init() {
	if (!Sprite::init()) {
		return false;
	}
	return true;
}

void CardSprite::setNumber(int num)
{
	number = num;

	//�ж����ֵĴ�С����������Ĵ�С
	if (number >= 0)
	{
		labTTFCardNumber->setFontSize(80);
	}
	if (number >= 16)
	{
		labTTFCardNumber->setFontSize(60);
	}
	if (number >= 128)
	{
		labTTFCardNumber->setFontSize(40);
	}
	if (number >= 1024)
	{
		labTTFCardNumber->setFontSize(20);
	}

	//�ж�����Ĵ�С������ɫ
	if (number == 0) {
		layerColorBG->setColor(cocos2d::Color3B(200, 190, 180));
	}
	if (number == 2) {
		layerColorBG->setColor(cocos2d::Color3B(240, 230, 220));
	}
	if (number == 4) {
		layerColorBG->setColor(cocos2d::Color3B(240, 220, 200));
	}
	if (number == 8) {
		layerColorBG->setColor(cocos2d::Color3B(240, 180, 120));
	}
	if (number == 16) {
		layerColorBG->setColor(cocos2d::Color3B(240, 140, 90));
	}
	if (number == 32) {
		layerColorBG->setColor(cocos2d::Color3B(240, 120, 90));
	}
	if (number == 64) {
		layerColorBG->setColor(cocos2d::Color3B(240, 90, 60));
	}
	if (number == 128) {
		layerColorBG->setColor(cocos2d::Color3B(240, 90, 60));
	}
	if (number == 256) {
		layerColorBG->setColor(cocos2d::Color3B(240, 200, 70));
	}
	if (number == 512) {
		layerColorBG->setColor(cocos2d::Color3B(240, 200, 70));
	}
	if (number == 1024) {
		layerColorBG->setColor(cocos2d::Color3B(0, 130, 0));
	}
	if (number == 2048) {
		layerColorBG->setColor(cocos2d::Color3B(0, 130, 0));
	}

	//������ʾ������
	if (number > 0)
	{
		labTTFCardNumber->setString(String::createWithFormat("%i", num)->getCString());
	}
	else
	{
		labTTFCardNumber->setString("");
	}
}

//��ȡ����
int CardSprite::getNumber()
{
	return number;
}

//��һ������Ϊ���֣��ڶ�������������Ϊ��Ƭ�Ŀ�ߣ����ĵ���λ��Ƭ��λ��
void CardSprite::enemyInit(int numbers, int width, int height, float CardSpriteX, float CardSpriteY)
{
	//��ʼ������
	number = numbers;

	//������Ϸ��Ƭ�ı�����ɫ
	layerColorBG = cocos2d::LayerColor::create(cocos2d::Color4B(200, 190, 180, 255),width-15,height-15);
	layerColorBG->setPosition(Point(CardSpriteX, CardSpriteY));

	//�ж����������0����ʾ������Ϊ��
	if (number > 0)
	{
		//�����м�����
		labTTFCardNumber = cocos2d::LabelTTF::create(String::createWithFormat("%i", number)->getCString(), "arial",
			100);
	
		//��ʾ��Ƭ���ֵ�λ��������ʾ�ڱ������м�
		labTTFCardNumber->setPosition(Point(layerColorBG->getContentSize().width / 2,
			layerColorBG->getContentSize().height / 2));

		//��ӿ�Ƭ���ֵ�������
		layerColorBG->addChild(labTTFCardNumber);
	}
	else
	{
		//�����м�����
		labTTFCardNumber = cocos2d::LabelTTF::create("", "arial", 80);
		labTTFCardNumber->setPosition(Point(layerColorBG->getContentSize().width / 2, layerColorBG->getContentSize().height / 2));
		layerColorBG->addChild(labTTFCardNumber);
	}
	//����Ƭ��ӵ���
	this->addChild(layerColorBG);
}