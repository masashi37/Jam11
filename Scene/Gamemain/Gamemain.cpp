#include "Gamemain.h"

Gamemain::Gamemain(){



}


void Gamemain::Setup(){

}

void Gamemain::Update(){

}

void Gamemain::Draw(){
    ui.Draw();
    ui.Cost(player.GetCost());
}


Scenename Gamemain::Shift(){
	if (env.isPushKey(GLFW_KEY_ENTER)){
		return Scenename::STAGESELECT;
	}
    return Scenename::GAMEMAIN;
}