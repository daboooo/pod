//
//  Site.h
//  AuraTest
//
//  Created by Brody Nelson on 27/05/14.
//  Copyright (c) 2014 Translate Digital. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Visit.h"

@interface Site : NSObject

@property (strong,nonatomic) NSString * name;
@property (nonatomic, retain) Visit * currentVisit;

+(Site*)siteWithDictionary:(NSDictionary*)dictionary;

@end
