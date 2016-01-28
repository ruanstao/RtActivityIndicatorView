//
//  RtActivtyIndicatorView.h
//  RtActivityIndicatorView
//
//  Created by RuanSTao on 16/1/28.
//  Copyright © 2016年 JJS-iMac. All rights reserved.
//  为满足刷新的三种状态，在原有的startAnimating，stopAnimating之外，添加一种prepareAnimation状态
//

#import <UIKit/UIKit.h>

@protocol RtActivityIndicatorViewDelegate;

@interface RtActivtyIndicatorView : UIView
/** The number of circle indicators. */
@property (readwrite, nonatomic) NSUInteger numberOfCircles;

/** The spacing between circles. */
@property (readwrite, nonatomic) CGFloat internalSpacing;

/** The radius of each circle. */
@property (readwrite, nonatomic) CGFloat radius;

/** The base animation delay of each circle. */
@property (readwrite, nonatomic) CGFloat delay;

/** The base animation duration of each circle*/
@property (readwrite, nonatomic) CGFloat duration;

/** The assigned delegate */
@property (weak, nonatomic) id<RtActivityIndicatorViewDelegate> delegate;

/**
 Starts the animation of the activity indicator.
 */
- (void)startAnimating;

/**
 Stops the animation of the acitivity indciator.
 */
- (void)stopAnimating;

/**
 Prepare the animation of the acitivity indciator.
 */
- (void)prepareAnimation;


@end

@protocol RtActivityIndicatorViewDelegate <NSObject>

@optional

/**
 Gets the user-defined background color for a particular circle.
 @param activityIndicatorView The activityIndicatorView owning the circle.
 @param index The index of a particular circle.
 @return The background color of a particular circle.
 */
- (UIColor *)activityIndicatorView:(JJSActivityIndicatorView *)activityIndicatorView
      circleBackgroundColorAtIndex:(NSUInteger)index;

@end