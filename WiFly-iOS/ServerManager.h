//
//  ServerManager.h
//  WiFly-iOS
//
//  Created by Sherlock Zhong on 4/19/15.
//  Copyright (c) 2015 SherlockZhong. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "GCDWebServer.h"
#import "GCDWebUploader.h"
#import "GCDWebServerDataResponse.h"
#import "GCDWebServerMultiPartFormRequest.h"

@interface ServerManager : NSObject

@property (strong, nonatomic) GCDWebServer *server;
@property (strong, nonatomic) GCDWebUploader *transmitter;

@property (strong, nonatomic) NSString *name;
@property (strong, nonatomic) NSString *url;

+ (ServerManager *)sharedInstance;

- (void)start;
- (void)setInfo:(NSString *)n url:(NSString *)u;

- (void)startTransmitter;

@end
