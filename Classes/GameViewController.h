//
//  GameViewController.h
//  DGSPhone
//
//  Created by Justin Weiss on 6/5/10.
//  Copyright 2010 Avvo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Game.h"
#import "GoBoardView.h"

enum BoardState {
	kBoardStateStoneNotPlaced,
	kBoardStateZoomedIn,
	kBoardStateStonePlaced
};

@interface GameViewController : UIViewController {
	Game *game;
	Board *board;
	IBOutlet GoBoardView *boardView;
	IBOutlet UIScrollView *scrollView;
	IBOutlet UIBarButtonItem *undoButton;
	IBOutlet UIBarButtonItem *confirmButton;
	BoardState boardState;
}

@property(nonatomic, retain) Game *game;
@property(nonatomic, retain) Board *board;
@property(nonatomic, retain) IBOutlet GoBoardView *boardView;
@property(nonatomic, retain) IBOutlet UIScrollView *scrollView;
@property(nonatomic) BoardState boardState;
@property(nonatomic, retain) IBOutlet UIBarButtonItem *undoButton;
@property(nonatomic, retain) IBOutlet UIBarButtonItem *confirmButton;

- (IBAction)undoMove;
- (IBAction)confirmMove;

@end
