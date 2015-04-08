#pragma once

enum {
	IM_8U,
	IM_8I,
	IM_16U,
	IM_16I,
	IM_32U,
	IM_32I,
	IM_32F,
	IM_64F
};

struct Image {
	void* data;
	int type;
	int width, height, channels;
};

void imshow(const char * name, const Image &img);
char getKey(bool wait = false);