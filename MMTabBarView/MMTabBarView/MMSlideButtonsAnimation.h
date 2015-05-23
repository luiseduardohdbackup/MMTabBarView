//
//  MMSlideButtonsAnimation.h
//  MMTabBarView
//
//  Created by Michael Monscheuer on 9/12/12.
//
//

#import <Cocoa/Cocoa.h>

@interface MMSlideButtonsAnimation : NSViewAnimation

- (instancetype)initWithTabBarButtons:(NSSet *)buttons;

- (void)addAnimationDictionary:(NSDictionary *)aDict;

@end
