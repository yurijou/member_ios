//
//  MACameraEncoder.h
//  Overseas
//
//  Created by YURI_JOU on 15-4-5.
//

#import "MAObject.h"

struct MAVideoSize {
  int width;
  int height;
};

typedef struct MAVideoSize MAVideoSize;

@interface MACameraEncoder : MAObject

+ (CMSampleBufferRef)forwardSampleBuffer:(CMSampleBufferRef)sampleBuffer offset:(CMTime)offset;

- (instancetype)initWithUrl:(NSString *)url videoSize:(MAVideoSize)size rate:(Float64)rate;

- (void)finishWritingWithCompletionHandler:(void(^)(void)) completion;
- (BOOL)writeVideoSampleBuffer:(CMSampleBufferRef) sampleBuffer;

@end
