//
//  AppiraterPlugin.h
//  What To Brew
//
//  Created by James Stuckey Weber on 3/27/12.
//  Copyright (c) 2012 ChinStr.apps, All rights reserved.
//

#import <PhoneGap/PGPlugin.h>

@interface AppiraterPlugin : PGPlugin {
	NSString* callbackID;  
}
@property (nonatomic, copy) NSString* callbackID;

//Significant Event Method

- (void) sigEvent:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options;
@end
