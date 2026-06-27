#include "Dll_Form.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Task2FormsApp::Dll_Form form;

    Application::Run(% form);
    return 0;
}