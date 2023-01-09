#include "SearchWordsForm.h"

using namespace System;
using namespace System::Windows::Forms;
 [STAThreadAttribute]

 void main(array<String^>^ args) {
	 Application::SetCompatibleTextRenderingDefault(false);
	 Application::EnableVisualStyles();
	 SecondControlWork::SearchWordsForm form;
	 Application::Run(% form);
}