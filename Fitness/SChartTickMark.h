//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UILabel, UIView;

@interface SChartTickMark : NSObject
{
    BOOL tickEnabled;
    BOOL isMajor;
    BOOL overAlternateStripe;
    float tickMarkX;
    float tickMarkY;
    UILabel *tickLabel;
    UIView *tickMarkView;
    UIView *gridLineView;
    UIView *gridStripeView;
    double value;
}

@property(retain, nonatomic) UIView *gridStripeView; // @synthesize gridStripeView;
@property(retain, nonatomic) UIView *gridLineView; // @synthesize gridLineView;
@property(retain, nonatomic) UIView *tickMarkView; // @synthesize tickMarkView;
@property(nonatomic) double value; // @synthesize value;
@property(nonatomic) BOOL overAlternateStripe; // @synthesize overAlternateStripe;
@property(retain, nonatomic) UILabel *tickLabel; // @synthesize tickLabel;
@property(nonatomic) float tickMarkY; // @synthesize tickMarkY;
@property(nonatomic) float tickMarkX; // @synthesize tickMarkX;
@property(nonatomic) BOOL isMajor; // @synthesize isMajor;
@property(nonatomic) BOOL tickEnabled; // @synthesize tickEnabled;
- (void)styleTickLabel:(id)arg1;
- (id)description;
- (void)dealloc;
- (int)compareForYAxis:(id)arg1;
- (int)compareForXAxis:(id)arg1;
- (float)tickLengthModifier;
- (void)removeAll;
- (void)removeGridStripeView;
- (void)removeGridLineView;
- (void)removeTickMarkView;
- (void)removeLabel;
- (void)disableTick:(id)arg1;
- (id)initWithLabel:(struct CGRect)arg1 andText:(id)arg2;
- (id)init;

@end

