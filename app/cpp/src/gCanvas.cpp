/*
* gCanvas.cpp
*
*  Created on: May 6, 2020
*      Author: noyan
 */


#include "gCanvas.h"


gCanvas::gCanvas(gApp* root) : gAndroidCanvas(root) {
  this->root = root;
}

gCanvas::~gCanvas() {
}

void gCanvas::setup() {
    gLogi("gCanvas") << "setup";
    logo.loadImage("glistengine_logo.png");
}

void gCanvas::update() {
  //	gLogi("gCanvas") << "update";
}

void gCanvas::draw() {
  //	gLogi("gCanvas") << "draw";
    logo.draw((getWidth() - logo.getWidth()) / 2, (getHeight() - logo.getHeight()) / 2);
}

void gCanvas::deviceOrientationChanged(DeviceOrientation deviceorientation) {

}

void gCanvas::touchMoved(int x, int y, int fingerId) {

}

void gCanvas::touchPressed(int x, int y, int fingerId) {

}

void gCanvas::touchReleased(int x, int y, int fingerId) {

}

void gCanvas::pause() {

}

void gCanvas::resume() {

}

void gCanvas::windowResized(int w, int h) {
}

void gCanvas::showNotify() {

}

void gCanvas::hideNotify() {

}

