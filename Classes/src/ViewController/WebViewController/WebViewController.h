//
//  WebViewController.h
//  RootViewApp
//
//  Created by 風祭みやび on 10/09/16.
//  Copyright 2010 凰華女学院分校 All rights reserved.
//

#import <UIKit/UIKit.h>


@interface WebViewController : UIViewController<UIWebViewDelegate> {
@private
	UIWebView* webView_;
}

@property (nonatomic, retain) UIWebView* webView;


@end
