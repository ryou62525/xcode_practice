#include "HelloWorldScene.h"
#include "SimpleAudioEngine.h"

USING_NS_CC;

#define WIN_SIZE Director::getInstance()->getWinSize()

Scene* HelloWorld::createScene()
{
    auto scene = Scene::createWithPhysics();
    auto layer = HelloWorld::create();
    scene->addChild(layer);
    return scene;
}

void HelloWorld::onEnter()
{
    Layer::onEnter();
    
    auto gravity = Vec2(0, -98);
    auto scene = dynamic_cast<Scene*>( this->getParent() );
    scene->getPhysicsWorld()->setGravity(gravity);
    scene->getPhysicsWorld()->setDebugDrawMask( PhysicsWorld::DEBUGDRAW_ALL );
    
    createGround();
}

bool HelloWorld::init()
{
    if ( !Layer::init() )
    {
        return false;
    }
    
    auto touchListener = EventListenerTouchOneByOne::create();
    touchListener->onTouchBegan = CC_CALLBACK_2(HelloWorld::onTouchBegan, this);
    touchListener->onTouchMoved = CC_CALLBACK_2(HelloWorld::onTouchMoved, this);
    touchListener->onTouchEnded = CC_CALLBACK_2(HelloWorld::onTouchEnded, this);
    touchListener->onTouchCancelled = CC_CALLBACK_2(HelloWorld::onTouchCancelled, this);
    _eventDispatcher->addEventListenerWithSceneGraphPriority(touchListener, this);

    return true;
}

void HelloWorld::createGround()
{
    //物理的特徴の設定
    PhysicsMaterial material;
    material.density = 1.0f;        //密度
    material.restitution = 0.6f;    //反発係数
    material.friction = 0.5f;       //摩擦係数
    
    //物理構造の設定
    auto body = PhysicsBody::createBox( Size(WIN_SIZE.width, 50), material );
    body->setDynamic( false );
    
    auto node = Node::create();
    node->setAnchorPoint( Point::ANCHOR_MIDDLE );
    node->setPhysicsBody( body );
    node->setPosition( Point( Director::getInstance()->getWinSize().width / 2, 25 ) );
    this->addChild(node);
    
}

void HelloWorld::createBacground()
{
    
}

void HelloWorld::createObject(Point _pos)
{
    auto enemy = Sprite::create( "images/enemy1.png" );
    enemy->setPosition( _pos );
    
    PhysicsMaterial material;
    material.density        = 1.0f;
    material.restitution    = 0.1f;
    material.friction       = 0.5f;
    
    auto body = PhysicsBody::createCircle( enemy->getContentSize().width * 0.47f, material );
    body->setDynamic( true );
    body->setMass(100.0f);
    body->setMoment(100);
    enemy->setPhysicsBody( body );
    
    this->addChild( enemy );
}

bool HelloWorld::onTouchBegan(Touch* touch, Event* unused_event)
{
    createObject( touch->getLocation() );
    return true;
}

void HelloWorld::onTouchMoved(Touch* touch, Event* unused_event)
{
}

void HelloWorld::onTouchEnded(Touch* touch, Event* unused_event)
{
}

void HelloWorld::onTouchCanceled(Touch* touch, Event* unused_event)
{
}
