//
//  myHelloAppViewController.h
//  myHelloApp
//
//  Created by John Wesp on 4/26/10.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface myHelloAppViewController : UIViewController {
	IBOutlet UILabel *userOutput;
	IBOutlet UITextField *userInput;
}

@property (retain, nonatomic) UITextField *userInput;
@property (retain, nonatomic) UILabel *userOutput;

- (IBAction)setOutput:(id)sender;

@end

