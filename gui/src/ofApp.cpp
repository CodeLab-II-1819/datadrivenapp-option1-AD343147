#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	btn2.set(15, 115, 150, 355);
	btn1.set(15, 15, 690, 100);
	bg.set(10, 10, 700, 465);
	btn3.set(20, 120, 140, 30);
	btn4.set(20, 155, 140, 30);
	btn5.set(20, 190, 140, 30);
	btn6.set(20, 225, 140, 30);
	btn7.set(20, 260, 140, 30);
	btn8.set(20, 295, 140, 30);
	btn9.set(20, 330, 140, 30);
	btn10.set(20, 365, 140, 30);
	btn11.set(20, 400, 140, 30);
	btn12.set(20, 435, 140, 30);
	btn13.set(580, 85, 115, 20);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	
	ofSetColor(0,255,255);
	ofDrawRectangle(bg);

	ofSetColor(0, 102, 102);
	ofDrawRectangle(btn1);

	ofSetColor(0, 102, 102);
	ofDrawRectangle(btn2);

	ofSetColor(0, 217, 217);
	ofDrawRectangle(btn3);

	ofSetColor(0, 217, 217);
	ofDrawRectangle(btn4);
	
	ofSetColor(0, 217, 217);
	ofDrawRectangle(btn5);
	
	ofSetColor(0, 217, 217);
	ofDrawRectangle(btn6);
	
	ofSetColor(0, 217, 217);
	ofDrawRectangle(btn7);
	
	ofSetColor(0, 217, 217);
	ofDrawRectangle(btn8);
	
	ofSetColor(0, 217, 217);
	ofDrawRectangle(btn9);
	
	ofSetColor(0, 217, 217);
	ofDrawRectangle(btn10);
	
	ofSetColor(0, 217, 217);
	ofDrawRectangle(btn11);

	ofSetColor(0, 217, 217);
	ofDrawRectangle(btn12);

	ofSetColor(0, 217, 217);
	ofDrawRectangle(btn13);

	ofSetColor(0, 102, 102);
	
	ofDrawBitmapString("Search", 610, 100);

	ofDrawBitmapString("Uber", 70, 140);

	ofDrawBitmapString("Dreamworks", 55, 175);

	ofDrawBitmapString("Paris", 70, 210);

	ofDrawBitmapString("Dog", 70, 245);

	ofDrawBitmapString("Pixar", 70, 280);

	ofDrawBitmapString("FC Barcelona", 48, 315);

	ofDrawBitmapString("Count Total", 52, 350);

	ofDrawBitmapString("Count Money", 52, 385);

	ofDrawBitmapString("Count Politics", 40, 420);

	ofDrawBitmapString("Count Football", 40, 455);

	ofSetColor(0, 217, 217);

	ofDrawBitmapString("Twitter api", 350, 50);


}


