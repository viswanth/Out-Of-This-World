//
//  OuterSpaceTableViewController.h
//  Out of this World
//
//  Created by Srikanth on 5/27/15.
//  Copyright (c) 2015 ViswanthWorks. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AddSpaceObjectViewController.h"

@interface OuterSpaceTableViewController : UITableViewController <AddSpaceObjectViewControllerDelegate>

@property (strong, nonatomic) NSMutableArray *planets;
@property (strong, nonatomic) NSMutableArray *addedSpaceObjects;

@end
