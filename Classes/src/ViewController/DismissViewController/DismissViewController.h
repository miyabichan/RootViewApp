//
//  DismissViewController.h
//  RootViewApp
//
//  Created by 風祭みやび on 10/12/16.
//  Copyright 2010 凰華女学院分校 All rights reserved.
//

#import <UIKit/UIKit.h>


@interface DismissViewController : UIViewController {
@private
	UIView* logoutView_;
	UIButton* button_;
}

@property (nonatomic, retain) UIView* logoutView;
@property (nonatomic, retain) UIButton* button;

@end
