//
//  ServiceManager.h
//  Aura
//
//  Created by Brody Nelson on 15/05/14.
//  Copyright (c) 2014 Translate Digital. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Aura.h"
#import "Constants.h"
#import <CoreBluetooth/CoreBluetooth.h>


/* Block handler web response */
typedef void (^SMResult)(BOOL success, int code, NSString *reason, id response, NSData *data);

@interface ServiceManager : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate>

@property (nonatomic, strong) NSString * deviceID;
@property (nonatomic, strong) NSURLSession * session;

//Oauth
@property (nonatomic, strong) NSString * client_id;
@property (nonatomic, strong) NSString * secret;
@property (nonatomic, strong) NSString * access_token;
@property (nonatomic, strong) NSDictionary * lastRequest;

+(ServiceManager*)sharedManager;

- (void)requestForEndpoint:(NSString*)endpoint
                                parameters:(NSDictionary*)parameters
                                    method:(NSString*)verb
                                     store:(BOOL)store 
                                    result:(SMResult)result;

-(void) authWithResult:(SMResult)result;
@end
