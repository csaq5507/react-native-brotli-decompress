
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNBrotliDecompressSpec.h"

@interface BrotliDecompress : NSObject <NativeBrotliDecompressSpec>
#else
#import <React/RCTBridgeModule.h>

@interface BrotliDecompress : NSObject <RCTBridgeModule>
#endif

@end
