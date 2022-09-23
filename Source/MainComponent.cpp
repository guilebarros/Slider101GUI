#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    slider.setSliderStyle(juce::Slider::SliderStyle::LinearVertical);
    slider.setRange(0.0f, 1.0f, 0.01f);
    slider.setTextBoxStyle(juce::Slider::TextBoxBelow, true, 50, 25);
    slider.setValue(0.0f); // valor default que o slider abre
    addAndMakeVisible(slider);

    setSize (400, 200);
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (juce::Graphics& g)
{
    // fundo (background)
    g.fillAll(juce::Colours::black);

}

void MainComponent::resized()
{
    slider.setBounds(getWidth() / 2 - 200, getHeight() / 2 - 100, 400, 200);
}
