//
//  MAModel.h
//  Overseas
//
//  Created by YURI_JOU on 15-3-7.
//

#import "MTLModel.h"

@interface MAModel : MTLModel<MTLJSONSerializing>

- (id)initWithData:(NSData *)jsonData;
- (id)initWithString:(NSString *)jsonStr;
- (id)initWithDictionary:(NSDictionary *)dictionary;

+ (id)objectWithData:(NSData *)jsonData;
+ (id)objectWithString:(NSString *)jsonStr;
+ (id)objectWithDictionary:(NSDictionary *)dictionary;

+ (NSDictionary *)keyValueMapping;

+ (NSArray *)keysOfDateWithInteger;
+ (NSArray *)keysOfDateWithFormate;
+ (NSDictionary *)keysOfDateWithCustomFormate;
+ (NSDictionary *)keysOfArray;
+ (NSDictionary *)keysOfObject;

@end