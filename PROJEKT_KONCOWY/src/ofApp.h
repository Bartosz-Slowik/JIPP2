#pragma once

#include "ofMain.h"
#include "Plansza.h"
class ofApp : public ofBaseApp{

	public:
		
		//FUNKCJE GUI
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

		//MOJE FUNKCJE
		//friend class Przyjaciel;
		int liczbaWierszy;
		int liczbaKolumn;
		int liczbaMin;
		
		ofImage cyfra[11];
		ofImage kostka[10];
		ofImage winner;
		ofImage mina;
		ofImage mina2;
		ofImage flaga;
		ofImage nieodkryta;
		ofImage dead;
		ofImage ohh;
		ofImage smile;
		ofImage wyniki;
		void drawCell(Pole pole, ofPoint punkt);
		void drawTime();
		
		Plansza p1;
	
		
};
