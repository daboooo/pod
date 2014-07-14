//
//  EventManager.h
//  AuraTest
//
//  Created by Brody Nelson on 27/05/14.
//  Copyright (c) 2014 Translate Digital. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import <CoreLocation/CoreLocation.h>
#import "PTPusher.h"
#import "PTPusherAPI.h"
#import "Beacon.h"
#import "Site.h"

@protocol EventManagerDelegate <NSObject>

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

@interface EventManager : NSObject <PTPusherDelegate>

+(EventManager*)sharedManager;

@property (nonatomic, strong) PTPusherChannel *channel;
@property (nonatomic, weak) id <EventManagerDelegate> delegate;
@property (nonatomic, strong) PTPusher *pusher;
@property (nonatomic) PTPusherChannel *currentChannel;
@property (nonatomic, strong) NSMutableArray *eventsReceived;
@property (nonatomic, strong) PTPusherAPI *api;

-(void)connectOnChannel:(NSString*)channel;
-(void)unsubscribeOnChannel:(NSString*)channel;
@end
