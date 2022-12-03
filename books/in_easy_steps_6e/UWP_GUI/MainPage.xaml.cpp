//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"

using namespace Universal;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

// The Blank Page item template is documented at https://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

MainPage::MainPage()
{
	InitializeComponent();
}


void Universal::MainPage::BtnPick_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
    int i, j, k, seq[60];
    srand((int)time(0));

    for (i = 1; i < 60; i++) seq[i] = i;
    for (i = 1; i < 60; i++)
    {
        j = ((int)rand() % 59) + 1;
        k = seq[i]; seq[i] = seq[j]; seq[j] = k;
    }
    textBlock1->Text = seq[1].ToString();
    textBlock2->Text = seq[2].ToString();
    textBlock3->Text = seq[3].ToString();
    textBlock4->Text = seq[4].ToString();
    textBlock5->Text = seq[5].ToString();
    textBlock6->Text = seq[6].ToString();

    BtnPick->IsEnabled = false;
    BtnReset->IsEnabled = true;
}


void Universal::MainPage::BtnReset_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
    textBlock1->Text = "...";
    textBlock2->Text = "...";
    textBlock3->Text = "...";
    textBlock4->Text = "...";
    textBlock5->Text = "...";
    textBlock6->Text = "...";

    BtnPick->IsEnabled = true;
    BtnReset->IsEnabled = false;
}
