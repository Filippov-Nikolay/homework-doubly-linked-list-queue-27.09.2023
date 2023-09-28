#pragma once

struct Element {
	int data;
	Element* prev, * next;
public:
	Element() = default;
	Element(int d) { data = d; };
};