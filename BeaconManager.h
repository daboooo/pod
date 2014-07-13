//
//  BeaconManager.h
//  Aura
//
//  Created by Brody Nelson on 15/05/14.
//  Copyright (c) 2014 Translate Digital. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Constants.h"
#import <CoreLocation/CoreLocation.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import <UIKit/UIKit.h>
#import "ServiceManager.h"
#import "Beacon.h"
#import "EventManager.h"

@protocol BeaconManagerDelegate <NSObject>

@optional
-(void)didFindBeacon:(Beacon*)beacon;
-(void)didLoseBeacon:(Beacon*)beacon;
@end

@interface BeaconManager : NSObject <CLLocationManagerDelegate>

@property (strong, nonatomic) CLBeaconRegion *beaconRegion;
@property (strong, nonatomic) CLLocationManager *locationManager;
@property (strong, nonatomic) NSMutableArray * localBeacons; //CLBeacons that are in range
@property (strong, nonatomic) NSMutableArray * auraBeacons; //Beacons that are currently in range
@property (strong, nonatomic) NSMutableArray * validBeacons; //Beacons that have been approved by Aura
@property (weak, nonatomic) id<EventManagerDelegate> delegate;

+(BeaconManager*)sharedManager;

- (void) initMonitoring;


@end
