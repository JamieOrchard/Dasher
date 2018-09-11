#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

namespace Game
{
	BaseEntity* entity_render_queue[100];

	bool Event(SDL_Event* event);
	void Init();
	void GameLoop();
	void Render();
	void Destroy();
}

#endif