//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFUberMapViewController.h"

#import "WFWorkoutMapControlerDelegate.h"

@class CLLocation, WFMKMutablePolylineRenderer, WFWorkoutMapControler;

@interface MapWorkoutVC : WFUberMapViewController <WFWorkoutMapControlerDelegate>
{
    WFWorkoutMapControler *_workoutMapController;
    WFMKMutablePolylineRenderer *_routeRenderer;
    CLLocation *_lastLocation;
}

@property(retain, nonatomic) CLLocation *lastLocation; // @synthesize lastLocation=_lastLocation;
@property(retain, nonatomic) WFMKMutablePolylineRenderer *routeRenderer; // @synthesize routeRenderer=_routeRenderer;
@property(retain, nonatomic) WFWorkoutMapControler *workoutMapController; // @synthesize workoutMapController=_workoutMapController;
- (void).cxx_destruct;
- (void)workotuMapControllerDidUpdateLocation:(id)arg1;
- (void)workoutMapControllerDidClearAll;
- (void)workoutMapControllerDidAddRouteOverlay:(id)arg1;
- (void)workoutMapControllerDidAddRouteAnnotation:(id)arg1;
- (void)workotuMapControllerDidUpdateMapRect:(CDStruct_90e2a262)arg1;
- (void)mapView:(id)arg1 didChangeUserTrackingMode:(int)arg2 animated:(BOOL)arg3;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (void)updateLocation:(id)arg1;
- (void)clearMapAnnotations;
- (void)dealloc;

@end

