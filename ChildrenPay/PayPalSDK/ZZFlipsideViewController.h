//
//  Children Pay App.
//  Carlos Rosario 2013-2016
//  Eric De Jesús
//  Angel Agramonte
//
//
//  ZZFlipsideViewController.h
//  PayPal-iOS-SDK-Sample-App
//
//  Copyright (c) 2014-2016 PayPal, Inc. All rights reserved.
//  All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PayPalMobile.h"

@class ZZFlipsideViewController;

@protocol ZZFlipsideViewControllerDelegate

- (BOOL)acceptCreditCards;
- (void)setAcceptCreditCards:(BOOL)processCreditCards;
- (void)setPayPalEnvironment:(NSString *)environment;

@property(nonatomic, strong, readwrite) NSString *environment;
@property(nonatomic, strong, readwrite) NSString *resultText;

@end

#pragma mark -

@interface ZZFlipsideViewController : UIViewController

@property(weak, nonatomic) id <ZZFlipsideViewControllerDelegate> delegate;

@end
