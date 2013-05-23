//
//  CongratulationsController.h
//  Geography Tutor
//
//  Created by Al Pascual on 12/23/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SoundManager.h"


@interface CongratulationsController : UIViewController {

	int winAnswers;	
	UILabel *myScore;
	SoundManager *sounds;
}

@property (nonatomic,strong) IBOutlet UILabel *myScore;
@property (nonatomic, strong) SoundManager *sounds;

- (IBAction) playAgain:(id)sender;
- (void) setWin:(int)myWin;
- (void) setSound:(SoundManager *) soundMan;
- (void) PlayIt:(SoundManager *) snd;

@end
