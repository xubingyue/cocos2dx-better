/****************************************************************************
Copyright (c) 2010-2012 cocos2d-x.org
Copyright (c) 2009-2010 Ricardo Quesada
Copyright (c) 2009      Matt Oswald
Copyright (c) 2011      Zynga Inc.

http://www.cocos2d-x.org

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#include "CBSpriteBatchNode.h"

NS_CC_BEGIN

CBSpriteBatchNode* CBSpriteBatchNode::createWithTexture(CCTexture2D* tex, unsigned int capacity) {
    CBSpriteBatchNode *batchNode = new CBSpriteBatchNode();
    batchNode->initWithTexture(tex, capacity);
    batchNode->autorelease();

    return batchNode;
}

CBSpriteBatchNode* CBSpriteBatchNode::create(const char *fileImage, unsigned int capacity) {
    CBSpriteBatchNode *batchNode = new CBSpriteBatchNode();
    batchNode->initWithFile(fileImage, capacity);
    batchNode->autorelease();

    return batchNode;
}

CBSpriteBatchNode::CBSpriteBatchNode() {
}

CBSpriteBatchNode::~CBSpriteBatchNode() {
}

void CBSpriteBatchNode::insertQuadFromSprite(CCSprite *sprite, unsigned int index) {
	CCSpriteBatchNode::insertQuadFromSprite(sprite, index);
}

void CBSpriteBatchNode::updateQuadFromSprite(CCSprite *sprite, unsigned int index) {
	CCSpriteBatchNode::updateQuadFromSprite(sprite, index);
}

CBSpriteBatchNode * CBSpriteBatchNode::addSpriteWithoutQuad(CCSprite*child, unsigned int z, int aTag) {
	CCSpriteBatchNode::addSpriteWithoutQuad(child, z, aTag);
	return this;
}

NS_CC_END