//
//  DetailViewController.h
//  MM_CoffeeFindr
//
//  Created by Gabriel Borri de Azevedo on 12/18/14.
//  Copyright (c) 2014 Gabriel Borri de Azevedo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CoffeePlace.h"

@interface DetailViewController : UIViewController

@property CoffeePlace *coffeePlace;
@property CLLocation *currentLocation;

@end
