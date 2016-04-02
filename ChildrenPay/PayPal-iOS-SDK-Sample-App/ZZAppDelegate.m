//
//  Children Pay App.
//  Carlos Rosario 2013-2016
//  Eric De Jesús
//  Angel Agramonte
//
//
//  ZZAppDelegate.m
//  PayPal-iOS-SDK-Sample-App
//
//  Copyright (c) 2014-2016 PayPal, Inc. All rights reserved.
//  All rights reserved.
//

#import "ZZAppDelegate.h"
#import "PayPalMobile.h"

@implementation ZZAppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {

#warning "Enter your credentials"
  [PayPalMobile initializeWithClientIdsForEnvironments:@{PayPalEnvironmentProduction : @"Estoy bregando con esto todavia",
                                                         PayPalEnvironmentSandbox : @"Estoy bregando con esto todavia"}];
  return YES;
}

@end
