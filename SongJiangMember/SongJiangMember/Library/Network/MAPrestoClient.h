//
//  MAPrestoClient.h
//  Overseas
//
//  Created by YURI_JOU on 15-3-9.
//

#import "MAObject.h"

@interface MAPrestoClient : MAObject

+ (instancetype)prestoClient;

- (void)cancelAllOperation;
- (void)example:(void (^)(id))completion;


@end
