#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetCircleResolution(100);
    ofSetFrameRate(36);
    x=100; // x+=xx;
    y=100;
    xx=5; 
    yy=5;
}

//--------------------------------------------------------------
void ofApp::update(){
    x=x+xx;
    y=y+yy;
    
    if(x<100|| ofGetWidth()-100<x){
        xx *=-1;
    }
    if(y<100|| ofGetHeight()-100<y){
        yy *=-1;
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0,0,0);
    
    if(mode%2==0){
        ofSetBackgroundColor(0,0,0);
        
    }
    if(mode%2==1){
        ofSetBackgroundColor(0,255,0);
        
    }
    
    
    
  
    
    ofSetColor(255,255,255,255);
    ofSetLineWidth(3);
 //ofDrawLine(128,339,1024,0);
    for(int i=1; i <= 5; i++) {
        ofDrawLine(0,128*i,1024,128*i);
        }
    for(int i=1; i <= 7; i++) {
        ofDrawLine(128*i,0,128*i,768);
    }
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2,ofGetViewportHeight()/2);
    ofRotate(45);
     ofDrawRectangle(-150,-150,ofRandom(300),ofRandom(300));
    ofPopMatrix();
    
    /*
     ofSetColor(255,255,205,205);
     ofNoFill();
     ofDrawCircle(x,y,100);
     ofDrawCircle(428,528,ofRandom(200));
     ofSetColor(0,255,255,ofRandom(05));
     ofFill();
     ofDrawRectangle(128*4,128*2, 128*2,128*2);
     ofSetColor(255,205,255,205);
     ofDrawTriangle(128*2+40,128*4+40,128*2+40,128*5+80,128*3+80,128*5+80);
     ofSetColor(202,255,255,205);
     ofDrawEllipse(600,300,128*1.5,644);
     */
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key=='a'){
        xx+=3;//xx=xx+3
        yy+=3;//yy=yy+3
    }
    if(key=='s'){
        xx-=1;//xx=xx-1
        yy-=1;//yy=yy-1
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
void ofApp::mousePressed(int x, int y, int button){
    
    mode++;
    ofBackground(ofRandom(50),ofRandom(50),ofRandom(50));

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
