//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageOutput.h"

#import "GPUImageInput.h"
#import "GPUImageTextureDelegate.h"

@class GPUImageOutput<GPUImageInput>, NSArray, NSMutableArray;

@interface GPUImageFilterGroup : GPUImageOutput <GPUImageInput, GPUImageTextureDelegate>
{
    NSMutableArray *filters;
    GPUImageOutput<GPUImageInput> *_terminalFilter;
    NSArray *_initialFilters;
    GPUImageOutput<GPUImageInput> *_inputFilterToIgnoreForUpdates;
}

@property(retain, nonatomic) GPUImageOutput<GPUImageInput> *inputFilterToIgnoreForUpdates; // @synthesize inputFilterToIgnoreForUpdates=_inputFilterToIgnoreForUpdates;
@property(retain, nonatomic) NSArray *initialFilters; // @synthesize initialFilters=_initialFilters;
@property(retain, nonatomic) GPUImageOutput<GPUImageInput> *terminalFilter; // @synthesize terminalFilter=_terminalFilter;
- (void).cxx_destruct;
- (void)textureNoLongerNeededForTarget:(id)arg1;
- (void)setCurrentlyReceivingMonochromeInput:(BOOL)arg1;
- (BOOL)wantsMonochromeInput;
- (void)conserveMemoryForNextFrame;
- (void)endProcessing;
- (struct CGSize)maximumOutputSize;
- (void)forceProcessingAtSizeRespectingAspectRatio:(struct CGSize)arg1;
- (void)forceProcessingAtSize:(struct CGSize)arg1;
- (void)setInputRotation:(int)arg1 atIndex:(int)arg2;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(int)arg2;
- (int)nextAvailableTextureIndex;
- (void)setInputTexture:(unsigned int)arg1 atIndex:(int)arg2;
- (void)setTextureDelegate:(id)arg1 atIndex:(int)arg2;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(int)arg2;
- (CDUnknownBlockType)frameProcessingCompletionBlock;
- (void)setFrameProcessingCompletionBlock:(CDUnknownBlockType)arg1;
- (void)removeAllTargets;
- (void)removeTarget:(id)arg1;
- (void)addTarget:(id)arg1 atTextureLocation:(int)arg2;
- (void)setTargetToIgnoreForUpdates:(id)arg1;
- (void)prepareForImageCapture;
- (struct CGImage *)newCGImageFromCurrentlyProcessedOutputWithOrientation:(int)arg1;
- (unsigned int)filterCount;
- (id)filterAtIndex:(unsigned int)arg1;
- (void)addFilter:(id)arg1;
- (id)init;

@end
