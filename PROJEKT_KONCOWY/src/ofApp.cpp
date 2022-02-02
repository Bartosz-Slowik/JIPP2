#include <iostream>
#include "ofApp.h"
#include "Plansza.h"
#include "Przyjaciel.h"
#include <string>
#include <chrono>   

#define SKALA 32
#define BELKA 70
using namespace std;



//--------------------------------------------------------------
void ofApp::setup(){
	
	cout << liczbaWierszy<<endl<<liczbaKolumn<<endl<<liczbaMin;
	Plansza p1 = Plansza(liczbaWierszy, liczbaKolumn, liczbaMin);
	ofSetWindowTitle("JIPP - BartoszS");




	ofSetBackgroundColor(ofColor::white);
	ofSetFrameRate(24); // increases power + processor efficiency
	ofBackground(200, 200, 200);
	//load images
	winner.load("images/win.png");
	dead.load("images/dead.png");
	ohh.load("images/ohh.png");
	smile.load("images/smile.png");
	mina.load("images/mine2.png");
	mina2.load("images/mine3.png");
	flaga.load("images/flag.png");
	nieodkryta.load("images/nieodkryta.png");
	wyniki.load("images/wyniki.png");
	for (int i = 0; i < 9; i++) {
		string text = "images/open";
		text += to_string(i);
		text += ".png";
		kostka[i].load(text);
	}
	for (int i = 0; i < 11; i++) {
		string text = "images/digit";
		text += to_string(i);
		text += ".png";
		cyfra[i].load(text);
	}

    p1.printPola();
 
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw() {
	
	drawTime();

	ofSetColor(ofColor::grey);
	for (float i = 0; i < liczbaWierszy; i++) {
		ofDrawLine(0, SKALA * i + BELKA, liczbaKolumn * SKALA, SKALA * i + BELKA);
	}
	for (float i = 0; i < liczbaKolumn; i++) {
		ofDrawLine(SKALA * i, BELKA, SKALA * i, liczbaWierszy * SKALA + BELKA);
	}
	ofSetColor(255);
	for (float i = 0; i < liczbaWierszy; i++) {
		for (float j = 0; j < liczbaKolumn; j++) {
			ofPoint punkt = { i * SKALA, BELKA + j * SKALA };
			Pole pol = p1.pola[i][j];
			drawCell(pol, punkt);
		}

	}

	if (p1.pokaztop) {
		//ofDrawRectangle(0, 0, liczbaKolumn * SKALA, liczbaWierszy * SKALA + BELKA);
		ofClear(0, 255);

		for (int i = 0; i < 10; i++) {
			
			//cout << "-"<<p1.BazaD.wiersze[i].nazwa<<"-";
			//cout << "-" << p1.BazaD.wiersze[i].ID << "-";
			//cout << "-" << p1.BazaD.wiersze[i].wynik << "\n";
			ofDrawBitmapString(p1.BazaD.wiersze[i].wynik, 0, SKALA * i + BELKA);
			ofDrawBitmapString(p1.BazaD.wiersze[i].data, 100, SKALA * i + BELKA);
			ofDrawBitmapString(p1.BazaD.wiersze[i].nazwa, 200, SKALA * i + BELKA);
		}

	}
	if (p1.koniecGry) {
		if (p1.wygrana == true) {
			//ofBackground(50, 250, 50);
			winner.draw(liczbaKolumn * SKALA / 2 - SKALA / 2, BELKA / 2 - SKALA / 2, SKALA, SKALA);

		}
		else {
			//ofBackground(250, 0, 50);
			dead.draw(liczbaKolumn * SKALA / 2 - SKALA / 2, BELKA / 2 - SKALA / 2, SKALA, SKALA);

		}

	}
	else {
		smile.draw(liczbaKolumn * SKALA / 2 - SKALA / 2, BELKA / 2 - SKALA / 2, SKALA, SKALA);
	}
	
}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == '-') {
		p1.BazaD.reset();
		string nazwa = ofSystemTextBoxDialog("JESTES W TOP 10 !!!", "Podaj nazwe:");
		p1.BazaD.dodajRekord(p1.wynik / 100, nazwa);
		p1.BazaD.reset();	
	}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {
	if (!p1.koniecGry) {
		if (button == 0) if (y > BELKA) p1.ruch(x / SKALA, (y - BELKA) / SKALA);
		if (button == 2) {
			
			p1.flaguj(x / SKALA, (y - BELKA) / SKALA);
			
		}
		ohh.draw(liczbaKolumn * SKALA / 2 - SKALA / 2, BELKA / 2 - SKALA / 2, SKALA, SKALA);
	}
	else {
		if (x > (liczbaKolumn * SKALA / 2.f - SKALA - 4 * 26) && x < (liczbaKolumn * SKALA / 2.f - SKALA) && y>(BELKA / 2.f - 46 / 2) && y < (BELKA / 2.f + 26 / 2)) {
			
			p1.BazaD.reset();
			bool temp = p1.sprawdzRekord(p1.BazaD.wiersze[9].intwynik);
			if (temp) {
				string nazwa = ofSystemTextBoxDialog("JESTES W TOP 10 !!!", "Podaj nazwe:");
				p1.BazaD.dodajRekord(p1.wynik / 100,nazwa);

				p1.BazaD.reset();
			}
			p1.pokaztop = true;
			
			
			
		}
	}
	if (button == 0) if (x > (liczbaKolumn * SKALA / 2 - SKALA / 2) && x < (liczbaKolumn * SKALA / 2 + SKALA / 2) && y>(BELKA / 2 - SKALA / 2) && y < (BELKA / 2 + SKALA / 2)) {
		cout << "RESET";
		p1.reset();

	}




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

void ofApp::drawCell(Pole pole, ofPoint punkt) {
	
	if (!pole.isOdkryto()) {
		nieodkryta.draw(punkt.x, punkt.y, SKALA, SKALA);
		if (pole.isFlag()) {
			flaga.draw(punkt.x, punkt.y, SKALA, SKALA);
		}
		if (p1.koniecGry && pole.isMina()) {
			mina.draw(punkt.x, punkt.y, SKALA, SKALA);
		}
	}
	
	else if (pole.isMina()) {
		mina2.draw(punkt.x, punkt.y, SKALA, SKALA);
	}
	else {
		kostka[pole.getLiczba()].draw(punkt.x, punkt.y, SKALA, SKALA);
		pole.setFlaga(false);
	}
	

}
void ofApp::drawTime() {
	
	int cyfrax = SKALA / 16 * 13;
	int cyfray = SKALA / 16 * 23;
	if (!p1.koniecGry) {
		auto end = std::chrono::high_resolution_clock::now();
		auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end - p1.czasStart);
		p1.wynik = elapsed.count();
	}
	if(!p1.start) p1.wynik = 0;
	ofPoint pcyfra = { liczbaKolumn * SKALA / 2.f + SKALA, BELKA / 2.f - cyfray / 2 };
	cyfra[(p1.wynik / 100000%10)].draw(pcyfra.x, pcyfra.y, cyfrax, cyfray);
	cyfra[(p1.wynik / 10000%10)].draw(pcyfra.x+1*cyfrax, pcyfra.y, cyfrax, cyfray);
	cyfra[((p1.wynik / 1000) % 10)].draw(pcyfra.x + 2 * cyfrax, pcyfra.y, cyfrax, cyfray);
	cyfra[((p1.wynik / 100) % 10)].draw(pcyfra.x + 3 * cyfrax, pcyfra.y, cyfrax, cyfray);
	if (!p1.koniecGry) {
		ofPoint pmina = { liczbaKolumn * SKALA / 2.f - SKALA - cyfrax, BELKA / 2.f - cyfray / 2 };
		int temp = 0;
		temp = p1.iloscBomb - p1.iloscFlag;
		if (temp < 0) {
			cyfra[10].draw(pmina.x - 3 * cyfrax, pmina.y, cyfrax, cyfray);
			temp = -temp;
		}
		if (temp > 999) temp = 999;
		cyfra[temp % 10].draw(pmina.x, pmina.y, cyfrax, cyfray);
		cyfra[temp / 10 % 10].draw(pmina.x - 1 * cyfrax, pmina.y, cyfrax, cyfray);
		cyfra[temp / 100].draw(pmina.x - 2 * cyfrax, pmina.y, cyfrax, cyfray);
	}
	else {
		ofDrawRectangle(liczbaKolumn * SKALA / 2.f - SKALA-4*cyfrax, BELKA / 2.f - cyfray / 2,4*cyfrax,cyfray);
		wyniki.draw(liczbaKolumn * SKALA / 2.f - SKALA - 4 * cyfrax, BELKA / 2.f - cyfray / 2,4*cyfrax, cyfray);
		
	}
	


}

