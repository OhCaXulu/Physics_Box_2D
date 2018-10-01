#pragma once
#include "Module.h"
#include "Globals.h"


//Forward declaration (aixi no es putu queixa!!)
class b2World;

class ModulePhysics : public Module
{
public:
	ModulePhysics(Application* app, bool start_enabled = true);
	~ModulePhysics();

	bool Start();
	update_status PreUpdate();
	update_status PostUpdate();
	bool CleanUp();

private:
	b2World* world;
	int radius = 300;
	bool debug;
};