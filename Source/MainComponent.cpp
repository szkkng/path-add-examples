#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    setSize (800, 500);
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (juce::Graphics& g)
{
    auto black = juce::Colour::fromFloatRGBA (0.08f, 0.08f, 0.08f, 1.0f);
    auto blue  = juce::Colour::fromFloatRGBA (0.43f, 0.83f, 1.00f, 1.0f);

    g.fillAll (black);  // background colour
    g.setColour (blue); // path colour
    
    juce::Path path;
    
    // Uncomment the line of code you want to check.

    //==============================================================================
    /* addRectangle() */
    
    // path.addRectangle (getLocalBounds().reduced (100));
    
    
    //==============================================================================
    /* addRoundedRectangle() */
    
    // path.addRoundedRectangle (getLocalBounds().reduced (100), 80.0f);

    
    //==============================================================================
    /* addTriangle() */
    
    // path.addTriangle (juce::Point<float> (400.0f, 150.0f),
    //                   juce::Point<float> (285.0f, 350.0f),
    //                   juce::Point<float> (515.0f, 350.0f));

    
    //==============================================================================
    /* addQuadrilateral() */
    
    // path.addQuadrilateral (150.0f, 100.0f,
    //                        200.0f, 400.0f,
    //                        650.0f, 400.0f,
    //                        650.0f, 200.0f);

    
    //==============================================================================
    /* addEllipse() */
    
    // path.addEllipse (getLocalBounds().toFloat().withSizeKeepingCentre (300.0f, 300.0f));

    
    //==============================================================================
    /* addArc() */
    
    // auto bounds = getLocalBounds().toFloat().withSizeKeepingCentre (300.0f, 300.0f);
    // path.addArc (bounds.getX(),
    //              bounds.getY(),
    //              bounds.getWidth(),
    //              bounds.getHeight(),
    //              juce::MathConstants<float>::halfPi,
    //              juce::MathConstants<float>::twoPi,
    //              true);

    
    //==============================================================================
    /* addCentredArc() */
    
    // auto bounds = getLocalBounds().toFloat().withSizeKeepingCentre (300.0f, 300.0f);
    // path.addCentredArc (bounds.getCentreX(),
    //                     bounds.getCentreY(),
    //                     bounds.getWidth() / 2.0f,
    //                     bounds.getHeight() / 2.0f,
    //                     juce::MathConstants<float>::pi / 4.0f,
    //                     juce::MathConstants<float>::halfPi,
    //                     juce::MathConstants<float>::twoPi,
    //                     true);

    
    //==============================================================================
    /* addPieSegment() */
    
    // auto bounds = getLocalBounds().toFloat().withSizeKeepingCentre (300.0f, 300.0f);
    // path.addPieSegment (bounds,
    //                    juce::MathConstants<float>::halfPi,
    //                    juce::MathConstants<float>::twoPi,
    //                    0.5f);

    
    //==============================================================================
    /* addLineSegment() */
    
    // path.addLineSegment (juce::Line<float> (juce::Point<float> (200.0f, 250.0f), juce::Point<float> (350.0f, 250.0f)),
    //                      5.0f);
    // path.addLineSegment (juce::Line<float> (juce::Point<float> (450.0f, 250.0f), juce::Point<float> (600.0f, 250.0f)),
    //                      5.0f);

    
    //==============================================================================
    /* addArrow() */
    
    // path.addArrow (juce::Line<float> (juce::Point<float> (200.0f, 250.0f), juce::Point<float> (600.0f, 250.0f)),
    //                1.0f, 60.0f, 30.0f);

    
    //==============================================================================
    /* addPolygon() */
    
    // path.addPolygon (getBounds().toFloat().getCentre(),
    //                  5, 150.0f);

    
    //==============================================================================
    /* addStar() */
    
    // path.addStar (getBounds().toFloat().getCentre(),
    //               8, 20.0f, 150.0f);

    
    //==============================================================================
    /* addBubble() */
    
    // auto bounds = getLocalBounds().toFloat().withSizeKeepingCentre (300.0f, 100.0f);
    // path.addBubble (bounds,
    //                 bounds.expanded (0.0f, 50.0f),
    //                 juce::Point<float> (500.0f, bounds.getBottom() + 49.9f),
    //                 10.0f, 15.0f);

    
    //==============================================================================
    /* addPath() */
    
    // path.addEllipse (getLocalBounds().toFloat().withSizeKeepingCentre (300.0f, 300.0f));
    //
    // juce::Path additionalPath;
    // additionalPath.addEllipse (getLocalBounds().toFloat().withSizeKeepingCentre (150.0f, 150.0f));
    //
    // path.addPath (additionalPath);

    
    //==============================================================================
    g.strokePath (path, juce::PathStrokeType (1.5f));
}

void MainComponent::resized()
{
}
