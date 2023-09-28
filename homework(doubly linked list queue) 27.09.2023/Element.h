#pragma once

template <typename T>
struct Element {
	T data;
	Element* prev, * next;
public:
	Element() = default;
	Element(int d) { data = d; };
};