//
//  MasterViewController.h
//  ControllingSourceTest
//
//  Created by EasyinWan on 7/5/15.
//  Copyright (c) 2015 ___HH_NAME___. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;


@end

