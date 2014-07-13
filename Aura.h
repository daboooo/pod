//
//  Aura.h
//  Aura
//
//  Created by Brody Nelson on 14/05/14.
//  Copyright (c) 2014 Translate Digital. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BeaconManager.h"
#import "EventManager.h"
#import "Constants.h"
#import <CoreLocation/CoreLocation.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import <UIKit/UIKit.h>

@class Beacon;
@class BeaconManager;

@protocol AuraDelegate <NSObject>

@optional
-(void)device:(NSString*)uuid didFindBeacon:(Beacon*)beacon;
-(void)device:(NSString *)uuid didLoseBeacon:(Beacon *)beacon;
-(void)device:(NSString*)uuid didEnterSite:(Site*)site;
-(void)device:(NSString *)uuid didExitSite:(Site*)site;

-(void)didExitSite:(Site*)site;
-(void)didEnterSite:(Site*)site;
-(void)didFindBeacon:(Beacon*)beacon;
-(void)didLoseBeacon:(Beacon*)beacon;

@end

@interface Aura : NSObject <EventManagerDelegate>

// Stores reference on client delegate
@property (nonatomic, weak) id<AuraDelegate> delegate;

#pragma mark - Class methods

/**
 * Retrieve reference on shared Aura client instance
 */
+ (Aura *)sharedInstance;

/**
 * Specify Aura client delegate for event callbacks
 */
+ (void)setDelegate:(id<AuraDelegate>)delegate withClientID:(NSString*)client_id secret:(NSString*)secret;

-(void)launch;


@end
