//
//  MAPrestoClient.m
//  Overseas
//
//  Created by YURI_JOU on 15-3-9.
//

#import "MAPrestoClient.h"

@implementation MAPrestoClient
static MAPrestoClient *instance;

+ (instancetype)prestoClient{
  static dispatch_once_t onceToken;
  dispatch_once(&onceToken, ^{
    instance = [[self.class alloc] init];
  });
  return instance;
}



@end
