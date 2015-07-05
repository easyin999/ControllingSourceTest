//
//  DetailViewController.h
//  ControllingSourceTest
//
//  Created by EasyinWan on 7/5/15.
//  Copyright (c) 2015 ___HH_NAME___. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

