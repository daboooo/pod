//
//  Aura.h
//  Aura
//
//  Created by Brody Nelson on 14/05/14.
//  Copyright (c) 2014 Translate Digital. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@interface Visit : NSObject

@property (nonatomic, retain) NSDate * startTime;
@property (nonatomic, retain) NSDate * endTime;
@property (nonatomic, retain) NSNumber * regionID;
@property (nonatomic, retain) NSString * visitID;

+(Visit*)visitWithDictionary:(NSDictionary*)dictionary;

@end
