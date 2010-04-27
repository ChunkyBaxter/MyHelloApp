//
//  myHelloAppAppDelegate.m
//  myHelloApp
//
//  Created by John Wesp on 4/26/10.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import "myHelloAppAppDelegate.h"
#import "myHelloAppViewController.h"

@implementation myHelloAppAppDelegate

@synthesize window;
@synthesize viewController;


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {    
    
    // Override point for customization after app launch    
    [window addSubview:viewController.view];
    [window makeKeyAndVisible];
	
	return YES;
}


- (void)dealloc {
    [viewController release];
    [window release];
    [super dealloc];
}


@end
