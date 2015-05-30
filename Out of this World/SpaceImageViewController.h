//
//  SpaceImageViewController.h
//  Out of this World
//
//  Created by Srikanth on 5/30/15.
//  Copyright (c) 2015 ViswanthWorks. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SpaceObject.h"

@interface SpaceImageViewController : UIViewController <UIScrollViewDelegate>

@property (strong, nonatomic) IBOutlet UIScrollView *scrollView;
@property (strong, nonatomic) UIImageView *imageView;
@property (strong, nonatomic) SpaceObject *spaceObject;

@end
