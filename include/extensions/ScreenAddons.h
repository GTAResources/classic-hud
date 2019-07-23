#pragma once
#include "plugin.h"

#define DEFAULT_HUD_SCALE 1.0f
#define HORPLUS(a) ((a) * (4.0f / 3.0f) / ScreenAddons::GetAspectRatio())
#define SCREEN_LEFT(a) (HORPLUS((a) * SCREEN_WIDTH / 640.0f) * ScreenAddons::GetScreenMult(0))
#define SCREEN_TOP(a) (((a) * SCREEN_HEIGHT / 480.0f) * ScreenAddons::GetScreenMult(1))
#define SCREEN_RIGHT(a) (SCREEN_WIDTH - SCREEN_LEFT(a))
#define SCREEN_BOTTOM(a) (SCREEN_HEIGHT - SCREEN_TOP(a))
#define SCREEN_MIDDLE_X(a) ((SCREEN_WIDTH * 0.5f) + SCREEN_LEFT(a))
#define SCREEN_MIDDLE_Y(a) ((SCREEN_HEIGHT * 0.5f) + SCREEN_TOP(a))

class ScreenAddons {
public:
	static float ms_fScreenMultiplier[2];

public:
	static float GetAspectRatio();

	static void SetScreenMult(float w, float h = DEFAULT_HUD_SCALE);
	static float GetScreenMult(bool h);
};

