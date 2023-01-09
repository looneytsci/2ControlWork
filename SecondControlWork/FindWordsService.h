#pragma once

using namespace System;

public ref class FindWordsService {
	array <System::String^>^ words;

public:
	System::String^ getVowelsStartingWords();
	void setTextForAnalyze(System::String^ text);
};