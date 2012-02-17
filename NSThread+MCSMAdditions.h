//
//  NSThread+MCSMAdditions.h
//  MCSMFoundation
//
//  Created by Spencer MacDonald on 06/07/2011.
//  Copyright 2011 Square Bracket Software. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSThread (MCSMAdditions)

+ (void)MCSM_performBlockOnMainThread:(void (^)())block;
+ (void)MCSM_performBlockInBackground:(void (^)())block;
+ (void)MCSM_runBlock:(void (^)())block;
- (void)MCSM_performBlock:(void (^)())block;
- (void)MCSM_performBlock:(void (^)())block waitUntilDone:(BOOL)wait;
- (void)MCSM_performBlock:(void (^)())block afterDelay:(NSTimeInterval)delay;

@end
