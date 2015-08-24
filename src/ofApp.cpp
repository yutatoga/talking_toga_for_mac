#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    soundPlayer.loadSound("hai.wav");
    soundPlayer.play();
    //    soundPlayer.setMultiPlay(true);
    ofSetFrameRate(30);
    image.loadImage("toga.jpg");
    ofSetWindowShape(image.width, image.height);
    font.loadFont("ヒラギノUD明朝 Std W6.otf", 12);
    message = "はーい";
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    image.draw(0, 0);
    ofPushStyle();
    ofSetColor(0, 0, 0);
    font.drawString(message, ofGetWidth()/2.0f-font.stringWidth(message)/2.0f, font.getLineHeight()+1);
    ofPopStyle();
    font.drawString("1 - はーい\n2 - こら", ofGetHeight(), ofGetWidth()-10);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch (key) {
        case '1':
            soundPlayer.loadSound("hai.wav");
            message = "はーい";
            break;
        case '2':
            soundPlayer.loadSound("kora.wav");
            message = "こら！";
            break;
        case '3':
            soundPlayer.loadSound("nansuka.wav");
            message = "なんすか？";
            break;
        case '4':
            soundPlayer.loadSound("yabakunaisuka.wav");
            message = "やばくないすかw";
            break;
        default:
            break;
    }
    soundPlayer.play();
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
void ofApp::mousePressed(int x, int y, int button){
    soundPlayer.loadSound("kora.wav");
    message = "こら！";
    soundPlayer.play();
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

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
