/*
 * ADOBE SYSTEMS INCORPORATED
 * Copyright 2014 Adobe Systems Incorporated
 * All Rights Reserved.

 * NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance with the
 * terms of the Adobe license agreement accompanying it.  If you have received this file from a
 * source other than Adobe, then your use, modification, or distribution of it requires the prior
 * written permission of Adobe.
 */

#import <Foundation/Foundation.h>
#import "ADB_VHB_PlayerDelegate.h"

@class VideoPlayer;
@class VideoAnalyticsProvider;

@interface VideoPlayerDelegate : ADB_VHB_PlayerDelegate

#pragma mark Initializer
- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithPlayer:(VideoPlayer *)player provider:(VideoAnalyticsProvider *)provider NS_DESIGNATED_INITIALIZER;

@end
