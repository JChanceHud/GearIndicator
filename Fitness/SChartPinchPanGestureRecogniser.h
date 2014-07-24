//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPanGestureRecognizer.h"

@class NSMutableArray;

@interface SChartPinchPanGestureRecogniser : UIPanGestureRecognizer
{
    BOOL _aspectLock;
    struct CGPoint _lineRatio;
    struct CGPoint _initialLineRatio;
    struct CGPoint _lastPinchCentre;
    struct CGPoint _initialTouchPoint;
    BOOL _lastPinchCentreValid;
    double _initialPinchDistance;
    struct PinchRecord _lastPinchDistance[5];
    int _lastPinchDistanceIndex;
    NSMutableArray *_lastTouches;
    BOOL _touchChanged;
    int _touchState;
    int _maxTouchState;
    double _panStart;
    BOOL _doPanMomentum;
    float _movementThreshold;
}

@property(nonatomic) float movementThreshold; // @synthesize movementThreshold=_movementThreshold;
@property(nonatomic) BOOL aspectLock; // @synthesize aspectLock=_aspectLock;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (id)init;
- (void)setDefaults;
- (BOOL)hasPinched;
- (BOOL)touchStateChanged;
- (BOOL)hasZoomCentre;
- (struct CGPoint)scale;
- (struct CGPoint)zoomCentreInView:(id)arg1;
- (struct CGPoint)velocityInView:(id)arg1;
- (struct CGPoint)velocity;
- (double)velocityForOrientation:(int)arg1;
- (int)velocityStartIndex;
- (double)pinchDistance;
- (struct CGPoint)locationInView:(id)arg1;

@end

