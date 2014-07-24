//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer, UIColor;

@interface DAProgressOverlayView : UIView
{
    BOOL _triggersDownloadDidFinishAnimationAutomatically;
    UIColor *_overlayColor;
    float _innerRadiusRatio;
    float _outerRadiusRatio;
    float _progress;
    float _stateChangeAnimationDuration;
    int _state;
    float _animationProggress;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) float animationProggress; // @synthesize animationProggress=_animationProggress;
@property(nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) BOOL triggersDownloadDidFinishAnimationAutomatically; // @synthesize triggersDownloadDidFinishAnimationAutomatically=_triggersDownloadDidFinishAnimationAutomatically;
@property(nonatomic) float stateChangeAnimationDuration; // @synthesize stateChangeAnimationDuration=_stateChangeAnimationDuration;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(nonatomic) float outerRadiusRatio; // @synthesize outerRadiusRatio=_outerRadiusRatio;
@property(nonatomic) float innerRadiusRatio; // @synthesize innerRadiusRatio=_innerRadiusRatio;
@property(retain, nonatomic) UIColor *overlayColor; // @synthesize overlayColor=_overlayColor;
- (void).cxx_destruct;
- (void)update;
- (float)outerRadius;
- (float)innerRadius;
- (void)drawRect:(struct CGRect)arg1;
- (void)displayOperationWillTriggerAnimation;
- (void)displayOperationDidFinishAnimation;
- (void)setUp;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end
