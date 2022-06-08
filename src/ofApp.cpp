#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	//inicializar
	posRaqP1 = new ofVec2f(20, 100);

	posPelota = new ofVec2f(ofGetWidth() / 2, ofGetHeight() / 2);
	velPelota = new ofVec2f(100, -50);
}

//--------------------------------------------------------------
void ofApp::update()
{
	//movimiento de P1
	if (w)
	{
		posRaqP1->y -= 500 * ofGetLastFrameTime() ;
	}
	if (s)
	{
		posRaqP1->y += 500 * ofGetLastFrameTime();
	}

	//simulacion física de la pelota
	posPelota->x += velPelota->x * ofGetLastFrameTime();
	posPelota->y += velPelota->y * ofGetLastFrameTime();
	//rebotes!
}

//--------------------------------------------------------------
void ofApp::draw()
{
	ofBackground(0, 0, 0);

	ofSetColor(255, 255, 0);
	ofCircle(posPelota->x, posPelota->y, diamPelota);

	//raqueta
	ofSetColor(255, 143, 0);
	ofRect( posRaqP1->x, posRaqP1->y, 20, 150);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == 119) //o 'w'
	{
		w = true;
	}
	if (key == 's') 
	{
		s = true;
	}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
	if (key == 119) //o 'w'
	{
		w = false;
	}
	if (key == 's')
	{
		s = false;
	}
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
