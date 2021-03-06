//
//  Controller showing waiting room game details, with a 'join' button.
//

#import <UIKit/UIKit.h>
#import "NewGame.h"
#import "JWTableViewController.h"

@interface JoinWaitingRoomGameController : JWTableViewController {
	NewGame *game;
	NSString *message;
    UIAlertView *deleteConfirmation;
}

@property (nonatomic, retain) NewGame *game;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) UIAlertView *deleteConfirmation;

@end
