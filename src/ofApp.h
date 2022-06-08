#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		//estado de las teclas
		bool w, s;
		//posicion de la raqueta del P1
		ofVec2f *posRaqP1;
		ofVec2f *posRaqP2;

		ofVec2f *posPelota;
		ofVec2f *velPelota;

		float diamPelota = 20;
		
};
