#pragma once

class SoundBlackboard final
{
public:
	static SoundBlackboard* Get();
	static void Destroy();
		
private:
	SoundBlackboard();
	~SoundBlackboard();
};