//
//  SpaceDataViewController.h
//  Out of this World
//
//  Created by Srikanth on 5/30/15.
//  Copyright (c) 2015 ViswanthWorks. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SpaceObject.h"

@interface SpaceDataViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
@property (strong, nonatomic) IBOutlet UITableView *tableView;
@property (strong, nonatomic) SpaceObject *spaceObject;
@end
