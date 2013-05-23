//
//  iPadMap.h
//  Geography Tutor
//
//  Created by Al Pascual on 12/21/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

#import "MyAnnotation.h"
#import "StateList.h"
#import "MapUtils.h"
#import "SoundManager.h"
#import "ResultsManager.h"
#import "CongratulationsController.h"


@interface iPadMap : UIViewController <MKMapViewDelegate> {

	MKMapView *mapView;
	NSString *answerState;
	StateList *states;
	MapUtils *mapUtils;
	ResultsManager *resultManager;
	
	UILabel *questionLabel;
	UIToolbar *toolbar;
	SoundManager *sounds;
	NSNumber *iLevel;
	
	int triesAnswer;
	int winAnswers;
	CongratulationsController *congratulationController;
	UILabel *scoreLabel;
	Boolean bRestarting;
	
	UIAlertView *alertView;
	
	UIImageView *overlay;
}

@property (nonatomic, strong) IBOutlet MKMapView *mapView;
@property (nonatomic, strong) StateList *states;
@property (nonatomic, strong) MapUtils *mapUtils;
@property (nonatomic, strong) SoundManager *sounds;
@property (nonatomic, strong) NSNumber *iLevel;
@property (nonatomic, strong) ResultsManager *resultManager;
@property (nonatomic, strong) CongratulationsController *congratulationController;
@property (nonatomic, strong) NSString *answerState;
@property (nonatomic, strong) UIAlertView *alertView;

@property (nonatomic, strong) IBOutlet UILabel *questionLabel;
@property (nonatomic, strong) IBOutlet UIToolbar *toolbar;
@property (nonatomic, strong) IBOutlet UILabel *scoreLabel;
@property (nonatomic, strong) IBOutlet UIImageView *overlay;


@end
