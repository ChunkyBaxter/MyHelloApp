//
//  myHelloAppAppDelegate.h
//  myHelloApp
//
//  Created by John Wesp on 4/26/10.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@class myHelloAppViewController;

@interface myHelloAppAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    myHelloAppViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet myHelloAppViewController *viewController;

@end

