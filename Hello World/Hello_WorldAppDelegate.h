//
//  Hello_WorldAppDelegate.h
//  Hello World
//
//  Created by App on 2011/9/26.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Hello_WorldViewController;

@interface Hello_WorldAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet Hello_WorldViewController *viewController;

@end
