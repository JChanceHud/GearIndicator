//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIGestureRecognizer.h"

@class UITouch;

@interface SChartBoxGestureRecogniser : UIGestureRecognizer
{
    UITouch *_touches[2];
    struct CGPoint _initialTouch;
    int _nFingersDown;
    int _lastReleasedTouch;
    BOOL _hadTwoFingers;
    BOOL _validGesture;
}

- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)newTouch:(id)arg1;
- (void)reset;
- (void)dealloc;
- (struct CGRect)boxInView:(id)arg1;

@end

