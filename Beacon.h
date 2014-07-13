//
//  Aura.h
//  Aura
//
//  Created by Brody Nelson on 14/05/14.
//  Copyright (c) 2014 Translate Digital. All rights reserved.
//

@class Visit;

@interface Beacon : NSObject

@property (nonatomic, retain) NSNumber * txPower;
@property (nonatomic, retain) NSString * uuid;
@property (nonatomic, retain) NSNumber * minor;
@property (nonatomic, retain) NSNumber * major;
@property (nonatomic, retain) NSNumber * siteID;
@property (nonatomic, retain) NSNumber * siteRegionID;
@property (nonatomic, retain) NSString * description;
@property (nonatomic, retain) NSNumber * exitTimeout; // seconds
@property (nonatomic, retain) NSNumber * regionID;
@property (nonatomic, retain) Visit    * currentVisit;
@property (nonatomic, retain) NSString * beaconID;

+(Beacon*)beaconWithDictionary:(NSDictionary*)dictionary;
@end
