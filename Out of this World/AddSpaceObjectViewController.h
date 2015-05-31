//
//  AddSpaceObjectViewController.h
//  Out of this World
//
//  Created by Srikanth on 5/30/15.
//  Copyright (c) 2015 ViswanthWorks. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SpaceObject.h"

@protocol AddSpaceObjectViewControllerDelegate <NSObject>

@required

-(void)addSpaceObject:(SpaceObject *)spaceObject;
-(void)didCancel;

@end

@interface AddSpaceObjectViewController : UIViewController

@property (weak, nonatomic) id <AddSpaceObjectViewControllerDelegate> delegate;

@property (strong, nonatomic) IBOutlet UITextField *nameTextField;
@property (strong, nonatomic) IBOutlet UITextField *diamterTextField;
@property (strong, nonatomic) IBOutlet UITextField *temperatureTextField;
@property (strong, nonatomic) IBOutlet UITextField *numberOfMoonsTextField;
@property (strong, nonatomic) IBOutlet UITextField *interestingFieldTextField;
@property (strong, nonatomic) IBOutlet UITextField *nicknameTextField;

- (IBAction)cancelButtonPressed:(UIButton *)sender;

- (IBAction)addButtonPressed:(UIButton *)sender;

@end
