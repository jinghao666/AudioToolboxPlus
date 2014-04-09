#import "ATPAudioConverter.h"

@interface ATPAudioConverter (Properties)

- (UInt32)minimumInputBufferSize;
- (UInt32)minimumInputBufferSizeWithError:(NSError **)error;

- (UInt32)minimumOutputBufferSize;
- (UInt32)minimumOutputBufferSizeWithError:(NSError **)error;

- (UInt32)maximumInputBufferSize;
- (UInt32)maximumInputBufferSizeWithError:(NSError **)error;

- (UInt32)maximumInputPacketSize;
- (UInt32)maximumInputPacketSizeWithError:(NSError **)error;

- (UInt32)maximumOutputPacketSize;
- (UInt32)maximumOutputPacketSizeWithError:(NSError **)error;

- (NSData *)magicCookie;
- (NSData *)magicCookieWithError:(NSError **)error;

- (UInt32)codecQuality;
- (UInt32)codecQualityWithError:(NSError **)error;

- (void)setCodecQuality:(UInt32)codecQuality;
- (void)setCodecQuality:(UInt32)codecQuality error:(NSError **)error;

- (UInt32)encodeBitRate;
- (UInt32)encodeBitRateWithError:(NSError **)error;

- (void)setEncodeBitRate:(UInt32)encodeBitRate;
- (void)setEncodeBitRate:(UInt32)encodeBitRate error:(NSError **)error;

- (NSArray *)applicableEncodeBitRates;
- (NSArray *)applicableEncodeBitRatesWithError:(NSError **)error;

- (NSArray *)availableEncodeBitRates;
- (NSArray *)availableEncodeBitRatesWithError:(NSError **)error;

- (AudioStreamBasicDescription)inputFormat;
- (AudioStreamBasicDescription)inputFormatWithError:(NSError **)error;

- (AudioStreamBasicDescription)outputFormat;
- (AudioStreamBasicDescription)outputFormatWithError:(NSError **)error;

@end