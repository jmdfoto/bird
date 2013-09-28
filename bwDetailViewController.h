//
//  bwDetailViewController.h
//  BirdWatching
//
//  Created by John De leon on 9/28/13.
//  Copyright (c) 2013 John De leon. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface bwDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
