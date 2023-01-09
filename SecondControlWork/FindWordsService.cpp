#include "FindWordsService.h"

using namespace System;

void FindWordsService::setTextForAnalyze(System::String^ text) {
	System::String^ pattern = " ,.!:\t\n";
	words = text->Split(pattern->ToCharArray());
}

System::String^ FindWordsService::getVowelsStartingWords() {
	System::String^ resultText = "";

	wchar_t lowerVowels[] = { 
		L'\u0430', L'\u0435', L'\u0438', L'\u043E', L'\u0443', L'\u044B', L'\u044D', L'\u044E', L'\u044F', L'\u0451' 
	};
	wchar_t upperVowels[] = {
		L'\u0410', L'\u0415', L'\u0418', L'\u041E', L'\u0423', L'\u042B', L'\u042D', L'\u042E', L'\u042F' 
	};

	for (int i = 0; i < words->Length; i++) {
		if (words[i]->Length > 0) {
			for (int j = 0; j < 10; j++) {
				if (words[i][0] == upperVowels[j] || words[i][0] == lowerVowels[j]) {
					resultText += " " + words[i];
					break;
				}
			}
		}
	}

	return resultText;
}