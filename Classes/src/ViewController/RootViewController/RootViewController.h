//
//  RootViewController.h
//  RootViewApp
//
//  Created by 風祭みやび on 10/09/16.
//  Copyright 2010 凰華女学院分校 All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TabBarController.h"


@interface RootViewController : UIViewController {
@private
	UIView* loginView_;
	UIButton* button_;
	UIView* modalView_;
	TabBarController* tabBarController_;
	BOOL logined_;
}

@property (nonatomic, retain) UIView* loginView;
@property (nonatomic, retain) UIButton* button;
@property (nonatomic, retain) UIView* modalView;
@property (nonatomic, retain) TabBarController* tabBarController;
@property (nonatomic, assign) BOOL logined;

@end
