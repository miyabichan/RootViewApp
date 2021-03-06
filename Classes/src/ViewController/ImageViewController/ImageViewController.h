//
//  ImageViewController.h
//  RootViewApp
//
//  Created by 風祭みやび on 10/09/16.
//  Copyright 2010 凰華女学院分校 All rights reserved.
//

#import <UIKit/UIKit.h>


@interface ImageViewController : UIViewController<UIScrollViewDelegate> {
@private
	UIScrollView* scrollView_;
	UIImageView* imageView_;
	UIView* modalView_;
	UIImage* image_;
}

@property (nonatomic, retain) UIScrollView* scrollView;
@property (nonatomic, retain) UIImageView* imageView;
@property (nonatomic, retain) UIView* modalView;
@property (nonatomic, retain) UIImage* image;

@end
