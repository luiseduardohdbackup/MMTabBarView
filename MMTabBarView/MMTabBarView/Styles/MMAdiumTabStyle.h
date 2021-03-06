//
//  MMAdiumTabStyle.h
//  MMTabBarView
//
//  Created by Kent Sutherland on 5/26/06.
//  Copyright 2006 Kent Sutherland. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "MMTabStyle.h"

@interface MMAdiumTabStyle : NSObject <MMTabStyle>
{
	NSImage					*_closeButton;
	NSImage					*_closeButtonDown;
	NSImage					*_closeButtonOver;
	NSImage					*_closeDirtyButton;
	NSImage					*_closeDirtyButtonDown;
	NSImage					*_closeDirtyButtonOver;
	NSImage					*_gradientImage;

	BOOL					_drawsUnified;
	BOOL					_drawsRight;
}

- (void)loadImages;

- (BOOL)drawsUnified;
- (void)setDrawsUnified:(BOOL)value;
- (BOOL)drawsRight;
- (void)setDrawsRight:(BOOL)value;

- (void)encodeWithCoder:(NSCoder *)aCoder;
- (id)initWithCoder:(NSCoder *)aDecoder;

@end
